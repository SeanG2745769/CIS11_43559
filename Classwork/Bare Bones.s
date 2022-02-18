// bare bones source file
.global main

.align 4
.section .rodata
// all constant data goes here

.align 4
.section .bss
// all uninitialized data goes here

.align 4
.data
// all non-constant, initialized data goes here

.align 4
.text
main: push {lr} // save link register, this is one of many ways this can be done

	// assembly program here
	mov r0, #9 // move into register R0, the value of 9
	mov r1, r0 // move into rgister R1, the vlue in register R0, ths is a simple copy
	add r1, r1, r0, lsl #1 // r1 = r1 + r0 *2
	add r1, r1, r0, lsl #3 // 