/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140118108 */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_140118125:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_14011812e:
      peVar1 = (errno_t *)FUN_140113dd4();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_140135ff0(_Dst,_Src,_MaxCount);
        goto LAB_140118125;
      }
      FUN_1401366a0(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_14011812e;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_140113dd4();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_140120ee8();
  }
  return eVar2;
}

