section .data
	hello db 'Hello, Holberton!', 0
	format db '%s\n',0

section .text
	global main

main:
	; Prepare arguments for printf
	mov rdi, format; first argument: format string
	mov rsi, hello; second argument: pointer to hello string
	xor eax, eax; clear eax register for printf

	; Call printf function
	call printf

	; Exit program with status 0
	mov eax, o
	ret
