
.MODEL TINY
.DATA 

STR DB 50 DUP(0)
STRREV DB 50 DUP(0)  
V1 DB 'NOT PALINDOME$'
V2 DB 'PALINDROME$'


.CODE

   MOV SI,0   
   MOV DI,0   
   MOV CX,0 
   MOV BL,'0'  
                                        
                                        
INPUT:
MOV AH,1
INT 21H 
MOV STR[SI],AL  
INC CX          
INC SI            

CMP AL,13    

JE NEWLINE     
JMP INPUT     



NEWLINE:
MOV AH,2 
MOV DL,10  
INT 21H 
MOV DL,13  
INT 21H 
        
DEC CX 
MOV DI,CX  
MOV SI,0
MOV BX,CX 
  


REVERSE:
DEC DI
MOV DL,STR[DI]
MOV STRREV[SI],DL 
INC SI 
LOOP REVERSE 

MOV CX,BX  



        
        
OUTPUT: 
MOV DL,STRREV[DI] 
CMP DL,STR[DI] 
JE CP
INC BL

CP: 
INC DI 
INT 21H   
     

LOOP OUTPUT 

CMP BL,'0'
JE YES 
JNE NO 

YES:
MOV DL,V1

NO:
MOV DL,V2 



END