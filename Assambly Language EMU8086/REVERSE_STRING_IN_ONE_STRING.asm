.MODEL TINY  

.DATA
STR DB "0"

.CODE

MAIN PROC

	MOV SI  ,0    ; INPUT     INDEX
	MOV DI  ,0    ;OUTPUT  INDEX
	MOV CX ,0    ;SIZE OF STRING 
	MOV AH, 1

INP:
 	INT   21H
	MOV STR[SI],AL
	INC   CX        		;STRING SIZE
	INC    SI		
	CMP AL,13
	JE     NL
	JMP  INP

NL:
	MOV AH,2
	MOV DL,10
INT    21H
MOV  DL,13
INT    21H
	DEC CX
	MOV DI,CX


OP:
	DEC  DI 
	MOV DL,STR[DI]
INT 21H
LOOP OP
 
END