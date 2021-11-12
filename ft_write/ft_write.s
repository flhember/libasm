%define MACH_SYSCALL(nb) 	0x2000000 | nb
%define	WRITE				4

section	.text
		[GLOBAL _ft_write:]

_ft_write:
	mov		rax, MACH_SYSCALL(WRITE)
	syscall

	leave
	ret
