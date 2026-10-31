/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017af2 */

undefined8 *
FUN_140017af2(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = spdlog::formatter::vftable;
  *param_1 = spdlog::pattern_formatter::vftable;
  local_30 = param_3;
  FUN_1400027d2(param_1 + 1,&DAT_140ed704f,param_3,param_4,param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *local_30;
  uVar2 = local_30[1];
  uVar3 = local_30[2];
  uVar4 = local_30[3];
  uVar5 = local_30[5];
  uVar6 = local_30[6];
  uVar7 = local_30[7];
  *(undefined4 *)(param_1 + 7) = local_30[4];
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined8 *)(local_30 + 4) = 0;
  *(undefined8 *)(local_30 + 6) = 0xf;
  *(undefined1 *)local_30 = 0;
  *(undefined4 *)(param_1 + 9) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_14001863a();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  local_28 = (undefined8 *)FUN_1401887b0(0x158);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_140018fe6(local_28);
  local_38 = 0;
  local_48 = local_28;
  FUN_140018cfc(param_1 + 0x10,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  FUN_14000109c(local_30);
  return param_1;
}

