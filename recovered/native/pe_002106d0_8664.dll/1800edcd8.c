/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800edcd8 */

undefined8 *
FUN_1800edcd8(longlong param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puVar1 = *(ulonglong **)(param_1 + 8);
  if (puVar1 == *(ulonglong **)(param_1 + 0x10)) {
    param_3 = (ulonglong *)FUN_1800b0daa(param_1,param_3,param_4);
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
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  }
  else {
    local_50 = *param_4;
    uStack_48 = param_4[1];
    local_40 = param_4[2];
    uStack_38 = param_4[3];
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    *(int *)(puVar1 + 2) = (int)puVar1[-2];
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)puVar1 + -0xc);
    *(int *)(puVar1 + 3) = (int)puVar1[-1];
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)puVar1 + -4);
    *(int *)puVar1 = (int)puVar1[-4];
    *(undefined4 *)((longlong)puVar1 + 4) = *(undefined4 *)((longlong)puVar1 + -0x1c);
    *(int *)(puVar1 + 1) = (int)puVar1[-3];
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar1 + -0x14);
    puVar1[-2] = 0;
    puVar1[-1] = 0xf;
    *(undefined1 *)(puVar1 + -4) = 0;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    while (puVar5 = puVar1 + -4, puVar5 != param_3) {
      FUN_180004c8c(puVar5);
      *(int *)(puVar1 + -2) = (int)puVar1[-6];
      *(undefined4 *)((longlong)puVar1 + -0xc) = *(undefined4 *)((longlong)puVar1 + -0x2c);
      *(int *)(puVar1 + -1) = (int)puVar1[-5];
      *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)((longlong)puVar1 + -0x24);
      *(int *)puVar5 = (int)puVar1[-8];
      *(undefined4 *)((longlong)puVar1 + -0x1c) = *(undefined4 *)((longlong)puVar1 + -0x3c);
      *(int *)(puVar1 + -3) = (int)puVar1[-7];
      *(undefined4 *)((longlong)puVar1 + -0x14) = *(undefined4 *)((longlong)puVar1 + -0x34);
      puVar1[-6] = 0;
      puVar1[-5] = 0xf;
      *(undefined1 *)(puVar1 + -8) = 0;
      puVar1 = puVar5;
    }
    if (&local_50 != param_3) {
      FUN_180004c8c(param_3);
      *(undefined4 *)(param_3 + 2) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_3 + 0x14) = local_40._4_4_;
      *(undefined4 *)(param_3 + 3) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_38._4_4_;
      *(undefined4 *)param_3 = (undefined4)local_50;
      *(undefined4 *)((longlong)param_3 + 4) = local_50._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_48._4_4_;
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = local_50 & 0xffffffffffffff00;
    }
    FUN_180001ef2(&local_50);
  }
  *param_2 = param_3;
  return param_2;
}

