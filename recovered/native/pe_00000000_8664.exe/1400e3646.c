/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3646 */

void FUN_1400e3646(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2a8) + lVar2) + 0x68);
      if (lVar1 != 0) {
        *(byte *)(param_1 + 0x51) = *(byte *)(lVar1 + 0x34) >> 4 & 1;
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x2a0) * 8 != lVar2);
  }
  return;
}

