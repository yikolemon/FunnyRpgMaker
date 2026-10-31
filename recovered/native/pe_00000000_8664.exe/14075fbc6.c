/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075fbc6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075fbc6(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  int unaff_retaddr_00;
  
  uVar2 = (ulonglong)_DAT_150afd321;
  *(uint *)(uVar2 + 0x1ed0) = *(uint *)(uVar2 + 0x1ed0) | 2;
  uVar1 = *(undefined4 *)(ulonglong)unaff_retaddr;
  *(undefined4 *)(uVar2 + 0x1ef8) = ((undefined4 *)(ulonglong)unaff_retaddr)[1];
  *(undefined4 *)(uVar2 + 0x1ef4) = uVar1;
  *(uint *)(uVar2 + 0x1ed8) = unaff_retaddr_00 + (uint)(unaff_retaddr_00 == 0);
  return;
}

