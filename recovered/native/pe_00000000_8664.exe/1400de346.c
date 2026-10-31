/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400de346 */

void FUN_1400de346(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  uint param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (0xffffff < (param_6 | param_7 | param_5 | param_4)) {
    uVar2 = **(undefined8 **)(param_1 + 0x38);
    FUN_1400dae70(param_1,6,4);
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3 + 2;
    *(short *)(lVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x34) + 1;
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3 + 2;
    *(short *)(lVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x34) + 2;
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3 + 2;
    *(undefined2 *)(lVar3 + 2) = *(undefined2 *)(param_1 + 0x34);
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3 + 2;
    *(short *)(lVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x34) + 2;
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = lVar3 + 2;
    *(short *)(lVar3 + 2) = (short)*(undefined4 *)(param_1 + 0x34) + 3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    lVar3 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar3 + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)param_3;
    *(undefined4 *)(lVar3 + 0x18) = uVar1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar3 + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined8 *)(lVar3 + 0x14) = *param_3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
    lVar3 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar3 + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)param_2;
    *(undefined4 *)(lVar3 + 0x18) = uVar1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_7;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}

