### Makefile --- 

## Author: ugo@ubuntu
## Version: $Id: Makefile,v 0.0 2012/09/23 15:40:50 ugo Exp $
## Keywords: c++ ext std

-include Makefile.rules

PROJ=std_ext
SRC=ends_with.cc println.cc read_file.cc split.cc s_unique.cc to_lower.cc zip.cc
BIN=std_ext.so
FILES=README.md # src

# C++ only
VPATH=src:obj
OBJ=$(SRC:.cc=.o)

$(BIN): $(OBJ) $(HDR)
	$(CCXX) $(CFLAGS) -O3 -o $(BIN) $(patsubst %, obj/%,$(OBJ)) -shared

%.o : %.cc Makefile
	$(CCXX) $(CFLAGS) -O3 $< -o obj/$@ -shared

check:
	echo "todo"

doc:
	cat README.md

clean:
	rm -f $(BIN)
	rm -f obj/*.o
	rm -f .deps
	rm -f Makefile.rules

dist: clean todo AUTHORS svn_check
	rm -rf $(PROJ)
	mkdir $(PROJ)
	cp -r Makefile AUTHORS TODO $(FILES) $(PROJ)
	-find $(PROJ) -name ".svn" -exec rm -rf {} \;
	-find $(PROJ) -name "*~" -exec rm -rf {} \;
	-find $(PROJ) -name "#*" -exec rm -rf {} \;
	tar cjvf $(PROJ).tar.bz2 $(PROJ)
	rm -rf $(PROJ)
	chmod 644 $(PROJ).tar.bz2

svn_check:
	@svn st | grep \? ; [ $$? = "1" ] \
	|| (echo "----------------------------------------------"\
	&& echo "SOME FILES ARE MISSING FROM THE SVN REPOSITORY"\
	&& echo "----------------------------------------------");

todo:
	grep "FIXME" -r . --exclude="Makefile" > TODO

.PHONY: doc check

### Makefile ends here