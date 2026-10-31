/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180164a20 */

void FUN_180164a20(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined8 **local_30;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_10 = param_5;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_30 = &local_20;
  local_38 = FUN_180164aa8;
  local_20 = param_2;
  local_18 = param_4;
  FUN_180145e1f(param_1,puVar1,param_2[3] + 1,param_3 | 0x400000);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

