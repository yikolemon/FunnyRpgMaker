/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275463 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2019 Release */

void __cdecl ___tzset(void)

{
  undefined4 local_14;
  
  if (DAT_103a5174 == 0) {
    ___acrt_lock(6);
    if (DAT_103a5174 == 0) {
      FUN_102759ad();
      LOCK();
      DAT_103a5174 = DAT_103a5174 + 1;
      UNLOCK();
    }
    FUN_102754b7();
  }
  ExceptionList = local_14;
  return;
}

