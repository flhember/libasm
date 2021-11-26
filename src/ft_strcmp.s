section	.text
		[GLOBAL _ft_strcmp:]

_ft_strcmp:
	mov		dl, [rdi]		; take first char of rdi (first arg)
	mov		dh, [rsi]		; take first char of rsi (second arg)
	cmp		dl, 0			; check if str1 exist
	jz		end				; else go to end
	cmp		dh, 0			; check if str2 exist
	jz		end				; else go to end
	
loop:
	mov		dl, [rdi]		; take one char of rdi (first arg)
	mov		dh, [rsi]		; take one char of rsi (second arg)

	cmp		dl, 0			; if s1 is finished
	jz		end				; go end
	cmp		dl, dh			; check if is equal
	jne		end				; if jne (jump if not equal) go to end
	inc		rdi				; incr pointer
	inc		rsi				; incr pointer
	jmp		loop			; go top of loop

end:
	xor		rax, rax
	mov 	al, byte [rdi]
	sub		al, byte [rsi]
	jc 		overflow_return
	ret

overflow_return:
	neg		al
	neg		eax
	ret
