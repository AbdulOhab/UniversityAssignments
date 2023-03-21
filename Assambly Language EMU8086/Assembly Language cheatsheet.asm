
 MOV DL,41H ; for print
 MOV AH,2H
 INT 21H
;============================
; PRINT NEWLINE and carr
MOV DL,10D
INT 21H
MOV DL,13D
INT 21H
;=====================
;print space
MOV DL,32D
MOV AH,2H
INT 21H

;=================================print new line and variable

.MODEL TINY

.DATA
     VAR1 DB 2D
     VAR2 DB 5D

.CODE

MAIN PROC

    MOV DL,VAR1   ;2 PRINT
    ADD DL,48D

    MOV AH,02H
    INT 21H


    ; PRINT NEWLINE and carr
    MOV DL,10D
    INT 21H
    MOV DL,13D
    INT 21H
    ;=====================
    MOV DL,VAR2    ;PRINT 5
    ADD DL,48D

    ;MOV AH,02H
    INT 21H


END

;CONDITIONAL JUMP/ LIKE IF ELSE CONDITION

=================================
;CONDITIONAL JUMP

.MODEL TINY
.CODE

MAIN PROC
    MOV BL,5H
    CMP BL,5H ; CMP IS COMPRISON

    JE L1     ;Jump if Zero

    JNE ENDD ;Jump if Not Zero
    ; JG , JNLE 	Jump if Greater (>). Jump if Not Less or Equal (not <=).


    L1:
    MOV DL,49
    MOV AH,2
    INT 21H

ENDD:

END

;================================================
;PRINT 00 TO XX

.MODEL TINY

A DB '0'
B DB '0'
.CODE


MAIN PROC
    MOV CL,110
    MOV AH,2

    PRINTAB:
    MOV DL,A
    INT 21H
    MOV DL,B
    INT 21H

    MOV DL,' ';SPACE PRINT
    INT 21H

    DEC CL     ; DECRISE VALUE
    CMP CL,-1  ; ekhaney mara CL er value compare korteysi CL 30 er shatey.
               ;jodi -1 hoi taholey end hoye jabey

    JE FINISH



    CMP B, '9'  ; ekok ebong dashok er value niye kaj kora.
    JE INCR

    INC  B      ;INCRICE VALUE
    JNE PRINTAB

    INCR:
    INC A
    MOV B,'0'
    JMP PRINTAB:

FINISH:

END
;================================================
;lOOP
.MODEL TINY


.CODE
;LOOP

MAIN PROC

    MOV AH,2
    MOV DL, 3
    MOV CX,500
    L1: INT 21H

    LOOP L1


END
;===============================================
.MODEL TINY


.CODE
;LOOP

MAIN PROC

    MOV AH,2
    MOV DL, 3
    MOV CX,4


    L1: MOV DL,CL
        INT 21H

    LOOP L1


END
;==============================================
; Nested loop.
.MODEL TINY

.DATA
N DW 5

.CODE
;NESTED LOOP

MAIN PROC

    MOV DL,'*'
    MOV AH,2


    MOV BX,N

    L1:
    MOV CX,N

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
; pattern
*****
*****
*****
*****
*****
;===============
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
;=================================================
.MODEL TINY


.DATA

.CODE

MAIN PROC
    MOV BL, 11110010B
    MOV DL, 00101111B

    AND DL,BL ;AND,OR,XOR

    MOV AH,2
    INT 21H
END
;--------------------------------------------

MOV DL, 254
NEG, DL ; 2'S COMPLIMENT


MOV DL,00011000B
SHR DL,4 ;LEFT SHIFT

; Write code to modify each status flag using multiple SUB instruction. Each
; SUB instruction may change multiple flags, if it does then mention why in the
; comments. [You have to comment beside each SUB instruction on how it affects each flag]
.MODEL TINY

.DATA
N DW 1000B

.CODE

MAIN PROC

    MOV AH,1H       ;FOR INPUT
    INT 21H

    MOV DL,AL
    MOV BX,N

    AND DL,CL

    CMP DL,'0'
    JE PRINT



    MOV DL,'1'
    MOV AH,2H       ; FOR OUTPUT
    INT 21H

    PRINT:
    MOV DL,'0'
    MOV AH,2H
    INT 21H


END
