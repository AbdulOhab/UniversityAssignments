.MODEL TINY 

.DATA

NUM_1 DB 23H
NUM_2 DB 93H
MSG   DB "Equal Numbers$"
MSG1  DB "Number 1 is less than Number 2$"
MSG2  DB "Number 1 is greater than Number 2$"
.CODE

MAIN PROC
    MOV AH,2
    MOV CX,256
    MOV DL,0
PRINT_L:
    INT 21H
    INC DL
    DEC CX
    JNZ PRINT_L
    
    MOV AH,4CH
    INT 21H
    
    
END