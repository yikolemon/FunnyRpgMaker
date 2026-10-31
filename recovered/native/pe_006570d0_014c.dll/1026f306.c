/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f306 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1026f306(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0xb);
  uVar1 = FUN_1026f3f4(param_1,param_2,param_3,param_4);
  FUN_1026f367();
  ExceptionList = local_14;
  return uVar1;
}

