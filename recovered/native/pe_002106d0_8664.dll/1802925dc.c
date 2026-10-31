/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802925dc */

/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  int iVar1;
  
  __acrt_lock(6);
  iVar1 = FUN_180292ecc(_Time);
  __acrt_unlock(6);
  return iVar1;
}

