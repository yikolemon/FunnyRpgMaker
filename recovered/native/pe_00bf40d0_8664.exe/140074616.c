/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140074616 */

void FUN_140074616(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    FUN_14002115a(*(longlong *)(param_1 + 0xa0),(longlong *)(lVar1 + 0x10));
    FUN_14001c53d(lVar2,lVar1);
    return;
  }
  return;
}

