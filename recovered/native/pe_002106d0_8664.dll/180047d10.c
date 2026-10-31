/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180047d10 */

undefined8 FUN_180047d10(undefined8 param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if ((param_4[1] < 0) && (*param_4 < 1)) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    FUN_180045f79(param_1,param_2);
  }
  else {
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_4c = param_4[1];
    local_78 = FUN_18004857b(&local_68,&local_4c);
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_90 = &local_88;
    local_98 = 1;
    FUN_180048664(param_1,param_2,local_4c,param_4);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_b8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_b8);
}

