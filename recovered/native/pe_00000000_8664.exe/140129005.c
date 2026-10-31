/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129005 */

void FUN_140129005(longlong param_1)

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

