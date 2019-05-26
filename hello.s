	.file	"hello.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "world\0"
.LC1:
	.ascii "hello %s\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp #copies base pointer to stack pointer
	.seh_setframe	%rbp, 0
	subq	$32, %rsp #allocates 32 bits on stack?
	.seh_stackalloc	32 #seems that way    https://stackoverflow.com/questions/12635910/why-do-we-use-sub-0x18-rsp
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	leaq	.LC0(%rip), %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$32, %rsp #this line and next line 
	popq	%rbp #pop 32 buts from the stack
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 7.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
