00000000004004d6 <main>:
  4004d6:	55                   	push   %rbp
  4004d7:	48 89 e5             	mov    %rsp,%rbp
  4004da:	48 c7 45 f8 94 05 40 	movq   $0x400594,-0x8(%rbp)
  4004e1:	00
  4004e2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
  4004e9:	8b 45 f4             	mov    -0xc(%rbp),%eax
  4004ec:	48 63 d0             	movslq %eax,%rdx
  4004ef:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4004f3:	48 01 d0             	add    %rdx,%rax
  4004f6:	0f b6 00             	movzbl (%rax),%eax
  4004f9:	84 c0                	test   %al,%al
  4004fb:	74 06                	je     400503 <main+0x2d>
  4004fd:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
  400501:	eb e6                	jmp    4004e9 <main+0x13>
  400503:	b8 00 00 00 00       	mov    $0x0,%eax
  400508:	5d                   	pop    %rbp
  400509:	c3                   	retq
  40050a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax
