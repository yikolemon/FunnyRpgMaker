/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752137 */

ulonglong FUN_140752137(void)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  uint in_R11D;
  longlong unaff_R12;
  uint unaff_R15D;
  undefined4 unaff_retaddr;
  ulonglong uStack_28;
  
  uVar1 = unaff_RBX >> 0x20;
  if ((int)unaff_RBP == 0) {
    uStack_28 = uVar1;
    FUN_1408c85c0();
    uVar3 = (ulonglong)((int)&uStack_28 + 4);
    puVar4 = (ulonglong *)(uVar3 - 8);
    *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(unaff_R12 * 2 + 0x1c);
  }
  else {
    uStack_28 = CONCAT44(unaff_retaddr,(int)((ulonglong)unaff_RBP >> 0x20));
    puVar4 = &uStack_28;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = 0x140752161;
  uVar2 = FUN_1408c85c0();
  uVar5 = (ulonglong)((int)puVar4 + 4);
  if (in_R11D < unaff_R15D) {
    *(ulonglong *)(uVar5 - 8) = uVar1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar5 - 0x10) = &UNK_140752171;
    FUN_14075219b();
  }
  *(ulonglong *)(uVar5 - 8) = (ulonglong)uVar2;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar5 + 0x18);
  *(ulonglong *)(uVar5 - 0x18) = uVar1;
  *(undefined8 *)(uVar5 - 0x20) = 0x140752191;
  FUN_1408b31a0();
  return uVar1;
}

