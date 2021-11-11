%define MACH_SYSCALL(nb) 	0x2000000 | nb
%define	STDOUT				1
%define	STDIN				0
%define	WRITE				4
%define	READ				3
%define	EXIT				1

section .bss
	input resd 10

section .rodata
	prompt db "Enter str : ", 10, 0
	prompt_len equ $-prompt

section	.text
	global	start
	global	_main

start:
	call 	_main
	ret

_main:
	push 	rbp
	mov		rbp, rsp
	sub		rsp, 16

	mov		rdi, STDOUT
	mov		rsi, prompt
	mov		rdx, prompt_len
	mov		rax, MACH_SYSCALL(WRITE)
	syscall

	mov		rdi, STDIN
	mov		rsi, input
	mov		rdx, 10
	mov		rax, MACH_SYSCALL(READ)
	syscall

	mov		rdi, STDOUT
	mov		rsi, input
	mov		rdx, 10
	mov		rax, MACH_SYSCALL(WRITE)
	syscall

	leave
	ret
