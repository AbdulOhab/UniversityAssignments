  .MODEL TINY 
  
  .DATA
  X DB '0'  ; 3
  T DB '0'
  
  
  .CODE
  MAIN PROC 
    
    MOV AH, 1H    ; INPUT
    INT 21H
    
    MOV X, AL     ; STORE THE RESULT  
    
    MOV DL,32D    ; NEW LINE
    
    MOV AH,2H     ; CURSOR
    INT 21H
                  
    MOV DL,X      ; READY TO DISPLAY
    
    MOV AH,2H     ; DISPLAY
    INT 21H
                           
                           
  ; CUSTOM LAW : 2^(X-1) + 1   
  
    MOV T ,'2'     ; 2 FROM THE LAW 
    
    MOV BH, X      ; 3 FROM INPUT
    
    SUB BH,01H     ; X-1 FROM THE LAW
   
    
    SK1:
    ADD BL, T    
    DEC BH   
    
    CMP BH,'0'
    JNE SK1: 
    
    SUB BL,48D
    
    
    

    
   
    MOV DL, BL     ; READY TO DISPLAY
    
    MOV AH,2H     ; DISPLAY
    INT 21H
  
           
                           
  END
  