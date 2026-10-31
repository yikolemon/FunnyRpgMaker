/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075209b */

ulonglong FUN_14075209b(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint unaff_EBX;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EBX;
  uVar1 = FUN_1408c85c0();
  uVar3 = (ulonglong)((int)&uStack_20 + 4);
  *(ulonglong *)(uVar3 - 8) = (ulonglong)uVar1;
  *(undefined8 *)(uVar3 - 0x10) = 0x1407520b4;
  uVar2 = FUN_1407520ca();
  uVar4 = (ulonglong)((int)(uVar3 - 8) + 4);
  *(ulonglong *)(uVar4 - 8) = (ulonglong)uVar1;
  *(ulonglong *)(uVar4 - 0x10) = (ulonglong)unaff_EBX;
  *(ulonglong *)(uVar4 - 0x18) = uVar2;
  *(undefined8 *)(uVar4 - 0x20) = 0x1407520c1;
  FUN_1408b31a0();
  return uVar2 & 0xffffffff;
}

