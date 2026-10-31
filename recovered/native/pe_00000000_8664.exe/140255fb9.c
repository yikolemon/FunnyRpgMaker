/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140255fb9 */

longlong *
FUN_140255fb9(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *local_2a0;
  undefined1 *local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined1 local_278 [512];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_290 = 0;
  local_288 = 0x100;
  local_2a0 = &DAT_1404c6aa8;
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = &local_2a0;
  local_40 = param_5;
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_298 = local_278;
  local_280 = param_2;
  FUN_1402560ad();
  lVar2 = local_280;
  uVar1 = local_290;
  local_290 = 0;
  FUN_140256260(local_280,*(undefined8 *)(local_280 + 0x10),local_278,uVar1);
  *param_1 = lVar2;
  local_280 = lVar2;
  FUN_1402561e6(&local_2a0);
  return param_1;
}

