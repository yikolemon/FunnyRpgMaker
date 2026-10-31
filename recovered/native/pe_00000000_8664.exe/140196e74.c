/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140196e74 */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_140196e91:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_140196e9a:
      peVar1 = (errno_t *)FUN_14019e8cc();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1401c5180(_Dst,_Src,_MaxCount);
        goto LAB_140196e91;
      }
      FUN_1401c5830(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_140196e9a;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_14019e8cc();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_1401ae640();
  }
  return eVar2;
}

