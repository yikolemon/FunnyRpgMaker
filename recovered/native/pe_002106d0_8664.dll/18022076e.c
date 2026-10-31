/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022076e */

undefined8 FUN_18022076e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1801ca519(param_2,8);
  }
  uVar1 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  if (uVar1 < 0x106 || *(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar1 + param_1) {
    FUN_1801ca519(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    lVar2 = 0;
    do {
      if (*(uint *)(param_2 + 0x120) <= (uint)*(byte *)(param_1 + 6 + lVar2)) {
        FUN_1801ca519(param_2,0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 != 0x100);
  }
  return 0;
}

