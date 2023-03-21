.MODEL TINY

.DATA
N DB 0
I DW 1
J DB 1 
K DB 2
L DB 0 
Z DB 0
.CODE

MAIN PROC
    
    MOV AH,1       ;FOR INPUT
    INT 21H
    MOV DL,AL
    SUB DL,48D
    MOV N,DL       ;ROOT N = 3  
    
    MOV L,DL       ; L = 3 
    
    MOV BL,0
                          
    L1:
    
    ADD BL,K
    DEC L
    
    CMP L,0
    JNE L1           ; BL = 6
    
    DEC BL           ;ROOT BL = 5   
    
    MOV BH,BL        ; BH = 5   
    
    MOV AH,2
    
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H  
    
    L3:
    
    MOV Z,BH
    MOV DL,Z
    INT 21H 
    
                           
                            
    L2: 
    MOV DL,Z
    ADD DL,48
    
    INT 21H
    DEC Z
    
    CMP Z,0
    
    JNE L2   
     
    CMP BH,0
    JE NEXT
    
    DEC BH
    DEC BH
    
    JMP L3
    
    
    NEXT:

END