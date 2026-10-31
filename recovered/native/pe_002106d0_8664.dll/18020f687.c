/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020f687 */

undefined8 FUN_18020f687(longlong param_1,uint param_2)

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

