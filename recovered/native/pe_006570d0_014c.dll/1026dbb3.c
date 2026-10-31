/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026dbb3 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _fgetwc
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl _fgetwc(FILE *_File)

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
    wVar1 = __fgetwc_nolock(_File);
    FUN_1026dc22();
  }
  ExceptionList = local_14;
  return wVar1;
}

