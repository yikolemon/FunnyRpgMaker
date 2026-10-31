/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004b85a */

longlong * FUN_14004b85a(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_2 != param_3) {
    FUN_1400497c5(local_28,param_2,param_3,param_1 + 3);
    param_1[2] = local_28[0];
  }
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_48);
}

