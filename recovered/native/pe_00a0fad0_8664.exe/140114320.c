/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114320 */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
  }
  else {
    FUN_14012a52c(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_14012a68c(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_14010b338(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

