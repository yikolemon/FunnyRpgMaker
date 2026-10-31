/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ca09 */

void FUN_14001ca09(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x50) * 0x20;
  }
  *(longlong *)(param_1 + 0xa0) = lVar1;
  return;
}

