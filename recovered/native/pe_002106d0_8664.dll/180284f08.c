/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180284f08 */

/* Library Function - Single Match
    fgetwc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wint_t __cdecl fgetwc(FILE *_File)

{
  wint_t wVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    wVar1 = 0xffff;
  }
  else {
    FUN_180272400();
    wVar1 = FUN_180284f60(_File);
    FUN_18027240c(_File);
  }
  return wVar1;
}

