global main

extern printf

section .data
		fmt: db '%s',0x0a, 0
		msg: db 'Hello, Holberton',0

section .text
		main:
		mov esi, msg
		mov edi, fmt
		mov eax, 0
		call printf

		mov eax, 0
		ret
