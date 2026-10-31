/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f2b14 */

undefined8
FUN_1800f2b14(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  FUN_1800f2b93(local_40,param_3,param_4);
  local_50 = 2;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_48 = local_40;
  FUN_18000584f(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
}

