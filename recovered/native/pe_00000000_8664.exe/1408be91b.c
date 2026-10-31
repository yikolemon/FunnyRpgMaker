/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be91b */

void FUN_1408be91b(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  if ((uVar1 != *param_1) &&
     ((uVar1 != param_1[1] ||
      (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) != -1)))) {
    *(ulonglong *)(param_1 + 2) = (ulonglong)uVar1;
  }
  return;
}

