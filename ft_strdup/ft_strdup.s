extern 	_malloc
extern	_strlen
extern	_ft_strcpy

section	.text
		[GLOBAL _ft_strdup:]

_ft_strdup:
	xor		rax, rax
	push rdi
	call	_strlen			; size of rdi
	pop rdi

	mov		r8, rax
	add		r8, 1
	push rdi
	mov		rdi, r8
	call	_malloc
	pop rdi

	; add protection

	mov		rsi, rdi
	mov		rdi, rax
	call 	_ft_strcpy

	ret
