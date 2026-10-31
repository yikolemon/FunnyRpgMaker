/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b3d5 */

undefined8
FUN_18005b3d5(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_38 = &local_18;
  local_40 = &local_20;
  local_48 = &local_24;
  local_30 = &stack0x00000028;
  local_24 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  FUN_18005b453(param_1);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
}

