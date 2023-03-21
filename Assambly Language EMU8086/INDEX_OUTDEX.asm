.MODEL TINEY 



.CODE 
MAIN PROC    
    
    CALL INDEC 
    PUSH AX
    CALL NEWLINE  
     
     
    POP AX
     
    CMP AX,0
    JE ED
      
    MOV CX,AX
    MOV BX,0001H
    MOV AX,0001H
    
    
    L1:
    
    ADD BX,AX
    MOV BX,AX
    
    LOOP L1
    
    ED:
    MOV AX,BX
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


END MAIN


