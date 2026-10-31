/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140217744 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140217744(longlong *param_1,undefined8 param_2,longlong param_3)

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
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  FUN_140217a46(local_38,param_1 + 4,param_2);
  if (local_38[0] == '\r') {
    lVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (lVar1 - param_3);
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
  FUN_140217a75(&local_40);
  param_1[4] = local_40;
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_a8);
}

