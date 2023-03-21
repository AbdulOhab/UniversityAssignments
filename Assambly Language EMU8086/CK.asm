.MODEL TINEY 

.CODE 

MAIN PROC
    
 	MOV AH,1H
	INT 21H
    
    
    MOV DL,AL 
    MOV AH,02H
    INT 21H
    
    MOV BL,'A'
 
    MOV BH,'0'
 
    CMP DL,'F'
    JNLE ED
      
    MOV DL,'?'  
     INT 21H
    ED:
    
    
   END