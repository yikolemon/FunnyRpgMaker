/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a0f26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a0f26(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  short sVar6;
  longlong lVar7;
  
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  uVar5 = **(undefined8 **)(param_1 + 0x38);
  sVar6 = (short)*(undefined4 *)(param_1 + 0x34);
  **(short **)(param_1 + 0x48) = sVar6;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar6 + 1;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar6 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar6;
  *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar6 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar6 + 3;
  **(undefined8 **)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
  lVar7 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar7 + 0x14) = uVar3;
  *(undefined4 *)(lVar7 + 0x18) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
  lVar7 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar7 + 0x3c) = uVar1;
  *(undefined4 *)(lVar7 + 0x40) = uVar4;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x44) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
  lVar7 = *(longlong *)(param_1 + 0x48) + _UNK_1405387f8;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + _DAT_1405387f0;
  *(longlong *)(param_1 + 0x48) = lVar7;
  return;
}

