.MODEL TINY

.DATA 
  STR DB 0

.CODE

    MOV AH,1
    MOV DX,0000H
    MOV CX,0
    
    IP: INT 21H
        MOV DL,AL
        INC CX
        PUSH DX
        CMP DL,13
        
        JNE IP
        
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H
    
    OP:
    POP DX
    INT 21H
    LOOP OP


MAIN PROC 
   
END