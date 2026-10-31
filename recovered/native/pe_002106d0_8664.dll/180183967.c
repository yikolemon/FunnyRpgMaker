/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183967 */

undefined8
FUN_180183967(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_98;
  FUN_1801839f7(local_58,param_3,param_4,param_5);
  local_68 = 3;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_60 = local_58;
  FUN_18000584f(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_98);
}

