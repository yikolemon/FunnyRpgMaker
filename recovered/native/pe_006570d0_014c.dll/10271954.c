/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271954 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2019 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_14;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    iVar2 = -1;
  }
  else {
    __lock_file(_File);
    iVar2 = FUN_102719c7(_Ch,_File);
    FUN_102719bf();
  }
  ExceptionList = local_14;
  return iVar2;
}

