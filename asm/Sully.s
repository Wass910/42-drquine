section .data
    string      db 'section .data%1$c    string      db %2$c%3$s%2$c , 0%1$c    filename    db "Sully_0.s", 0%1$c    flag        db "w", 0%1$c    integer     dq %4$d%1$c%1$csection .text%1$c    global main%1$c    extern fopen, fprintf, close, exit%1$c%1$cmain:%1$c    push rbp%1$c    mov rbp, rsp%1$c    mov r12, [integer]%1$c%1$cloop:%1$c    cmp r12, 0%1$c    je end%1$c    mov rdi, filename%1$c    mov rsi, flag%1$c    call     fopen%1$c    add byte [filename + 6], 1%1$c    mov rdi, rax%1$c    mov rsi, string%1$c    mov rdx, 10%1$c    mov rcx, 39%1$c    mov r8,  string%1$c    mov r9, [integer]%1$c    sub r9, r12%1$c    call     fprintf%1$c    call     close%1$c    dec r12%1$c    jmp loop%1$c%1$cend:%1$c    pop rbp%1$c    xor rdi, rdi%1$c    call exit' , 0
    filename    db "Sully_0.s", 0
    flag        db "w", 0
    integer     dq 5

section .text
    global main
    extern fopen, fprintf, close, exit

main:
    push rbp
    mov rbp, rsp
    mov r12, [integer]

loop:
    cmp r12, 0
    je end
    mov rdi, filename
    mov rsi, flag
    call     fopen
    add byte [filename + 6], 1
    mov rdi, rax
    mov rsi, string
    mov rdx, 10
    mov rcx, 39
    mov r8,  string
    mov r9, [integer]
    sub r9, r12
    call     fprintf
    call     close
    dec r12
    jmp loop

end:
    pop rbp
    xor rdi, rdi
    call exit