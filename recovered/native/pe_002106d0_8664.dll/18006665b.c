/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006665b */

undefined8 *
FUN_18006665b(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (param_2 != param_3) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      FUN_1800666d3(&local_30,uVar1,param_4);
      param_4 = local_30;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

