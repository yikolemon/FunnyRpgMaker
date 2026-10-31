/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027540f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2019 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  undefined4 local_14;
  
  ___acrt_lock(6);
  iVar1 = FUN_10275b6d(_Time);
  FUN_1027545a();
  ExceptionList = local_14;
  return iVar1;
}

