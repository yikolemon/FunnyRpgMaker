/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a82ff */

ulonglong FUN_1400a82ff(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((*(byte *)(DAT_140f2a910 + 0x35) & 0x20) == 0) {
    lVar1 = DAT_140f2a910;
    if (*(longlong *)(param_1 + 0x38) != param_2) {
LAB_1400a8312:
      return (ulonglong)
             CONCAT31((int3)((uint)*(int *)(param_1 + 0x88) >> 8),
                      *(int *)(param_2 + 0x88) < *(int *)(param_1 + 0x88));
    }
  }
  else {
    do {
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0)) goto LAB_1400a8312;
    } while (lVar1 != param_2);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}

