/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018b8f0 */

void __thiscall
FUN_1018b8f0(int param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,uint param_5,
            uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (0xffffff < (param_6 | param_7 | param_5 | param_4)) {
    uVar1 = **(undefined4 **)(param_1 + 0x2c);
    uVar2 = (*(undefined4 **)(param_1 + 0x2c))[1];
    FUN_10188516(6,4);
    **(undefined2 **)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + 2;
    *(short *)(iVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x28) + 1;
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + 2;
    *(short *)(iVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x28) + 2;
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + 2;
    *(undefined2 *)(iVar3 + 2) = *(undefined2 *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + 2;
    *(short *)(iVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x28) + 2;
    iVar3 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = iVar3 + 2;
    *(short *)(iVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x28) + 3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 2;
    **(undefined8 **)(param_1 + 0x30) = *param_2;
    iVar3 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    *(undefined4 *)(iVar3 + 8) = uVar1;
    *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
    iVar3 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar3 + 0x14;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar4 = *(undefined4 *)((int)param_2 + 4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)param_3;
    *(undefined4 *)(iVar3 + 0x18) = uVar4;
    iVar3 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    *(undefined4 *)(iVar3 + 8) = uVar1;
    *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_5;
    iVar3 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar3 + 0x14;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined8 *)(iVar3 + 0x14) = *param_3;
    iVar3 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    *(undefined4 *)(iVar3 + 8) = uVar1;
    *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_6;
    iVar3 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar3 + 0x14;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar4 = *(undefined4 *)((int)param_3 + 4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)param_2;
    *(undefined4 *)(iVar3 + 0x18) = uVar4;
    iVar3 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    *(undefined4 *)(iVar3 + 8) = uVar1;
    *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_7;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x14;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

