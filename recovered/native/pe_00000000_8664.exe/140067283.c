/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140067283 */

undefined8
FUN_140067283(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
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
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_2a = (undefined2)param_3;
  if ((*(char *)(param_4 + 2) == '\0') || (*(char *)(param_4 + 2) == 'c')) {
    local_40 = &local_2a;
    local_38 = 1;
    local_48 = param_5;
    FUN_140067ae2(param_1);
  }
  else {
    local_18 = param_4[4];
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    local_48 = param_5;
    FUN_14006763b(param_1,param_2,param_3,&local_28);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_68);
}

