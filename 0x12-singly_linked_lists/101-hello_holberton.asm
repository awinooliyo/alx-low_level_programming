	extern printf


		SECTION .data
message:	db "Hello, Holberton!", 0
format:		db "%s", 10, 0

	SECTION .text

	global main
main:
	push rbp

	mov rdi,format
	mov rsi,message
	mov rax, 0
	call printf

	mov rax, 0
	ret
