/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14034089f */

ulonglong FUN_14034089f(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((*(byte *)(DAT_14062a630 + 0x35) & 0x20) == 0) {
    lVar1 = DAT_14062a630;
    if (*(longlong *)(param_1 + 0x38) != param_2) {
LAB_1403408b2:
      return (ulonglong)
             CONCAT31((int3)((uint)*(int *)(param_1 + 0x88) >> 8),
                      *(int *)(param_2 + 0x88) < *(int *)(param_1 + 0x88));
    }
  }
  else {
    do {
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0)) goto LAB_1403408b2;
    } while (lVar1 != param_2);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}

