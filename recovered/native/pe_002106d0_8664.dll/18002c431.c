/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c431 */

undefined8
FUN_18002c431(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1 + 1 == param_2) {
    local_31 = 1;
    FUN_180025c48(&local_30,"invalid precision");
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(&local_30,&DAT_180391580);
  }
  local_40 = param_5;
  local_48 = param_4;
  FUN_18002c5d5(&local_30,param_1 + 1,param_2,param_3 + 3);
  *param_3 = local_28 << 8 | *param_3 & 0xfffffcff;
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_68);
  }
  return local_30;
}

