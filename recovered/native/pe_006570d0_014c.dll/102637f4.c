/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102637f4 */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  undefined4 *puVar2;
  errno_t *peVar3;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    eVar1 = 0x16;
    *puVar2 = 0x16;
    FUN_10273ea8();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      peVar3 = (errno_t *)FUN_10268ffd();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar3 = (errno_t *)FUN_10268ffd();
      eVar1 = 0x22;
    }
    *peVar3 = eVar1;
    FUN_10273ea8();
  }
  else {
    FUN_1025b2d0(_Dst,_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}

