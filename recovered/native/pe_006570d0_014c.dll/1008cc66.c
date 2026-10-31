/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008cc66 */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_1008cc66(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int local_16c;
  undefined1 local_168 [16];
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 auStack_150 [4];
  int local_14c;
  undefined1 *local_148;
  int local_144;
  undefined1 *local_140;
  int *local_13c;
  wchar_t *local_138;
  undefined4 uStack_134;
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [176];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3750;
  local_20 = ExceptionList;
  local_144 = *(int *)(param_1 + 0x40);
  ExceptionList = &local_20;
  for (local_14c = *(int *)(param_1 + 0x3c); local_14c != local_144; local_14c = local_14c + 0xa44)
  {
    puStack_154 = local_130;
    uStack_158 = 0x1008ccc4;
    puStack_154 = (undefined1 *)FUN_1008dea6();
    local_18 = 0;
    local_24 = (undefined1 *)&local_16c;
    local_13c = &local_16c;
    local_148 = local_168;
    local_140 = auStack_150;
    FUN_10003728(local_14c + 0x1c);
    *local_13c = (int)local_d8;
    local_18 = 0;
    FUN_1008e3df();
    puVar2 = local_140;
    local_24 = local_140;
    local_18 = 6;
    iVar3 = local_14c + 4;
    local_138 = L"{}_{}";
    uStack_134 = 5;
    piVar4 = (int *)(local_140 + -0x14);
    *(undefined8 *)(local_140 + -0x10) = 0x510356120;
    *(undefined1 **)(puVar2 + -4) = local_d8;
    *(int *)(puVar2 + -8) = iVar3;
    *piVar4 = (int)local_f0;
    *(undefined4 *)(puVar2 + -0x18) = 0x1008cd70;
    FUN_1008e37e();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar2 + -4) = 0x1008cd86;
    FUN_10001134();
    local_18 = 1;
    *(undefined4 *)(puVar2 + -4) = 0;
    *(undefined1 **)(puVar2 + -8) = local_f0;
    *(undefined4 *)(puVar2 + -0xc) = 0x1008cd9e;
    FUN_1006a7d0();
    local_18 = 5;
    *(undefined1 **)(puVar2 + -4) = local_d8;
    *(undefined4 *)(puVar2 + -8) = param_2;
    *(undefined1 **)(puVar2 + -0xc) = local_120;
    *(undefined4 *)(puVar2 + -0x10) = 0x1008cdb9;
    FUN_10001cfb();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar2 + -4) = 0x1008cdcf;
    FUN_10001f04();
    local_18 = 2;
    *(char **)(puVar2 + -4) = ".json";
    *(undefined4 *)(puVar2 + -8) = 0x1008cde6;
    FUN_1007da60();
    *(undefined4 *)(puVar2 + -4) = 1;
    *(undefined4 *)(puVar2 + -8) = 0x40;
    *(undefined4 *)(puVar2 + -0xc) = 2;
    *(undefined1 **)(puVar2 + -0x10) = local_120;
    *(undefined4 *)(puVar2 + -0x14) = 0x1008cdf8;
    FUN_1007eb1c();
    uVar1 = DAT_102944b0._4_4_;
    local_18 = 3;
    *(undefined4 *)(puVar2 + -0x10) = (undefined4)DAT_102944b0;
    *(undefined4 *)(puVar2 + -0xc) = uVar1;
    *(undefined4 *)(puVar2 + -8) = 0;
    *(undefined4 *)(puVar2 + -4) = 0;
    *(undefined1 **)(puVar2 + -0x14) = local_108;
    *(undefined4 *)(puVar2 + -0x18) = 0x1008ce21;
    FUN_1007f042();
    local_18 = 4;
    *(undefined1 **)(puVar2 + -4) = local_108;
    *(undefined1 **)(puVar2 + -8) = local_d8;
    *(undefined4 *)(puVar2 + -0xc) = 0x1008ce39;
    FUN_1007f022();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar2 + -4) = 0x1008ce4f;
    FUN_10001fee();
    local_18 = 3;
    *(undefined4 *)(puVar2 + -4) = 0x1008ce61;
    FUN_1007f296();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar2 + -4) = 0x1008ce74;
    FUN_1007eba6();
    *(undefined4 *)(puVar2 + -4) = 0x1008ce7c;
    FUN_10001f04();
    *(undefined4 *)(puVar2 + -4) = 0x1008ce84;
    FUN_10001134();
    *(undefined4 *)(puVar2 + -4) = 0x1008ce8c;
    FUN_1007f222();
  }
  ExceptionList = local_20;
  return;
}

