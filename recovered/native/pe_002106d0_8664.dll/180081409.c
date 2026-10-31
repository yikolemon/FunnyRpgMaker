/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081409 */

undefined8
FUN_180081409(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_98;
  thunk_FUN_180081920(local_50,param_3,param_4);
  local_60 = 2;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_58 = local_50;
  FUN_1800449bc(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_98);
}

