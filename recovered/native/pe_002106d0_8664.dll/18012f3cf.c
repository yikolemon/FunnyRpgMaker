/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f3cf */

ulonglong FUN_18012f3cf(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((*(byte *)(DAT_180419160 + 0x35) & 0x20) == 0) {
    lVar1 = DAT_180419160;
    if (*(longlong *)(param_1 + 0x38) != param_2) {
LAB_18012f3e2:
      return (ulonglong)
             CONCAT31((int3)((uint)*(int *)(param_1 + 0x88) >> 8),
                      *(int *)(param_2 + 0x88) < *(int *)(param_1 + 0x88));
    }
  }
  else {
    do {
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0)) goto LAB_18012f3e2;
    } while (lVar1 != param_2);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}

