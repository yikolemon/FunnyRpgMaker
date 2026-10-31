/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff032 */

void * FUN_1800ff032(undefined8 param_1,undefined8 param_2,size_t *param_3,int param_4)

{
  FILE *_File;
  size_t _Count;
  void *_DstBuf;
  size_t sVar1;
  
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0;
  }
  _File = (FILE *)FUN_1800fee30();
  if (_File != (FILE *)0x0) {
    _Count = FUN_1800fefc3(_File);
    if (_Count != 0xffffffffffffffff) {
      _DstBuf = (void *)FUN_1800fe7f8(_Count + (longlong)param_4);
      if (_DstBuf != (void *)0x0) {
        sVar1 = fread(_DstBuf,1,_Count,_File);
        if (sVar1 != _Count) {
          FUN_1800fefb0(_File);
          FUN_1800fe8d4(_DstBuf);
          return (void *)0x0;
        }
        if (0 < param_4) {
          FUN_1802a89a0((longlong)_DstBuf + _Count,0,(longlong)param_4);
        }
        FUN_1800fefb0(_File);
        if (param_3 != (size_t *)0x0) {
          *param_3 = _Count;
          return _DstBuf;
        }
        return _DstBuf;
      }
    }
    FUN_1800fefb0(_File);
  }
  return (void *)0x0;
}

