section	.text
		[GLOBAL _ft_strlen:]

_ft_strlen:
	xor		rax, rax			; set counter to 0
	
loop:
	mov		dl, byte[rdi + rax]	; take one char of rdi (first arg)
	cmp		dl, byte 0			; cmp with \o 
	je		end					; if je (jump if equal) go to end
	inc		rax					; incr counter
	jmp		loop				; return top of loop

end:
	ret
