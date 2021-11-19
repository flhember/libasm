extern 	_malloc
extern	_strlen
extern	_strcpy
extern ___error

section	.text
		[GLOBAL _ft_strdup:]

_ft_strdup:
	xor		rax, rax		; set return to 0
	mov		r9, rdi
	push r9

;	push rdi
	call	_strlen			; size of rdi
;	pop rdi

	mov		r8, rax			; put size of str in r8
	add		r8, 1			; add 1 of size for \0
;	push rdi
	mov		rdi, r8			; give size of malloc to malloc ft
	call	_malloc
;	pop rdi
	cmp rax, rax
	jz _end_error

	pop	r9
	mov		rsi, r9		; put str to cpy
	mov		rdi, rax		; put pointer of malloc on first arg
	call 	_strcpy

	ret

_end_error:
	mov	rax, 0
	ret
