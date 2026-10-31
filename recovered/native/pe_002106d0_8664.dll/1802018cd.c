/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802018cd */

void FUN_1802018cd(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = *param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2;
  param_1[7] = param_3;
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 8) = param_6;
  *(undefined2 *)((longlong)param_1 + 0x42) = param_7;
  local_30 = &local_24;
  local_38 = 0;
  uVar1 = FUN_1801cc8d6(uVar1,8,0,param_5);
  param_1[4] = uVar1;
  if (local_24 == 0) {
    *(undefined4 *)(param_1 + 6) = param_5;
    param_1[5] = uVar1;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

