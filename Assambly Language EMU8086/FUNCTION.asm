.MODEL TINY

.CODE 
MAIN PROC 
        MOV AH,2
        MOV DL,'1'
        INT 21H
        CALL NEWLINE 
        MOV AH,2
        MOV DL,'0'
        INT 21H
        
        
        MOV AH,4CH
        INT 21H
ENDP

NEWLINE PROC
    
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    
    RET
NEWLINE ENDP