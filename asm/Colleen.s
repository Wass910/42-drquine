;extern comment
section .data
    msg db ';extern comment%1$csection .data%1$c    msg db %2$c%3$s%2$c%1$c%1$csection .text%1$c    global main%1$c    global quine%1$c    extern printf%1$c    extern exit%1$c%1$cquine:%1$c    push rbp%1$c    mov rbp, rsp%1$c    mov rdi, msg%1$c    mov rsi, 10%1$c    mov rdx, 39%1$c    mov rcx, msg%1$c    call printf%1$c    pop rbp%1$c    ret%1$c%1$cmain:%1$c    ;inside comment%1$c    push rbp%1$c    mov rbp, rsp%1$c    call quine%1$c    pop rbp%1$c    mov rdi, 0%1$c    call exit'

section .text
    global main
    global quine
    extern printf
    extern exit

quine:
    push rbp
    mov rbp, rsp
    mov rdi, msg
    mov rsi, 10
    mov rdx, 39
    mov rcx, msg
    call printf
    pop rbp
    ret

main:
    ;inside comment
    push rbp
    mov rbp, rsp
    call quine
    pop rbp
    mov rdi, 0
    call exit