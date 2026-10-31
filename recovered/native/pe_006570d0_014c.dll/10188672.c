/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188672 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10188672(int param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  uVar3 = **(undefined4 **)(param_1 + 0x2c);
  uVar4 = (*(undefined4 **)(param_1 + 0x2c))[1];
  uVar5 = *(undefined4 *)param_3;
  uVar6 = *(undefined4 *)((int)param_3 + 4);
  sVar8 = (short)*(undefined4 *)(param_1 + 0x28);
  **(short **)(param_1 + 0x34) = sVar8;
  *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar8 + 1;
  *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar8 + 2;
  *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar8;
  *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar8 + 2;
  *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar8 + 3;
  **(undefined8 **)(param_1 + 0x30) = *param_2;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0xc) = uVar4;
  *(undefined4 *)(iVar7 + 8) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0x14) = uVar5;
  *(undefined4 *)(iVar7 + 0x18) = uVar2;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0x20) = uVar4;
  *(undefined4 *)(iVar7 + 0x1c) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24) = param_4;
  *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x28) = *param_3;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0x34) = uVar4;
  *(undefined4 *)(iVar7 + 0x30) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x38) = param_4;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0x3c) = uVar1;
  *(undefined4 *)(iVar7 + 0x40) = uVar6;
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar7 + 0x48) = uVar4;
  *(undefined4 *)(iVar7 + 0x44) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x4c) = param_4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
  *(ulonglong *)(param_1 + 0x30) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + _UNK_10301384,
                (int)*(undefined8 *)(param_1 + 0x30) + _DAT_10301380);
  return;
}

