; Si s1 > s2 => 1
; Si s1 < s2 => -1
; Si s1 == s2 => 0

section	.text
		[GLOBAL _ft_strcmp:]

_ft_strcmp:
	xor		rcx, rcx				; set counter to 0
	
loop:
	mov		dl, byte[rdi + rcx]		; take one char of rdi (first arg)
	mov		dh, byte[rsi + rcx]		; take one char of rsi (second arg)

	cmp		dl, 0					; cmp if s1 is over
	je		end						; then go end

	cmp		dl, dh					; cmp if s1[cnt] == s2[cnt]
	jne		end						; if jne (jump if not equal) go to end
	inc		rcx						; incr counter
	call	loop					; go top of loop

end:
	cmp dl, dh						; cmp 2 last char of s1 and s2
	jg	end_sup						; if dl > dh -> return 1
	jl	end_inf						; if dl < dh -> retun -1
	je	end_equ						; if dl == dh -> return 0

end_sup:
	mov		rax, 1
	ret

end_inf:
	mov		rax, -1
	ret

end_equ:
	mov		rax, 0
	ret
