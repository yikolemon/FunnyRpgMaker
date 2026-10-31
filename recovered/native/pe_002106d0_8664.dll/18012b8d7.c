/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b8d7 */

void FUN_18012b8d7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar1 = (undefined8 *)FUN_1801328fc();
  local_38 = 0;
  local_30 = &local_res18;
  FUN_1802785ec(*puVar1,param_1,0xffffffffffffffff,param_2);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

