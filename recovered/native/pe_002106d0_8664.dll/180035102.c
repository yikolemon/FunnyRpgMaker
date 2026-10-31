/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180035102 */

undefined8 *
FUN_180035102(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = spdlog::formatter::vftable;
  *param_1 = spdlog::pattern_formatter::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar2 = *(undefined4 *)(param_4 + 3);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(undefined1 *)param_4 = 0;
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1800350ba(param_1 + 0x13,param_5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_1800354fa(param_1,param_1 + 1);
  FUN_180001ef2(param_2);
  FUN_180001ef2(param_4);
  FUN_180004cea(param_5 + 0x18);
  FUN_1800237d6(param_5 + 8,*(undefined8 *)(param_5 + 8));
  thunk_FUN_1802464a0(*(undefined8 *)(param_5 + 8),0x20);
  return param_1;
}

