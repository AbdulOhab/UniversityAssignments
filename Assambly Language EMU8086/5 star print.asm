.MODEL TINY

.DATA
N DW 6


.CODE
;NESTED LOOP

MAIN PROC

    MOV DL,'*'
    MOV AH,2


    MOV BX,N 
    ;INC N

    L1:
    MOV CX,5

      L2: INT 21H
      LOOP L2

    MOV DL,10   ; FOR NEW LINE
    INT 21H     ; FOR NEW LINE
    MOV DL,13   ; FOR NEW LINE
    INT 21H

    MOV DL,'*'  ; FOR STARE
    DEC BX
    MOV CX,BX
    LOOP L1

END