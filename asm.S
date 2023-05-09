.intel_syntax noprefix

.extern print_args

.global printf_asm
printf_asm:
    sub rsp, 8
    call print_args
    add rsp, 8
    ret