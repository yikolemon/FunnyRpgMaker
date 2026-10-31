/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019ee04 */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
  }
  else {
    FUN_1401b7f70(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_1401b80d0(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_140193160(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

