# @brief   boc Makefile for Unix like environment.
# @author  eel3
# @date    2015/07/28
#
# @note
# - GCC 4.6.3 (Debian 4.6.3-14+rpi1) on Raspbian

app        := boc
CFLAGS     += -Wall -ansi -pedantic

.PHONY: all
all: $(app)

.PHONY: clean
clean:
	$(RM) $(app)
