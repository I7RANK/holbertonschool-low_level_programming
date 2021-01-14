CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
SRC=$@-*.c main_files/$@-main.c

%:
	@cp search_algos.h main_files/
	$(CC) $(CFLAGS) $(SRC)
	./a.out
	@rm a.out || :
	@rm main_files/search_algos.h || :

r100:
	@cp search_algos.h main_files/
	gcc -Wall -Wextra -Werror -pedantic main_files/100-main.c 100-jump.c -lm -o 100-jump
	./100-jump
	@rm 100-jump || :
	@rm main_files/search_algos.h || :
