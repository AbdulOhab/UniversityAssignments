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
           CMP AL,13
           JNE INPUT
    
    CALL NEWLINE
    CALL NEWLINE
    MOV DI,0
    MOV AH,2
    DEC CX
    OUTPUT: MOV BL,INP[DI]
            CALL CONVERTOCT
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

CONVERTOCT PROC
     SUB BL,48
     SHL BL,5
     
     MOV DH,0
     CONV:
     SHL BL,1
     JC PRINT1
     JMP PRINT0
     
     PRINT0: 
     MOV DL,'0'
     INT 21H
     INC DH
     CMP DH,3
     JE EXIT
     JMP CONV
     
     PRINT1:
     MOV DL,'1'
     INT 21H
     INC DH
     CMP DH,3
     JE EXIT
     JMP CONV
     
     EXIT:
     RET
      
CONVERTOCT ENDP    

END