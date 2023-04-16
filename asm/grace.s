%macro DATA 0
    section .data
        msg         db '%4$cmacro DATA 0%1$c    section .data%1$c        msg         db %2$c%3$s%2$c, 0%1$c        filename    db "Grace_kid.s", 0%1$c        flag        db "w", 0%1$c%4$cendmacro%1$c%1$c%4$cmacro TEXT 0%1$c    section .text%1$c        global main%1$c        extern fopen, fprintf, exit%1$c%4$cendmacro%1$c%1$c%4$cmacro MAIN 0%1$c    main:%1$c        push rbp%1$c        mov rbp, rsp%1$c        mov rdi, filename%1$c        mov rsi, flag%1$c        call     fopen%1$c        mov rdi, rax%1$c        mov rsi, msg%1$c        mov rdx, 10%1$c        mov rcx, 39%1$c        mov r8,  msg%1$c        mov r9,  37%1$c        call     fprintf%1$c        pop      rbp%1$c        mov rdi, 0%1$c        call     exit%1$c%4$cendmacro%1$c%1$cTEXT%1$cDATA%1$cMAIN%1$c%1$c;one comment', 0
        filename    db "Grace_kid.s", 0
        flag        db "w", 0
%endmacro

%macro TEXT 0
    section .text
        global main
        extern fopen, fprintf, exit
%endmacro

%macro MAIN 0
    main:
        push rbp
        mov rbp, rsp
        mov rdi, filename
        mov rsi, flag
        call     fopen
        mov rdi, rax
        mov rsi, msg
        mov rdx, 10
        mov rcx, 39
        mov r8,  msg
        mov r9,  37
        call     fprintf
        pop      rbp
        mov rdi, 0
        call     exit
%endmacro

TEXT
DATA
MAIN

;one comment