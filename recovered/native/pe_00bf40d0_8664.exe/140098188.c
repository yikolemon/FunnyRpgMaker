/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098188 */

/* Library Function - Single Match
    fgetwc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wint_t __cdecl fgetwc(FILE *_File)

{
  wint_t wVar1;
  __acrt_ptd *p_Var2;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    wVar1 = 0xffff;
  }
  else {
    FUN_14008ea30((longlong)_File);
    wVar1 = FUN_1400981e0(_File);
    FUN_14008ea3c((longlong)_File);
  }
  return wVar1;
}

