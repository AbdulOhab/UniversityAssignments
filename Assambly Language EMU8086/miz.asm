DATA SEGMENT
    STR1 DB "ABBA"
    STR2 DB "ABBA"
    MSG1 DB 10,13,'STRING IS NOT A PALINDROME $' 
    MSG2 DB 10,13,'STRING IS A PALINDROME $'
DATA ENDS
DISPLAY MACRO MSG
    MOV AH,9
    LEA DX,MSG
    INT 21H
ENDM   
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
START:
        MOV AX,DATA
        MOV DS,AX                
      
        LEA SI,STR1
        LEA DI,STR2
        ADD DI,4
       
        MOV CX,5
CHECK:
        MOV AL,[SI]
        CMP [DI],AL
        JNE NOTPALIN
        DEC DI
        INC SI
        LOOP CHECK     
       
        DISPLAY MSG2
        JMP EXIT
NOTPALIN:
        DISPLAY MSG1
               
EXIT:   MOV AH,4CH
        INT 21H
CODE ENDS
END START