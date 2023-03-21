.MODEL TINY

.DATA 
  STR DB 50 DUP(0)
  STRREV DB 50 DUP(0)

.CODE
    MOV SI,0 ;INPUT INDEX
    MOV CX,0 ; SIZE OF STRING
    
    INP:      ; NEED INPUT
    MOV AH,1
    INT 21H
    MOV STR[SI],AL
    INC CX     ;STRING SIZE
    INC SI     ;INDEX
    CMP AL,13  ; CARRAGE RETURN
    
    JE NL
    JMP INP
    
    NL:
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H
    
    DEC CX
    MOV DI,CX 
    MOV SI,0
    MOV BX,CX
    
    REV:
    DEC DI
    MOV DL,STR[DI]
    MOV STRREV[SI],DL
    
    INC SI
    LOOP REV
    
    MOV CX,BX 
    
    
    OP:
    
    MOV DL,STRREV[DI]
    INC DI  
    INT 21H
    MOV DL,32
    INT 21H 
    LOOP OP

MAIN PROC 
   
END