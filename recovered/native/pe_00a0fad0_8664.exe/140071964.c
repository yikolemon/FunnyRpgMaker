/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071964 */

undefined8 * FUN_140071964(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_2;
  if (param_2 == param_3) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      lVar1 = lVar1 + 1;
      FUN_14001010a(&local_30);
    } while (local_30 != param_3);
  }
  FUN_140071a06(param_1,lVar1,&local_38,&local_40);
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_68);
}

