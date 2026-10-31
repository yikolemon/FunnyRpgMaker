/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f20e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076f20e(void)

{
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = (ulonglong)_DAT_150b0c970;
  FUN_140763ee7();
  *(undefined1 *)(uVar1 + 0x20da) = 1;
  *(int *)(uVar1 + 0x20e8) = (int)((ulonglong)unaff_RBX >> 0x20);
  *(int *)(uVar1 + 0x20f0) = (int)unaff_RBP;
  *(uint *)(uVar1 + 0x20dc) = (uint)((ulonglong)unaff_RBP >> 0x20) | 0x80;
  *(undefined4 *)(uVar1 + 0x20e0) = unaff_retaddr;
  return;
}

