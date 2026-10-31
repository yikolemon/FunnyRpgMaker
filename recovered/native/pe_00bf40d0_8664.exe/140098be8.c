/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098be8 */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_14008ea30((longlong)_File);
      uVar2 = FUN_140098cb0(_DstBuf,_DstSize,_ElementSize,_Count,(longlong *)_File);
      FUN_14008ea3c((longlong)_File);
      return uVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1400b3c00(_DstBuf,0,_DstSize);
    }
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1400a0ea0();
  }
  return 0;
}

