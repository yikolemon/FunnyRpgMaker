/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a8dda */

void FUN_1400a8dda(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd4) & 0xdf;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400a8dda();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400a8dda();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    for (lVar1 = *(longlong *)(param_1 + 0xa0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
      *(byte *)(lVar1 + 0xd4) = *(byte *)(lVar1 + 0xd4) | 0x20;
    }
  }
  return;
}

