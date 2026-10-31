/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015ed73 */

undefined8 FUN_14015ed73(longlong param_1,uint param_2)

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

