/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b09c */

void __thiscall FUN_1008b09c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *(undefined8 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    param_2[4] = 0;
    param_2[5] = 7;
    *(undefined2 *)param_2 = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
    return;
  }
  FUN_1008b0f2(puVar1,param_2);
  return;
}

