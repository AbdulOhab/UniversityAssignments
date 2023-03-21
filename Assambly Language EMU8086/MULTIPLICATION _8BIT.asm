.MODEL TINY

.CODE
	MOV AL,2H
	MOV CL,3H

	MUL CL           ;AL*CL = AX     
	                             

    MOV AH,2
	MOV DL,AL
	ADD DL,48D
	INT 21H

END
