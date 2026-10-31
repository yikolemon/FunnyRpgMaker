/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a3148 */

/* Library Function - Single Match
    fgetwc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wint_t __cdecl fgetwc(FILE *_File)

{
  wint_t wVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    wVar1 = 0xffff;
  }
  else {
    FUN_140193154();
    wVar1 = FUN_1401a31a0(_File);
    FUN_140193160(_File);
  }
  return wVar1;
}

