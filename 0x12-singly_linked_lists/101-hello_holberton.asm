section .data
	format db "Hello, Holberton", 10, 0

section .text
	extern printf

global main
main:
	sub rsp, 8

	lea rdi, [format]
	xor eax, eax
	call printf

	add rsp, 8
	xor eax, eax
	ret
