.MODEL TINY

.CODE

MAIN PROC
   
    MOV DX,0000H 
    MOV AX,1011H
    MOV BX,0020H        ;FOR 16 BIT   ANS 
    DIV BX              ; AX/BX = AX, REMINDER = DX
END