/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800473a1 */

undefined8
FUN_1800473a1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  undefined8 local_38;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_2a = (undefined2)param_3;
  if ((*(char *)(param_4 + 2) == '\0') || (*(char *)(param_4 + 2) == 'c')) {
    local_40 = &local_2a;
    local_38 = 1;
    local_48 = param_5;
    FUN_180047d10(param_1);
  }
  else {
    local_18 = param_4[4];
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    local_48 = param_5;
    FUN_180047869(param_1,param_2,param_3,&local_28);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_68);
}

