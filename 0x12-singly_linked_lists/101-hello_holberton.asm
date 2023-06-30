global main

extern printf

section .data
		fmt: db '%s',0x0a, 0
		msg: db 'Hello, Holberton',0

section .text
		main:
		mov rsi, msg
		mov rdi, fmt
		mov rax, 0

		call printf

		ret
