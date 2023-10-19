section .data
    hello db "Hello, Holberton",10,0   ; Null-terminated string with a new line

section .text
    global _start

    extern printf

_start:
    ; Call printf with the hello message
    mov rdi, hello
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall
