00000000004004d6 <main>:
  4004d6:	55                   	push   %rbp
  4004d7:	48 89 e5             	mov    %rsp,%rbp
  4004da:	48 c7 45 f8 94 05 40 	movq   $0x400594,-0x8(%rbp)
  4004e1:	00
  4004e2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4004e6:	48 89 45 f0          	mov    %rax,-0x10(%rbp)
  4004ea:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4004ee:	0f b6 00             	movzbl (%rax),%eax
  4004f1:	84 c0                	test   %al,%al
  4004f3:	74 07                	je     4004fc <main+0x26>
  4004f5:	48 83 45 f0 01       	addq   $0x1,-0x10(%rbp)
  4004fa:	eb ee                	jmp    4004ea <main+0x14>
  4004fc:	b8 00 00 00 00       	mov    $0x0,%eax
  400501:	5d                   	pop    %rbp
  400502:	c3                   	retq
  400503:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40050a:	00 00 00
  40050d:	0f 1f 00             	nopl   (%rax)
