section .data
	hello db 'Hello, Holberton',0
	newline db 10,0
section .text
	global main

extern printf

main:
	sub rsp, 8

	lea rdi, [rel hello]
	call printf

	lea rdi, [rel newline]
	call printf

	add rsp, 8
	ret
