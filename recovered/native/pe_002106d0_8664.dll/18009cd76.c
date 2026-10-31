/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009cd76 */

undefined8
FUN_18009cd76(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 local_70 [80];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_c8;
  local_a8 = param_6;
  thunk_FUN_18009ce21(local_70,param_3,param_4,param_5);
  local_80 = 4;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78 = local_70;
  FUN_1800449bc(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_c8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_c8);
}

