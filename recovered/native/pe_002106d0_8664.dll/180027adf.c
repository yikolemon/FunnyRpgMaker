/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027adf */

undefined8 * FUN_180027adf(undefined8 *param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  uint uVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = *param_4 >> 0xf & 7;
  if (uVar1 == 1) {
    local_31 = (undefined1)param_4[1];
    FUN_180027b85(param_1,param_2,param_3);
  }
  else {
    if (param_3 != 0) {
      do {
        FUN_180018bde(param_2,param_4 + 1,(ulonglong)uVar1 + (longlong)(param_4 + 1));
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *param_1 = param_2;
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

