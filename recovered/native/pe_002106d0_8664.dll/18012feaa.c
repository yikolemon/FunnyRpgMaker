/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012feaa */

void FUN_18012feaa(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xdf;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_18012feaa();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_18012feaa();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    for (lVar1 = *(longlong *)(param_1 + 0xa0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
      *(byte *)(lVar1 + 0xd4) = *(byte *)(lVar1 + 0xd4) | 0x20;
    }
  }
  return;
}

