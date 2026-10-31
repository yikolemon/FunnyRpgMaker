/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c530 */

undefined1 FUN_1022c530(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1039ce04 = 1;
  }
  FUN_10234920();
  cVar1 = FUN_102590d0();
  if (cVar1 != '\0') {
    cVar1 = ___acrt_initialize();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_102590f0(0);
  }
  return 0;
}

