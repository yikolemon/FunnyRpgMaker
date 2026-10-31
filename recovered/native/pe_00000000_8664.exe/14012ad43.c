/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ad43 */

longlong FUN_14012ad43(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        return lVar1;
      }
    }
  }
  return 0;
}

