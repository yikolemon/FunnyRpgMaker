/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a45e */

void FUN_14001a45e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar4;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_14001a4ac();
  return;
}

