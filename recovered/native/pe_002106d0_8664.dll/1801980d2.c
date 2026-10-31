/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801980d2 */

void FUN_1801980d2(longlong param_1)

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

