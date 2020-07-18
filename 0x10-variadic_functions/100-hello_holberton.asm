global  _main
	    extern  _printf

	    section .text
_main:
	    push    message
	    syscall    _printf
	    add     esp, 4
	    ret
message:
	    db  'Hello, World', 10, 0
