/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9510 */

void __thiscall FUN_100e9510(int param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_1c = ExceptionList;
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eadf0;
  puVar1 = *(uint **)(param_1 + 4);
  ExceptionList = &local_1c;
  if (puVar1 == *(uint **)(param_1 + 8)) {
    param_3 = (uint *)FUN_100ac7a6(param_3,param_4);
  }
  else if (param_3 == puVar1) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_4 + 4);
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *puVar1 = *param_4;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    param_4[4] = 0;
    param_4[5] = 0xf;
    *(undefined1 *)param_4 = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
  }
  else {
    local_28 = *(undefined8 *)(param_4 + 4);
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    param_4[4] = 0;
    param_4[5] = 0xf;
    *(undefined1 *)param_4 = 0;
    local_14 = 0;
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar1 + -2);
    *puVar1 = puVar1[-6];
    puVar1[1] = puVar1[-5];
    puVar1[2] = puVar1[-4];
    puVar1[3] = puVar1[-3];
    puVar1[-2] = 0;
    puVar1[-1] = 0xf;
    *(undefined1 *)(puVar1 + -6) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
    local_20 = (undefined1 *)&local_3c;
    local_3c = param_1;
    while (puVar5 = puVar1 + -6, param_3 != puVar5) {
      FUN_10004e60();
      *(undefined8 *)(puVar1 + -2) = *(undefined8 *)(puVar1 + -8);
      *puVar5 = puVar1[-0xc];
      puVar1[-5] = puVar1[-0xb];
      puVar1[-4] = puVar1[-10];
      puVar1[-3] = puVar1[-9];
      puVar1[-8] = 0;
      puVar1[-7] = 0xf;
      *(undefined1 *)(puVar1 + -0xc) = 0;
      puVar1 = puVar5;
    }
    if (param_3 != &local_38) {
      FUN_10004e60();
      *(undefined8 *)(param_3 + 4) = local_28;
      *param_3 = local_38;
      param_3[1] = uStack_34;
      param_3[2] = uStack_30;
      param_3[3] = uStack_2c;
      local_28 = 0xf00000000;
      local_38 = local_38 & 0xffffff00;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  *param_2 = param_3;
  ExceptionList = local_1c;
  return;
}

