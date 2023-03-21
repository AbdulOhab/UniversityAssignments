.MODEL TINY

.DATA

.CODE

MAIN PROC
    
    MOV AH,1       ;FOR INPUT
    INT 21H
    MOV BL,AL
    SUB BL,48H
    
    MOV AH,2
    MOV DL,AL
    INT 21H
    

END
