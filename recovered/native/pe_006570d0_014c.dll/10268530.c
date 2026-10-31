/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268530 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_10268530(void)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0);
  uVar1 = FUN_1026860d(DAT_103a4d54);
  FUN_1026857e();
  ExceptionList = local_14;
  return uVar1;
}

