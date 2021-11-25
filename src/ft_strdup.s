extern 	_malloc
extern	_ft_strlen
extern	_ft_strcpy
extern ___error

section	.text
		[GLOBAL _ft_strdup:]

_ft_strdup:
	xor		rax, rax		; set return to 0
	mov		r9, rdi			; save strcpy
	push 	r9				; save it on stack

	call	_ft_strlen		; size of rdi

	mov		r8, rax			; put size of str in r8
	add		r8, 1			; add 1 of size for \0
	mov		rdi, r8			; give size of malloc to malloc ft
	call	_malloc
	jc		error			; if carry flag set, go to error
	
	pop	r9					; get r9 value back from the stack
	mov		rsi, r9			; put str to cpy
	mov		rdi, rax		; put pointer of malloc on first arg
	call 	_ft_strcpy

	ret

error:
	mov		r8, rax			; keep errno value
	push	rsp
	call	___error		; get address of errno
	pop		rsp				
	mov		[rax], r8		; put errno value in pointer of errno
	mov		rax, -1			; set return to -1
	ret
