/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b66dd */

void FUN_1400b66dd(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = &local_c;
  local_18 = param_7;
  local_20 = param_6;
  local_28 = (undefined1 *)&param_5;
  local_38 = param_3;
  local_c = param_4;
  FUN_1400b6042(param_1,4,param_2,2);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_58);
}

