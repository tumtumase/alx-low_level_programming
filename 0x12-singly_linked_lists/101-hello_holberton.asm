global  main
        extern  printf

        section .text
main:
        push    rbp
        mov     rbp, rsp
        lea     rdi, [rel message]
        xor     eax, eax
        call    printf
        xor     eax, eax
        pop     rbp
        ret

        section .data
message:
        db      "Hello, Holberton", 10, 0
