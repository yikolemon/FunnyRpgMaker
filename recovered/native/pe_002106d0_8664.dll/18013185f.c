/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013185f */

undefined8 FUN_18013185f(int *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(DAT_180419160 + 0x23e8) != 0) {
    return CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),
                    *(int **)(*(longlong *)(DAT_180419160 + 0x23e8) + 0x4c0) == param_1);
  }
  lVar2 = *(longlong *)(DAT_180419160 + 0x2200);
  if ((lVar2 != 0) && (*(int *)(param_2 + 0xc0) == *param_1)) {
    while (lVar2 = *(longlong *)(lVar2 + 0x418), (*(byte *)(lVar2 + 0x17) & 0x10) != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x408);
    }
    lVar1 = *(longlong *)(lVar2 + 0x4c8);
    if (*(longlong *)(lVar2 + 0x4c8) != 0) goto LAB_1801318c8;
    for (; lVar1 = *(longlong *)(lVar2 + 0x4c0), *(longlong *)(lVar2 + 0x4c0) != 0;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x418)) {
LAB_1801318c8:
      do {
        lVar2 = lVar1;
        lVar1 = *(longlong *)(lVar2 + 0x18);
      } while (*(longlong *)(lVar2 + 0x18) != 0);
      if (lVar2 == param_2) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      if (*(longlong *)(lVar2 + 0x90) == 0) {
        return 0;
      }
    }
  }
  return 0;
}

