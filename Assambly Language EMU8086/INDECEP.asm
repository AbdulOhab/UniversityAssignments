.DATA

Z DB '0'
INDECEP PROC
;reads a number in range -32768 to 32767
;input: none
;output AX = binary equivalent of number
      PUSH BX                 ;save registers used
      PUSH CX
      PUSH DX  
;print prompt
@BEGIN:
      MOV AH,2
      MOV DL,'?'
      INT 21H                 ;print '?'        
;total=0
      XOR BX,BX               ;BX holds total
;negative = false
      XOR CX,CX               ;CX holds sign
;read a character
      MOV AH,1                
      INT 21H                 ;character in AL
;case character of
      CMP AL,'-'              ;minus sign?
      JE @MINUS               ;yes, set sign
      CMP AL,'+'              ;plus sign
      JE @PLUS                ;yes, another character
      JMP @REPEAT2            ;start processing characters
@MINUS:
      MOV CX,1                ;negative = true
@PLUS:      
      INT 21H                 ;read a character       
;end_case
@REPEAT2:
;if character is between '0' and '9'
      CMP AL,'0'              ;character >= '0'?
      JNGE @NOT_DIGIT         ;illegal character
      CMP AL,'F'              ;character <= '9'?
      JNLE @NOT_DIGIT         ;no, illegal character 
      
      CMP AL,'9'
      JNLE @HX
;then convert character to a digit
      AND AX,000FH            ;convert to digit
      PUSH AX                 ;save on stack
      MOV Z,0H
      JMP @CON 
      @HX:   
      SUB AX,37H
      PUSH AX
      MOV Z,1H
      
     @CON:
;total = total * 10 + digit  
      CMP Z,1
      JNE HPP
      MOV AX,10               ;get 10
      HPP:
      MUL BX                  ;AX = total * 10
      POP BX                  ;retrieve digit
      ADD BX,AX               ;total = total * 10 + digit
;read a character
      MOV AH,1                
      INT 21H
      CMP AL,0DH              ;carriage return?
      JNE @REPEAT2            ;no, keep going
;until CR
      MOV AX,BX               ;store number in AX
;if negative
      OR CX,CX                ;negative number
      JE @EXIT                ;no, exit
;then
      NEG AX                  ;yes, negate
;end_if
@EXIT:
      POP DX                  ;restore registers
      POP CX
      POP BX
      RET                     ;and return
;here if illegal character entered
@NOT_DIGIT:
      MOV AH,2                ;move cursor to a new line
      MOV DL,0DH
      INT 21H
      MOV DL,0AH
      INT 21H
      JMP @BEGIN              ;go to beginning
INDECEP ENDP