/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042140 */

undefined8 *
FUN_180042140(undefined8 *param_1,undefined4 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = spdlog::logger::vftable;
  local_48 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 3) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  local_40 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_58 = param_3;
  local_50 = param_4;
  local_28 = param_2;
  local_20 = param_1;
  FUN_18004283a(local_40,param_4 - param_3 >> 4,&local_58,&local_50);
  local_20[8] = 0x600000002;
  local_38 = local_20 + 9;
  local_20[0x10] = 0;
  local_30 = local_20 + 0x11;
  FUN_1800422f8();
  puVar8 = local_20;
  FUN_180001ef2(local_28);
  return puVar8;
}

