%define MACH_SYSCALL(nb) 	0x2000000 | nb
%define	READ				3

section	.text
		[GLOBAL _ft_read:]

_ft_read:
	mov		rax, MACH_SYSCALL(READ)
	syscall

	xor		rax, rax

ft_strlen:
	mov		dl, byte[rsi + rax]	; take one char of rdi (first arg)
	cmp		dl, byte 0			; cmp with \o
	je		end					; if je (jump if equal) go to end
	inc		rax					; incr counter
	call	ft_strlen			; return top of loop

end:
	ret
