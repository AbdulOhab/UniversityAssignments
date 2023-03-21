;Abdul Ohab
;2019000000061

;.MODEL TINY  SEGMNET
;.MODLE SMALL
;.MODEL LARGE
;.CODE  ; CODE SEGMENT 

MAIN PROC
            
   MOV AH,1H    ; for input
   INT 21H
   
   MOV  BL,AL   ; AH er data coping
   
   MOV DL,32D   ; for SPACE   
   
   MOV AH,2H    ; Display SPACE
   INT 21H
   
   MOV DL,BL    ; COPING USER INPUT
   
   
   MOV AH,2H
   INT 21H      ; DISPLAY USER INPUT
END

