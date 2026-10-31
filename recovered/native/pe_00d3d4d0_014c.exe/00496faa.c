/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496faa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

BOOL FUN_00496faa(int *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  void *local_14;
  
  ___acrt_lock(*param_1);
  DAT_00521bf4 = *(undefined4 *)*param_2;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_00496f88,1);
  DAT_00521bf4 = 0;
  FUN_00497011();
  ExceptionList = local_14;
  return BVar1;
}

