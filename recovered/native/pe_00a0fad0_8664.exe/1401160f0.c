/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401160f0 */

/* Library Function - Single Match
    fgetwc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wint_t __cdecl fgetwc(FILE *_File)

{
  wint_t wVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    wVar1 = 0xffff;
  }
  else {
    FUN_14010b32c();
    wVar1 = FUN_140116148(_File);
    FUN_14010b338(_File);
  }
  return wVar1;
}

