.MODEL TINY
;0, 1, 1, 2, 3, 5, 8, 13
.DATA
TERM DW 0
PREV DW 0
CURR DW 1
NEXT DW 0

.CODE
MAIN PROC
    
    CALL INDEC
    MOV CX,AX   ;CX = TOTAL TERMS

    CALL NEWLINE
    
    CMP CX,1
    JE TERM1
    CMP CX,2
    JE TERM2
    
    MOV BX,0    ;PREVIOUS TERM
    MOV AX,1    ;CURRENT TERM
    
    
    DEC CX
    DEC CX  ; 2  AX = 2     BX = 1
    
    
    CALCULATE:
        MOV DX,AX   ;TO SAVE CURRENT TERM
        ADD AX,BX   ;AX = AX+BX = RESULT
        MOV BX,DX
        LOOP CALCULATE
        
    JMP PRINT        
    
    TERM1:
        MOV AX,0
        JMP PRINT
        
    TERM2:
        MOV AX,1
        JMP PRINT
        
    PRINT:
        CALL OUTDEC        
    
    EXIT:
        MOV AH,4CH
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

INCLUDE OUTDEC.ASM
INCLUDE INDEC.ASM

END MAIN