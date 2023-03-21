.MODEL TINY
.DATA
INP DB 0
.CODE
MAIN PROC
    MOV SI,0
    MOV AH,1
    MOV CX,0
    INPUT: INT 21H
            MOV INP[SI],AL
            INC CX
            INC SI
            CMP AL,0DH
            JNE INPUT
            
    CALL NEWLINE
    
    MOV DI,0 
    MOV AH,2
    DEC CX
    OUTPUT:MOV BL,INP[DI] 
           CALL CONVERTHEX
           INC DI
           LOOP OUTPUT 
           
           
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

CONVERTHEX PROC
    CMP BL,57
    JLE NUM
    CMP BL,70
    JLE CHAR
    
    NUM:
    SUB BL,48 
    JMP CON
    
    CHAR:
    SUB BL,55 
    
    CON:
    SHL BL,4
    MOV BH,0
    CONV:
    SHL BL,1
    JC P1
    JMP P0
    
    P0: MOV DL,'0'
        INT 21H
        INC BH
        CMP BH,4
        JE EXIT
        JMP CONV
    
    P1: MOV DL,'1'
        INT 21H
        INC BH
        CMP BH,4
        JE EXIT
        JMP CONV
    EXIT:
    RET
    
CONVERTHEX ENDP