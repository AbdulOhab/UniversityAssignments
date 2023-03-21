.MODEL TINY

.DATA

.CODE

MAIN PROC 
    
    MOV AH,2
    MOV DL,'1'
    INT 21H
    
    CALL NEWLINE
    
    MOV AH,2
    MOV DL,'0'
    INT 21H
    
    
MAIN ENDP

NEWLINE PROC
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H
    
    
    RET
    
NEWLINE ENDP
