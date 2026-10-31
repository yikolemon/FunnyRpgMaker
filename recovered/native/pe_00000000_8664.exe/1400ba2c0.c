/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ba2c0 */

void FUN_1400ba2c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = &local_c;
  local_18 = param_6;
  local_20 = param_5;
  local_10 = param_3;
  local_c = param_4;
  FUN_1400b9b88(param_1,8,param_2);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

