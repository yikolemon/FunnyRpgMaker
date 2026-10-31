/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400513fc */

undefined8 *
FUN_1400513fc(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    param_3 = (undefined8 *)FUN_1400436f6(param_1,param_3,param_4);
  }
  else if (puVar1 == param_3) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[3];
    puVar1[2] = param_4[2];
    puVar1[3] = uVar4;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  else {
    local_50 = *param_4;
    uStack_48 = param_4[1];
    local_40 = param_4[2];
    uStack_38 = param_4[3];
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
    puVar1[2] = puVar1[-2];
    puVar1[3] = puVar1[-1];
    *(undefined4 *)puVar1 = *(undefined4 *)(puVar1 + -4);
    *(undefined4 *)((longlong)puVar1 + 4) = *(undefined4 *)((longlong)puVar1 + -0x1c);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -3);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar1 + -0x14);
    puVar1[-2] = 0;
    puVar1[-1] = 7;
    *(undefined2 *)(puVar1 + -4) = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    puVar1 = puVar1 + -4;
    while (puVar1 != param_3) {
      FUN_14000ff1e(puVar1,puVar1 + -4);
      puVar1 = puVar1 + -4;
    }
    FUN_14000ff1e(param_3,&local_50);
    FUN_140005242(&local_50);
  }
  *param_2 = param_3;
  return param_2;
}

