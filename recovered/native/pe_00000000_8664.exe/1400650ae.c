/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400650ae */

void FUN_1400650ae(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  char local_38 [8];
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  FUN_1400653be(local_38,param_1 + 4,param_2);
  if (local_38[0] == '\r') {
    lVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] - (param_3 - lVar1 >> 1);
  }
  local_48 = local_28;
  uStack_50 = uStack_30;
  local_80 = param_1[4];
  local_78 = (undefined4)param_1[5];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_70 = (undefined4)param_1[6];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x34);
  local_68 = param_1[7];
  local_60 = param_1;
  FUN_1400653ed(&local_40);
  param_1[4] = local_40;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_a8);
}

