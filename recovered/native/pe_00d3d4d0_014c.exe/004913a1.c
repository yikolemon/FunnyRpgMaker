/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004913a1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2019 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  void *local_14;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      uVar2 = FUN_0049145b(_DstBuf,(char *)_DstSize,_ElementSize,_Count,_File);
      FUN_00491436();
      ExceptionList = local_14;
      return uVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
  }
  ExceptionList = local_14;
  return 0;
}

