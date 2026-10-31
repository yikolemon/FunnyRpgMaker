/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180097b07 */

undefined8 FUN_180097b07(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  FUN_180097d73(local_30,param_3);
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_38 = local_30;
  FUN_18000584f(param_1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

