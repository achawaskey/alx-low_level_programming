msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

extern printf
global main

main:
mov esi, msg
mov edi, fmt
mov eax, 0

call printf

move eax, 0
ret
