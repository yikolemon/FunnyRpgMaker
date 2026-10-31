/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400782ee */

void * FUN_1400782ee(undefined8 param_1,undefined8 param_2,size_t *param_3,int param_4)

{
  FILE *_File;
  size_t _Count;
  void *_DstBuf;
  size_t sVar1;
  
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0;
  }
  _File = (FILE *)FUN_1400780ec();
  if (_File != (FILE *)0x0) {
    _Count = FUN_14007827f(_File);
    if (_Count != 0xffffffffffffffff) {
      _DstBuf = (void *)FUN_140077ab4(_Count + (longlong)param_4);
      if (_DstBuf != (void *)0x0) {
        sVar1 = fread(_DstBuf,1,_Count,_File);
        if (sVar1 != _Count) {
          FUN_14007826c(_File);
          FUN_140077b90(_DstBuf);
          return (void *)0x0;
        }
        if (0 < param_4) {
          FUN_1401c5830((longlong)_DstBuf + _Count,0,(longlong)param_4);
        }
        FUN_14007826c(_File);
        if (param_3 != (size_t *)0x0) {
          *param_3 = _Count;
          return _DstBuf;
        }
        return _DstBuf;
      }
    }
    FUN_14007826c(_File);
  }
  return (void *)0x0;
}

