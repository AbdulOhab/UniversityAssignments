.MODEL TINY
.DATA
NUM_1 DB 23H
NUM_2 DB 93H
MSG   DB "Equal Numbers$"
MSG1  DB "Number 1 is less than Number 2$"
MSG2  DB "Number 1 is greater than Number 2$"
.CODE
MOAIN PROC  
    MOV AX,@DATA
    MOV DX,AX
    
    MOV AH,NUM_1
    MOV CH,NUM_2
    
    CMP AH,CH
    
    JE L1: ;If AH and CH are equal
    JB L2: ;If AH is less than CH
    jA L3: ;If AH is greater than CH
    
    L1:
    MOV DX,OFFSET MSG
    MOV AH,09H
    INT 21H
    RET
    
    L2:
    MOV DX,OFFSET MSG1
    MOV AH,09H
    INT 21H
    RET 
    
    L3:
    MOV DX,OFFSET MSG2
    MOV AH,09H
    INT 21H
 
END