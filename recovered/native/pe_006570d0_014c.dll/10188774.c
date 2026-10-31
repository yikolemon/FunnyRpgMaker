/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10188774(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  uVar3 = *(undefined4 *)param_3;
  uVar4 = *(undefined4 *)((int)param_3 + 4);
  uVar5 = *(undefined4 *)param_4;
  uVar6 = *(undefined4 *)((int)param_4 + 4);
  uVar7 = *(undefined4 *)param_5;
  uVar8 = *(undefined4 *)((int)param_5 + 4);
  sVar10 = (short)*(undefined4 *)(param_1 + 0x28);
  **(short **)(param_1 + 0x34) = sVar10;
  *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar10 + 1;
  *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar10 + 2;
  *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar10;
  *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar10 + 2;
  *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar10 + 3;
  **(undefined8 **)(param_1 + 0x30) = *param_2;
  *(undefined8 *)(*(int *)(param_1 + 0x30) + 8) = *param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10) = param_6;
  iVar9 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar9 + 0x14) = uVar3;
  *(undefined4 *)(iVar9 + 0x18) = uVar2;
  iVar9 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar9 + 0x1c) = uVar7;
  *(undefined4 *)(iVar9 + 0x20) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24) = param_6;
  *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x28) = *param_3;
  *(undefined8 *)(*(int *)(param_1 + 0x30) + 0x30) = *param_5;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x38) = param_6;
  iVar9 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar9 + 0x3c) = uVar1;
  *(undefined4 *)(iVar9 + 0x40) = uVar4;
  iVar9 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar9 + 0x44) = uVar5;
  *(undefined4 *)(iVar9 + 0x48) = uVar8;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x4c) = param_6;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
  *(ulonglong *)(param_1 + 0x30) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + _UNK_10301384,
                (int)*(undefined8 *)(param_1 + 0x30) + _DAT_10301380);
  return;
}

