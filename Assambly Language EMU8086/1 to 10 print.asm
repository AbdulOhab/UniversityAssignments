     .MODEL SMALL
     .STACK 100H
     .DATA
        NUM DB 58D

     .CODE
     MAIN PROC
          MOV AX,@DATA
          MOV DS,AX


     START:
         CMP NUM,48D 
         JGE PRINT
         JMP END_


     PRINT:
         MOV AH,2
         MOV DL,NUM
         INT 21H
         DEC NUM
         JMP START

     END_:
         MOV AH,4CH
         MAIN ENDP
     END MAIN