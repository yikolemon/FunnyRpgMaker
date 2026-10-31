/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496664 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00496664(int *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_2,(__crt_locale_data *)0x0);
  FUN_004966ad();
  ExceptionList = local_14;
  return;
}

