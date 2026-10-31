/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f5a9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_0048f5a9(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(*param_1);
  uVar1 = FUN_0048f3bc(param_2);
  FUN_0048f5f8();
  ExceptionList = local_14;
  return uVar1;
}

