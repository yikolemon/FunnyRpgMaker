/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a3f9c */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_140193154(_File);
      sVar2 = FUN_1401a4064(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_140193160(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1401c5830(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  return 0;
}

