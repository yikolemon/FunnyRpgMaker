/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2f68 */

LRESULT FUN_1801a2f68(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  longlong lVar1;
  LRESULT LVar2;
  
  if ((DAT_18041f1a0 != 0) && (lVar1 = FUN_1801a0c57(param_1,param_2,param_3,param_4), lVar1 != 0))
  {
    return 1;
  }
  LVar2 = CallWindowProcW(DAT_18041f1b8,param_1,param_2,param_3,param_4);
  return LVar2;
}

