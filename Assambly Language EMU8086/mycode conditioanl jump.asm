; conditional jump

.MODEL TINY

.CODE
MAIN PROC
   MOV BL,5
   CMP BL,2
   
   JE L1
   JNE ENDD
   
   
   
   L1:
   MOV DL,49
   MOV AH,2
   INT 21H 
    
ENDD:    
END