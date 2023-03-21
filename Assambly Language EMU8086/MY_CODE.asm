
.MODEL TINY

.CODE

MAIN PROC
    
    CALL INDEC
    PUSH AX 
    CALL NEWLINE
    POP  AX 
    
    MOV BX,0002H
    MOV CX,0000H
    MOV DX,0000H
    
    RP:
    
    DIV BX
    
    PUSH DX
    
    INC CX  
    
    CMP AX,0 
    
    JNLE RP 
    
    MOV AX,0000H
    MOV BX,0000H
    
    LPP:
    
    
    
    MOV DX,0000H
    
    POP DX
    ADD DX,0030H
    
    SHL AX,CL   
    
    ADD BX,AX
    
    LOOP LPP
    JMP ED:  
    
   
    CALL OUTDEC 
    
    
    MOV AH,4CH
    INT 21H
    
MAIN ENDP


INCLUDE INDEC.ASM
INCLUDE OUTDEC.ASM 

NEWLINE PROC
    MOV AH,2
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H
    RET
NEWLINE ENDP  


  ED:
END MAIN