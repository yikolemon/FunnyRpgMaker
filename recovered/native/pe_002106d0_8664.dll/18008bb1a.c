/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008bb1a */

undefined8
FUN_18008bb1a(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_a8;
  thunk_FUN_18008c077(local_68,param_3,param_4,param_5);
  local_78 = 3;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_70 = local_68;
  FUN_1800449bc(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_a8);
}

