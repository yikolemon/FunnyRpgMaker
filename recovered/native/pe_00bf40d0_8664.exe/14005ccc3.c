/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005ccc3 */

undefined8 FUN_14005ccc3(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(param_1 + lVar1) == 0x100) {
        return CONCAT71((int7)(((ulonglong)param_2 << 4) >> 8),1);
      }
      lVar1 = lVar1 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar1);
  }
  return 0;
}

