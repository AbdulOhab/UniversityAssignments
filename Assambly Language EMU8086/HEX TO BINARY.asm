.MODEL TINY

.DATA 


.CODE

MAIN PROC
.MODEL TINY    
  
 
.CODE 

MAIN PROC  
    
     MOV AH,1   
     INT 21H
             
     MOV BL,AL 
     
     CMP BL,58D 
     JG APFA
     JMP NUM
     
     
     NUM: 
     
     SUB BL,48
     
     MOV DL,'$'
     MOV AH,2
     INT 21H  
     
     JMP ST  
     
     
     APFA:  
     
     SUB BL,55 
     
     ST:
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
    
END
