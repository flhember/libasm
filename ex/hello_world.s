%define MACH_SYSCALL(nb) 	0x2000000 | nb
%define	STDOUT				1
%define	WRITE				4
%define	EXIT				1

section .rodata
	name db "Hello Word!", 0xA
	name_len equ $-name

section	.text
	global start
	global _main

start:
	call _main
	ret

_exit:
	mov		rax, MACH_SYSCALL(EXIT)		; system call for exit
	mov		rdi, 0						; exit code 0
	syscall

_main:
	push	rbp							; push base pointer
	mov		rbp, rsp					; put stack pointer in base pointer
	sub		rsp, 16						; 
	mov		rax, MACH_SYSCALL(WRITE)	; system call for write
	mov		rdi, STDOUT					; stdout
	mov		rsi, name					; adress of str
	mov		rdx, name_len				; number of bytes
	syscall
	jmp _exit							; go to _exit

