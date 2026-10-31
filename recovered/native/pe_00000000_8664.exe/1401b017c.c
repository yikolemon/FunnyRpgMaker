/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b017c */

/* Library Function - Single Match
    _isindst
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _isindst(tm *_Time)

{
  int iVar1;
  
  __acrt_lock(6);
  iVar1 = FUN_1401b0a6c(_Time);
  __acrt_unlock(6);
  return iVar1;
}

