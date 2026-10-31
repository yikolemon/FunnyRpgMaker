/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102752c5 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

BOOL FUN_102752c5(undefined4 *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  void *local_14;
  
  ___acrt_lock(*param_1);
  DAT_103a5154 = *(undefined4 *)*param_2;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_102752a3,1);
  DAT_103a5154 = 0;
  FUN_1027532c();
  ExceptionList = local_14;
  return BVar1;
}

