.intel_syntax noprefix

.global add_2
add_2:
    mov rax, rdi
    add rax, 2

.global printf_asm
printf_asm:
    call printf
    ret