/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005058c */

longlong * FUN_14005058c(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  *param_1 = lVar1;
  if (lVar1 != param_1[1]) {
    FUN_14004e105(local_28,lVar1,param_1[1],param_1 + 3);
    param_1[2] = local_28[0];
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

