/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180164b05 */

void FUN_180164b05(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  uint local_38;
  code *local_30;
  undefined8 **local_28;
  undefined8 *local_20;
  undefined4 local_18;
  undefined4 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = param_4 | 0x400000;
  local_18 = param_5;
  uStack_10 = param_6;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_28 = &local_20;
  local_30 = FUN_180164aa8;
  local_20 = param_2;
  FUN_1801462d7(param_5,puVar1,param_2[3] + 1,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

