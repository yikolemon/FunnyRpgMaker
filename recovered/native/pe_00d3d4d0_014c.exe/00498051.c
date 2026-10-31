/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00498051 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00498051(int *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  FUN_00497deb(param_2);
  FUN_00498092();
  ExceptionList = local_14;
  return;
}

