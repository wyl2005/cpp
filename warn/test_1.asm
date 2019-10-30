
a.out：     文件格式 elf32-littlearm


Disassembly of section .init:

0001027c <_init>:
_init():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:83
   1027c:	e92d4008 	push	{r3, lr}
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:85
   10280:	eb00001b 	bl	102f4 <call_weak_fn>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crtn.S:48
   10284:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

00010288 <__libc_start_main@plt-0x14>:
   10288:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
   1028c:	e59fe004 	ldr	lr, [pc, #4]	; 10298 <_init+0x1c>
   10290:	e08fe00e 	add	lr, pc, lr
   10294:	e5bef008 	ldr	pc, [lr, #8]!
   10298:	0001025c 	.word	0x0001025c

0001029c <__libc_start_main@plt>:
   1029c:	e28fc600 	add	ip, pc, #0, 12
   102a0:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102a4:	e5bcf25c 	ldr	pc, [ip, #604]!	; 0x25c

000102a8 <__gmon_start__@plt>:
   102a8:	e28fc600 	add	ip, pc, #0, 12
   102ac:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102b0:	e5bcf254 	ldr	pc, [ip, #596]!	; 0x254

000102b4 <abort@plt>:
   102b4:	e28fc600 	add	ip, pc, #0, 12
   102b8:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102bc:	e5bcf24c 	ldr	pc, [ip, #588]!	; 0x24c

Disassembly of section .text:

000102c0 <main>:
main():
   102c0:	2000      	movs	r0, #0
   102c2:	4770      	bx	lr

000102c4 <_start>:
_start():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:79
   102c4:	f04f 0b00 	mov.w	fp, #0
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:80
   102c8:	f04f 0e00 	mov.w	lr, #0
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:83
   102cc:	bc02      	pop	{r1}
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:84
   102ce:	466a      	mov	r2, sp
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:87
   102d0:	b404      	push	{r2}
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:90
   102d2:	b401      	push	{r0}
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:113
   102d4:	f8df c010 	ldr.w	ip, [pc, #16]	; 102e8 <_start+0x24>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:116
   102d8:	f84d cd04 	str.w	ip, [sp, #-4]!
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:119
   102dc:	4803      	ldr	r0, [pc, #12]	; (102ec <_start+0x28>)
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:120
   102de:	4b04      	ldr	r3, [pc, #16]	; (102f0 <_start+0x2c>)
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:124
   102e0:	f7ff efdc 	blx	1029c <__libc_start_main@plt>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:128
   102e4:	f7ff efe6 	blx	102b4 <abort@plt>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:113
   102e8:	000103e5 	.word	0x000103e5
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:119
   102ec:	000102c1 	.word	0x000102c1
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/start.S:120
   102f0:	000103a5 	.word	0x000103a5

000102f4 <call_weak_fn>:
call_weak_fn():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:64
   102f4:	e59f3014 	ldr	r3, [pc, #20]	; 10310 <call_weak_fn+0x1c>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:65
   102f8:	e59f2014 	ldr	r2, [pc, #20]	; 10314 <call_weak_fn+0x20>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:67
   102fc:	e08f3003 	add	r3, pc, r3
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:68
   10300:	e7932002 	ldr	r2, [r3, r2]
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:69
   10304:	e3520000 	cmp	r2, #0
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:70
   10308:	012fff1e 	bxeq	lr
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:71
   1030c:	eaffffe5 	b	102a8 <__gmon_start__@plt>
   10310:	000101f0 	.word	0x000101f0
   10314:	00000018 	.word	0x00000018

00010318 <deregister_tm_clones>:
deregister_tm_clones():
   10318:	4b07      	ldr	r3, [pc, #28]	; (10338 <deregister_tm_clones+0x20>)
   1031a:	f240 5018 	movw	r0, #1304	; 0x518
   1031e:	f2c0 0002 	movt	r0, #2
   10322:	1a1b      	subs	r3, r3, r0
   10324:	2b06      	cmp	r3, #6
   10326:	d905      	bls.n	10334 <deregister_tm_clones+0x1c>
   10328:	f240 0300 	movw	r3, #0
   1032c:	f2c0 0300 	movt	r3, #0
   10330:	b103      	cbz	r3, 10334 <deregister_tm_clones+0x1c>
   10332:	4718      	bx	r3
   10334:	4770      	bx	lr
   10336:	bf00      	nop
   10338:	0002051b 	.word	0x0002051b

0001033c <register_tm_clones>:
register_tm_clones():
   1033c:	f240 5318 	movw	r3, #1304	; 0x518
   10340:	f240 5018 	movw	r0, #1304	; 0x518
   10344:	f2c0 0302 	movt	r3, #2
   10348:	f2c0 0002 	movt	r0, #2
   1034c:	1a19      	subs	r1, r3, r0
   1034e:	1089      	asrs	r1, r1, #2
   10350:	eb01 71d1 	add.w	r1, r1, r1, lsr #31
   10354:	1049      	asrs	r1, r1, #1
   10356:	d005      	beq.n	10364 <register_tm_clones+0x28>
   10358:	f240 0300 	movw	r3, #0
   1035c:	f2c0 0300 	movt	r3, #0
   10360:	b103      	cbz	r3, 10364 <register_tm_clones+0x28>
   10362:	4718      	bx	r3
   10364:	4770      	bx	lr
   10366:	bf00      	nop

00010368 <__do_global_dtors_aux>:
__do_global_dtors_aux():
   10368:	b510      	push	{r4, lr}
   1036a:	f240 5418 	movw	r4, #1304	; 0x518
   1036e:	f2c0 0402 	movt	r4, #2
   10372:	7823      	ldrb	r3, [r4, #0]
   10374:	b91b      	cbnz	r3, 1037e <__do_global_dtors_aux+0x16>
   10376:	f7ff ffcf 	bl	10318 <deregister_tm_clones>
   1037a:	2301      	movs	r3, #1
   1037c:	7023      	strb	r3, [r4, #0]
   1037e:	bd10      	pop	{r4, pc}

00010380 <frame_dummy>:
frame_dummy():
   10380:	f240 4008 	movw	r0, #1032	; 0x408
   10384:	b508      	push	{r3, lr}
   10386:	f2c0 0002 	movt	r0, #2
   1038a:	6803      	ldr	r3, [r0, #0]
   1038c:	b913      	cbnz	r3, 10394 <frame_dummy+0x14>
   1038e:	e8bd 4008 	ldmia.w	sp!, {r3, lr}
   10392:	e7d3      	b.n	1033c <register_tm_clones>
   10394:	f240 0300 	movw	r3, #0
   10398:	f2c0 0300 	movt	r3, #0
   1039c:	2b00      	cmp	r3, #0
   1039e:	d0f6      	beq.n	1038e <frame_dummy+0xe>
   103a0:	4798      	blx	r3
   103a2:	e7f4      	b.n	1038e <frame_dummy+0xe>

000103a4 <__libc_csu_init>:
__libc_csu_init():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:68
   103a4:	e92d 43f8 	stmdb	sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
   103a8:	4606      	mov	r6, r0
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:87
   103aa:	4d0c      	ldr	r5, [pc, #48]	; (103dc <__libc_csu_init+0x38>)
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:68
   103ac:	460f      	mov	r7, r1
   103ae:	4690      	mov	r8, r2
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:87
   103b0:	f8df 902c 	ldr.w	r9, [pc, #44]	; 103e0 <__libc_csu_init+0x3c>
   103b4:	447d      	add	r5, pc
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:83
   103b6:	f7ff ef62 	blx	1027c <_init>
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:87
   103ba:	44f9      	add	r9, pc
   103bc:	eba5 0509 	sub.w	r5, r5, r9
   103c0:	10ad      	asrs	r5, r5, #2
   103c2:	d009      	beq.n	103d8 <__libc_csu_init+0x34>
   103c4:	2400      	movs	r4, #0
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:88 (discriminator 3)
   103c6:	f859 3024 	ldr.w	r3, [r9, r4, lsl #2]
   103ca:	4642      	mov	r2, r8
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:87 (discriminator 3)
   103cc:	3401      	adds	r4, #1
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:88 (discriminator 3)
   103ce:	4639      	mov	r1, r7
   103d0:	4630      	mov	r0, r6
   103d2:	4798      	blx	r3
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:87 (discriminator 3)
   103d4:	42ac      	cmp	r4, r5
   103d6:	d1f6      	bne.n	103c6 <__libc_csu_init+0x22>
   103d8:	e8bd 83f8 	ldmia.w	sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
   103dc:	0001004c 	.word	0x0001004c
   103e0:	00010042 	.word	0x00010042

000103e4 <__libc_csu_fini>:
__libc_csu_fini():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/elf-init.c:96
   103e4:	4770      	bx	lr
   103e6:	bf00      	nop

Disassembly of section .fini:

000103e8 <_fini>:
_fini():
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crti.S:95
   103e8:	e92d4008 	push	{r3, lr}
/home/tcwg-buildslave/workspace/tcwg-make-release/builder_arch/amd64/label/tcwg-x86_64-build/target/arm-linux-gnueabihf/snapshots/glibc.git~linaro~2.21~master/csu/../sysdeps/arm/crtn.S:56
   103ec:	e8bd8008 	pop	{r3, pc}
