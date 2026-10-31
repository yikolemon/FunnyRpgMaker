/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad014 */

undefined4 Unwind_1400ad014(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float unaff_EBX;
  undefined4 unaff_EBP;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined4 unaff_R14D;
  undefined8 *unaff_R15;
  undefined8 uVar5;
  float unaff_XMM6_Da;
  undefined8 in_stack_00000020;
  undefined4 uVar6;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  ulonglong in_stack_00000078;
  
  uVar6 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(float *)(unaff_R12 + 4) = unaff_XMM6_Da;
  *(ulonglong *)(unaff_R12 + 8) =
       CONCAT44(unaff_XMM6_Da + (float)((ulonglong)*unaff_R15 >> 0x20),unaff_EBX + (float)*unaff_R15
               );
  uVar5 = FUN_14008a82c();
  uVar2 = 0;
  cVar1 = FUN_14008a9ce(uVar5,unaff_EBP,0,0);
  if (cVar1 != '\0') {
    uVar5 = CONCAT44(uVar6,unaff_R14D);
    uVar2 = FUN_1400ac79b(&stack0x00000058,unaff_EBP,(longlong)&stack0x00000050 + 7,
                          (longlong)&stack0x00000050 + 6,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar4 = 0x16;
    if (in_stack_00000050._7_1_ != '\0') {
      iVar4 = in_stack_00000050._6_1_ + 0x17;
    }
    uVar3 = FUN_14007a557(iVar4);
    FUN_14007bdca(&stack0x00000058,unaff_EBP,0);
    FUN_14007ba95(in_stack_00000058,in_stack_00000060,uVar3,1,
                  CONCAT44(uVar6,*(undefined4 *)(unaff_R13 + 0xdfc)));
    if (*(char *)(unaff_R13 + 0x2a40) == '\x01') {
      FUN_140096567(&DAT_140ecc3c7,&DAT_140ecc3ac);
    }
    FUN_14007b731();
  }
  if (DAT_140f17b40 == (in_stack_00000078 ^ (ulonglong)&stack0x00000000)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}

