
EOFLine  EQU  '$'         
AStack    SEGMENT  STACK
          DW 12 DUP(?)    
AStack    ENDS

DATA      SEGMENT


HELLO     DB '��ࠢ����!', 0AH, 0DH,EOFLine
GREETING  DB '��� �ਢ������ ��.��.2381 - ������ �.�.$'
DATA      ENDS


CODE      SEGMENT
          ASSUME CS:CODE, DS:DATA, SS:AStack

WriteMsg  PROC  NEAR
          mov   AH,9
          int   21h 
          ret
WriteMsg  ENDP


Main      PROC  FAR
          push  DS       
          sub   AX,AX    
          push  AX       
          mov   AX,DATA             
          mov   DS,AX               
          mov   DX, OFFSET HELLO    
          call  WriteMsg            
          mov   DX, OFFSET GREETING 
          call  WriteMsg 
          ret
Main      ENDP
CODE      ENDS
          END Main
