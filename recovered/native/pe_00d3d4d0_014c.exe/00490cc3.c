/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490cc3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _fgetwc
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl _fgetwc(FILE *_File)

{
  wint_t wVar1;
  __acrt_ptd *p_Var2;
  undefined4 local_14;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_00495c88();
    wVar1 = 0xffff;
  }
  else {
    __lock_file(_File);
    wVar1 = __fgetwc_nolock(_File);
    FUN_00490d32();
  }
  ExceptionList = local_14;
  return wVar1;
}

