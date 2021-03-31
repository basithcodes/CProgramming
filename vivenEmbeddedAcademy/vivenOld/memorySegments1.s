	.file	"memorySegments1.c"
	.text
	.globl	con
	.section	.rodata
	.align 4
	.type	con, @object
	.size	con, 4
con:
	.long	20
	.globl	s
	.data
	.align 4
	.type	s, @object
	.size	s, 4
s:
	.long	20
	.globl	z
	.bss
	.align 4
	.type	z, @object
	.size	z, 4
z:
	.zero	4
	.section	.rodata
.LC0:
	.string	"Enter a character: "
.LC1:
	.string	"%c"
.LC2:
	.string	"viven\n"
.LC3:
	.string	"Calling add function"
.LC4:
	.string	"add function return: %d\n"
.LC5:
	.string	"main(base address)----, %p\n"
.LC6:
	.string	"s---, %p\n"
.LC7:
	.string	"z---, %p\n"
.LC8:
	.string	"con---, %p\n"
.LC9:
	.string	"x---, %p\n"
.LC10:
	.string	"str---, %p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$20, -24(%rbp)
	movl	$0, -20(%rbp)
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-25(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	movl	x.0(%rip), %eax
	movl	-24(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	add_fun
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	main(%rip), %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	s(%rip), %rsi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	z(%rip), %rsi
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	con(%rip), %rsi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	x.0(%rip), %rsi
	leaq	.LC9(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	subq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC11:
	.string	"add(base address)---, %p\n"
	.text
	.globl	add_fun
	.type	add_fun, @function
add_fun:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	leaq	add_fun(%rip), %rsi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	add_fun, .-add_fun
	.data
	.align 4
	.type	x.0, @object
	.size	x.0, 4
x.0:
	.long	10
	.ident	"GCC: (GNU) 10.2.0"
	.section	.note.GNU-stack,"",@progbits
