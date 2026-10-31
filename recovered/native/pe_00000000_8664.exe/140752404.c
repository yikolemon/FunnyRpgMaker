/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752404 */

void FUN_140752404(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  int unaff_EBP;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)unaff_RBX >> 0x20);
  FUN_14069af0e();
  uVar2 = FUN_1408b6908();
  if (uVar3 != 0) {
    uVar1 = uVar2;
    if (unaff_EBP <= (int)uVar2) {
      uVar1 = unaff_EBP - 1U;
    }
    if ((int)uVar2 < 0) {
      uVar1 = unaff_EBP - 1U;
    }
    *(undefined1 *)((ulonglong)uVar3 + (ulonglong)uVar1) = 0;
  }
  return;
}

