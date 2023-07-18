section .data
    pos db "1",10
    negative db "-1",10
    eq db "0",10

section .text
    global _ft_strcmp
    global print_zero

_ft_strcmp:
    cmp rdi, rsi
    je print_zero

print_zero:
    mov rax, 0x2000004
    mov rdi, 1
    mov rsi, eq
    mov rcx, 2
    syscall
    ret