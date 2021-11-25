%define MACH_SYSCALL(nb) 	0x2000000 | nb
%define	WRITE				4
extern 	___error 

section	.text
		[GLOBAL _ft_write:]

_ft_write:
	mov		rax, MACH_SYSCALL(WRITE)	; set syscall for write
	syscall
	jc		error						; if carry flag set, go to error
	ret

error:
	mov		r8, rax						; keep errno value
	push	rsp							;
	call	___error					; get address of errno
	pop 	rsp							;
	mov		[rax], r8					; put errno value in pointer of errno
	mov 	rax, -1						; set return to -1
	ret
