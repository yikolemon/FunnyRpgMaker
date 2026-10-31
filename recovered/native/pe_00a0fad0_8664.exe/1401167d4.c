/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401167d4 */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_14010b32c(_File);
      sVar2 = FUN_14011689c(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_14010b338(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1401366a0(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
  }
  return 0;
}

