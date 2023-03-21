.MODEL TINY    
  
 
.CODE 

MAIN PROC  
     MOV AH,2
     
     MOV BL,55
          
          
          
     SUB BL,48  
     
     SHL BL,4
     
     MOV DH,0
     CONV:
     SHL BL,1
     JC PRINT1
     JMP PRINT0
     
     PRINT0: 
     MOV DL,'0'
     INT 21H
     INC DH
     CMP DH,4
     JE EXIT
     JMP CONV
     
     PRINT1:
     MOV DL,'1'
     INT 21H
     INC DH
     CMP DH,4
     JE EXIT
     JMP CONV
      
     EXIT: 
     
     
   
           
   END