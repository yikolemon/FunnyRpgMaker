/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180145e1f */

void FUN_180145e1f(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = &local_10;
  local_10 = 0;
  local_28 = param_5;
  uStack_20 = param_6;
  local_30 = param_4;
  FUN_1801420c6(param_5,0,param_2,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

