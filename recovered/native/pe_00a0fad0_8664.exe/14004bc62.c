/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004bc62 */

longlong * FUN_14004bc62(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  *param_1 = lVar1;
  if (lVar1 != param_1[1]) {
    FUN_1400497c5(local_28,lVar1,param_1[1],param_1 + 3);
    param_1[2] = local_28[0];
  }
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

