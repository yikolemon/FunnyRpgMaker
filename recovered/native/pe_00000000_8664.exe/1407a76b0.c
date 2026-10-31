/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a76b0 */

void FUN_1407a76b0(void)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  ulonglong uStack_20;
  ulonglong uStack_18;
  undefined8 uVar3;
  
  uStack_18 = (ulonglong)unaff_retaddr;
  uVar1 = unaff_RDI >> 0x20;
  uStack_20 = uVar1;
  uVar3 = FUN_1407a7515();
  iVar2 = (int)uVar3;
  uVar4 = (ulonglong)((int)&uStack_20 + 8);
  if (iVar2 != 0) {
    *(ulonglong *)(uVar4 - 8) =
         (ulonglong)
         ((~(((uint)(iVar2 - *(int *)(uVar1 + 0xc)) >> 4) * -0x55555555) + *(int *)(uVar1 + 4)) *
         0x30);
    *(ulonglong *)(uVar4 - 0x10) = (ulonglong)(iVar2 + 0x30);
    *(undefined8 *)(uVar4 - 0x18) = uVar3;
    *(undefined8 *)(uVar4 - 0x20) = 0x1407a76ee;
    FUN_1408b31a0();
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + -1;
  }
  if (*(uint *)(uVar1 + 0x24) == unaff_retaddr) {
    *(undefined4 *)(uVar1 + 0x24) = 0;
  }
  if (*(uint *)(uVar1 + 0x18) == unaff_retaddr) {
    *(undefined4 *)(uVar1 + 0x18) = 0;
  }
  if (*(uint *)(uVar1 + 0x1c) == unaff_retaddr) {
    *(undefined4 *)(uVar1 + 0x1c) = 0;
  }
  return;
}

