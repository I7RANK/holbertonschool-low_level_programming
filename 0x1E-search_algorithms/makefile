CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
SRC=$@-*.c main_files/$@-main.c

%:
	@cp search_algos.h main_files/
	$(CC) $(CFLAGS) $(SRC)
	./a.out
	@rm a.out || :
	@rm main_files/search_algos.h || :
