/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d760 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint FUN_0048d760(void)

{
  uint uVar1;
  undefined4 local_14;
  
  ___acrt_lock(0);
  uVar1 = FUN_0048d68f(DAT_005216f8);
  FUN_0048d7ae();
  ExceptionList = local_14;
  return uVar1;
}

