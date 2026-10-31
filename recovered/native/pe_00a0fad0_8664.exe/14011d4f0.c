/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d4f0 */

longlong FUN_14011d4f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(param_1 + 0x14) + 0x18 + param_1;
  if (*(ushort *)(param_1 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *(ushort *)(param_1 + 6));
  }
  return 0;
}

