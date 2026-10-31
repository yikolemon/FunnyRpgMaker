/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271abb */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _ungetwc
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl _ungetwc(wint_t _Ch,FILE *_File)

{
  wint_t wVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    wVar1 = 0xffff;
  }
  else {
    __lock_file(_File);
    wVar1 = __ungetwc_nolock(_Ch,_File);
    FUN_10271b31();
  }
  ExceptionList = local_14;
  return wVar1;
}

