/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009327c */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_140093299:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1400932a2:
      p_Var1 = FUN_140095e5c();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1400b3550(_Dst,_Src,_MaxCount);
        goto LAB_140093299;
      }
      FUN_1400b3c00(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1400932a2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var1 = FUN_140095e5c();
      eVar2 = 0x22;
    }
    *(errno_t *)p_Var1 = eVar2;
    FUN_1400a0ea0();
  }
  return eVar2;
}

