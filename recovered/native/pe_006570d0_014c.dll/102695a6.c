/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102695a6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    struct _iobuf * __cdecl common_fsopen<wchar_t>(wchar_t const * const,wchar_t const * const,int)
   
   Library: Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_20;
  undefined4 local_14;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_20 != 0) {
      p_Var2 = (_iobuf *)FUN_1027971f(param_1,param_2,param_3,local_20);
      FUN_10269645();
      goto LAB_10269632;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x18;
  }
  p_Var2 = (_iobuf *)0x0;
LAB_10269632:
  *unaff_FS_OFFSET = local_14;
  return p_Var2;
}

