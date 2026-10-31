/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400730a8 */

void FUN_1400730a8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    FUN_14002115a(*(longlong *)(param_1 + 0xa0),(longlong *)(lVar1 + 0x18));
    FUN_14001c53d(lVar2,lVar1);
    return;
  }
  return;
}

