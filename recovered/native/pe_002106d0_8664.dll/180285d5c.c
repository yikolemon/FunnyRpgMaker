/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180285d5c */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_180272400(_File);
      sVar2 = FUN_180285e24(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_18027240c(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1802a89a0(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
    FUN_180290a50();
  }
  return 0;
}

