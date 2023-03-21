.MODEL TINY

.CODE

MAIN PROC
    
    MOV AH,2H
 
    MOV BL,'1'
    
    CMP BL,60    ;ONE(BL)=48,TWO(60)
    JNG ITSNA    ; JUMP IF ONE IS SMALL
    
    MOV BL,'A'
    JMP ET
    
    ITSNA:
   ; MOV BL,'N'
    ET:
    MOV DL,BL
    INT 21H
    
    END
    