/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bed4f */

void FUN_1400bed4f(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_38 = &local_10;
  local_10 = 0;
  local_28 = param_5;
  uStack_20 = param_6;
  local_30 = param_4;
  FUN_1400baff6(param_5,0,param_2,param_3);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_58);
}

