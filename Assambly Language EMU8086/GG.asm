.MODEL TINY

.DATA
N DB 0
I DB 2
J DB 1 
M DB 0
K DB 2
L DB 0 
Z DB 0
X DB 0
Y DB 0
W DB 0 
.CODE

MAIN PROC
    
    MOV AH,1       ;FOR INPUT
    INT 21H
    MOV DL,AL
    SUB DL,48D
    MOV N,DL       ;ROOT N = 3  
    
    MOV L,DL       ; L = 3 
    
    MOV X,DL       ; X = 3
    
    MOV BL,0
                          
    L1:
    
    ADD BL,K
    DEC L
    
    CMP L,0
    JNE L1           ; BL = 6
    
    DEC BL           ;ROOT BL = 5   
    
    MOV BH,BL        ; BH = 5  
    MOV W ,BL
     
    
    MOV AH,2
    
    
    L4:
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H  
    
     MOV CL,X
     MOV CH,BL     ; CH = 5  
     
    
    CMP N, CL
    JE L3:
    JNE SPC
    
    L3:
    MOV Z,BH
   ; MOV DL,Z       ;CHECK 
   ; INT 21H 
    
                           
                            
    L2: 
    MOV DL,Z
    ADD DL,48
    
    INT 21H 
    
  ;  MOV DL,32
  ;  INT 21H
    
    DEC Z
    
    CMP Z,0
    
    JNE L2  
    
    DEC BH
    DEC BH 
    DEC X
   
     
    CMP X,0
    JNE L4 ;NEXT
    JE NEXT 
    
    

   SPC: 
   DEC W 
   
   SUB CH,W
   
   MOV Y,CH 
   
  ; MOV DL,Y
  ;  INT 21H

   
   SP1:
   
   MOV DL,32
   INT 21H 
   
   DEC Y
   
   CMP Y,0
   JNE SP1
   JE L3
   
   
    
          ;I  = 2
          ;J  = 1
          ;N  = 3
          ;BL = 5
          
    NEXT:   
    
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H 
    
    
    
    MOV CL,N
    SUB CL,I    ;CL = 1
    
    INC I
    
   ; MOV N,48D
  ; MOV DL,I  
  ; INT 21H
   
   CMP CL, 0 
   JE CPL 
             
   CPP: 
   MOV DL,32
   INT 21H
   DEC CL  
   CMP CL, 0 
   JNE CPP
   
   CPL: 
   
   ADD J,2 
   MOV CH,J
   
   P1:
   
   MOV DL,CH
   ADD DL,48
   INT 21H
   DEC CH
   
   CMP CH, 0
   JNE P1
   
   CMP J,BL
   JNE NEXT 
   
   
   
             
   
    
   
END  
    

        
     
   ; CMP BL, 0
   ; JE NE

   
  

    
   
   
   