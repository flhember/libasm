section	.text
		[GLOBAL _ft_strcpy:]

_ft_strcpy:
	xor		rcx, rcx				; set counter to 0
	
loop:
	mov		dl, byte[rsi + rcx]		; take one char of rsi (seconde arg)
	mov		byte[rdi + rcx], dl		; pute in rdi (first arg)
	inc		rcx						; incr counter
	cmp		dl, byte 0				; cmp with \o
	jne		loop					; if jne (jump if not equal) go to top of loop

end:
	mov		rax, rdi				; put res in rax (rax = value return)
	ret
