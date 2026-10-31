/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9c65 */

void FUN_1407a9c65(undefined4 param_1,ulonglong param_2)

{
  ulonglong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EBP;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_30 = unaff_RBX >> 0x20;
  uStack_28 = (ulonglong)unaff_EBP;
  FUN_1407aa13e();
  uVar1 = (ulonglong)((int)&uStack_30 + 8);
  *(ulonglong *)(uVar1 - 8) = (ulonglong)unaff_EBP;
  *(undefined8 *)(uVar1 - 0x10) = 0x1407a9c89;
  FUN_1407a9e28(param_1,unaff_RBX >> 0x20);
  *(undefined1 *)((param_2 & 0xffffffff) + 0x16) = 0;
  return;
}

