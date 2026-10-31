/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180278564 */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_180278581:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_18027858a:
      peVar1 = (errno_t *)FUN_18027e66c();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1802a82f0(_Dst,_Src,_MaxCount);
        goto LAB_180278581;
      }
      FUN_1802a89a0(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_18027858a;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_18027e66c();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_180290a50();
  }
  return eVar2;
}

