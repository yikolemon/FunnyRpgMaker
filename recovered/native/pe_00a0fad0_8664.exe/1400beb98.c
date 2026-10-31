/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400beb98 */

void FUN_1400beb98(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (0x527 < param_2 - param_1) {
    do {
      if ((longlong)param_3 < 1) {
        FUN_1400bee60(param_1,param_2);
        lVar1 = param_2 - param_1;
        do {
          FUN_1400bf15f(param_1,param_2);
          param_2 = param_2 + -0x28;
          lVar1 = lVar1 + -0x28;
        } while (0x28 < lVar1);
        goto LAB_1400bec6e;
      }
      FUN_1400bef99(&local_38,param_1,param_2);
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if (local_38 - param_1 < param_2 - local_30) {
        FUN_1400beb98(param_1,local_38,param_3);
        param_1 = local_30;
      }
      else {
        FUN_1400beb98(local_30,param_2,param_3);
        param_2 = local_38;
      }
    } while (0x527 < param_2 - param_1);
  }
  FUN_1400bec9a(param_1,param_2);
LAB_1400bec6e:
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

