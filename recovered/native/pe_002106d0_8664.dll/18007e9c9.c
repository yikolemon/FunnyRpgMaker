/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007e9c9 */

undefined8 FUN_18007e9c9(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  thunk_FUN_18007f2f7(local_38,param_3);
  local_48 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = local_38;
  FUN_1800449bc(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

