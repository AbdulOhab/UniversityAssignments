.MODEL TINY

.DATA 
  STR DB '0'

.CODE
    MOV SI,0 ;INPUT INDEX
    MOV DI,0 ;OUTPUT INDEX
    MOV CX,0 ; SIZE OF STRING
    
    INP:      ; NEED INPUT
    MOV AH,1
    INT 21H
    MOV STR[SI],AL
    INC CX     ;STRING SIZE
    INC SI     ;INDEX
    CMP AL,13  ;
    
    JE NL
    JMP INP
    
    NL:
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H
    
    OP:
    MOV DL,STR[DI]
    INC DI
    INT 21H 
    LOOP OP

MAIN PROC 
   
END 