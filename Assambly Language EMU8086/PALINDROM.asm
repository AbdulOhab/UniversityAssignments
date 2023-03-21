.MODEL TINY

.DATA 
    STR  DB 50 DUP(0)
    STRL DB 50 DUP(0) 
    STR1 DB ' IS A PALINDROME WORD $'
    STR2 DB ' IS NOT A PALINDROME WORD $'
    
.CODE 
    MOV SI,0
    MOV CX,0
    MOV AH,1
    
    INP:
    INT 21H
    MOV STR[SI],AL  
    INC CX
    INC SI
    CMP AL,13
    JE NL
    JNE INP
   
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
    MOV STRL[SI],DL
    INC SI
    LOOP REV
    
    
    MOV CX,BX
    
    OP:
    MOV DL,STRL[DI] 
    MOV BL,STRL[DI]
    MOV BH,STR[DI]   
    CMP BH,BL
    JNE NP:
    
    INC DI
    INT 21H
  ;  MOV DL,32
   ; INT 21H
    LOOP OP
    JMP N:
    
    NP: 
    MOV DL,13
    INT 21H
    LEA DX,STR2
    MOV AH,09H
    INT 21H 
    JMP ED
    
    N:
    LEA DX,STR1
    MOV AH,09H
    INT 21H
    
    ED:
    
    
 END
 
    