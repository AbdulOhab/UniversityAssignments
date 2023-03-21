MAIN PROC
   ;Name:Abdul Ohab
   ;id  :2019000000061 
   
   ;Given UPPERCASE char, this program output LOWERCASE char.
    
   ;First input
   MOV AH,01H
   INT 21H
   
   MOV BL,AL  ;Using BL
   
   SUB BL,32D
   ;Second input
   
   MOV AH,01H
   INT 21H
   
   MOV CL,AL     ;Using CL
   
   SUB CL,32D 
   
   ; third input
   
   MOV AH,01H
   INT 21H
   
   MOV CH,AL       ; Using CH
   
   SUB CH,32D
   
   ;  four iput
   
   MOV AH,01H
   INT 21H
   
   MOV BH,AL       ; Using BH
   
   SUB BH,32D
   
   ;  five ipurt
   
   MOV AH,01H
   INT 21H
   
   MOV DL,AL       ; Using DL
   
   SUB DL,32D
   
   ; FOR SPACE
   MOV DL,32D   ; for SPACE   
   
   MOV AH,2H    ; Display SPACE
   INT 21H 
   ;---------------------------
   
   ;first output
   MOV DL,BL
   
   MOV AH,02H
   INT 21H
   ; second output
   MOV DL,CL
   
   MOV AH,02H
   INT 21H
   ;Third Output
   MOV DL,CH
   
   MOV AH,02H
   INT 21H
   
   ; Four Output
   MOV DL,BH
   
   MOV AH,02H
   INT 21H   
   
   ; Five input
      ; Four Output
   MOV DL,DL
   
   MOV AH,02H
   INT 21H

END


