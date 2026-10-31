/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a3c40 */

undefined8 FUN_1400a3c40(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_30 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = param_1;
  FUN_1400a4479(local_28);
  FUN_1400423a4(param_2,local_28,0);
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

