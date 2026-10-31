/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401143e4 */

/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
   const * __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong local_res8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
  }
  else {
    FUN_14012a52c(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)FUN_14012a728(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_14010b338(local_res8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

