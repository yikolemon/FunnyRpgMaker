/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408de7fd */

void FUN_1408de7fd(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(((ulonglong)&stack0x00000000 & 0xffffffff) + 0x14);
  if (0 < (int)uVar1) {
    FUN_1408c9d80();
    param_1 = (ulonglong)uVar1;
  }
  FUN_1408ccc06(param_1);
  return;
}

