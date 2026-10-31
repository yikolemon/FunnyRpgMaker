/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a6f10 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a6f10(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 *local_4c;
  undefined1 *local_48;
  int local_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c4310;
  local_20 = ExceptionList;
  uStack_54 = 0;
  uStack_58 = 0x100a6f53;
  ExceptionList = &local_20;
  uStack_54 = FUN_10080804();
  local_4c = auStack_50;
  local_18 = 0;
  local_24 = auStack_60;
  local_48 = auStack_60;
  FUN_1008e5ac(local_44);
  local_18 = 6;
  FUN_1008bf00(&DAT_1033a3fb);
  local_18 = 0xffffffff;
  uVar4 = FUN_10084774();
  puVar1 = local_4c;
  local_48 = local_4c;
  *(undefined4 *)(local_4c + -4) = uVar4;
  local_24 = local_4c + -0x10;
  puVar2 = local_4c + -0x10;
  puVar3 = local_4c + -0x10;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    puVar6 = (undefined4 *)(local_4c + -0x14);
    local_4c = local_4c + -0x10;
    *puVar6 = &DAT_1039cc24;
    *(undefined4 *)(puVar1 + -0x18) = 0x100a7118;
    FUN_1022c0d0();
    puVar2 = local_4c;
    puVar3 = local_24;
    if (DAT_1039cc24 == -1) {
      local_18 = 1;
      *(undefined4 *)(puVar1 + -0x14) = 0x100a713a;
      FUN_10075be2();
      *(undefined1 **)(puVar1 + -0x14) = &LAB_10080db4;
      *(undefined4 *)(puVar1 + -0x18) = 0x100a7145;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      *(int **)(puVar1 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)(puVar1 + -0x18) = 0x100a715a;
      FUN_1022c180();
      puVar2 = local_4c;
      puVar3 = local_24;
    }
  }
  local_24 = puVar3;
  local_4c = puVar2;
  if (*(uint *)(local_44 + 0x18) < 8) {
    iVar5 = local_44 + 4;
  }
  else {
    iVar5 = *(int *)(local_44 + 4);
  }
  local_18 = 0;
  *(int *)(puVar1 + -0x14) = iVar5 + *(int *)(local_44 + 0x14) * 2;
  *(int *)(puVar1 + -0x18) = iVar5;
  *(undefined1 **)(puVar1 + -0x1c) = local_40;
  *(undefined4 *)(puVar1 + -0x20) = 0x100a6ff5;
  FUN_1007671c();
  local_18 = 3;
  *(undefined1 **)(puVar1 + -0x14) = local_40;
  *(undefined4 *)(puVar1 + -0x18) = 0x100a700a;
  FUN_1008be62();
  local_18 = 4;
  *(char **)(puVar1 + -0x14) = "name";
  *(undefined4 *)(puVar1 + -0x18) = 0x100a7020;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar1 + -0x14) = 0x100a702f;
  FUN_10084774();
  puVar1 = local_48;
  local_24 = local_48;
  *(undefined4 *)(local_48 + -4) = 0x100a703d;
  FUN_10001fee();
  local_4c = puVar1;
  local_24 = puVar1 + -0x10;
  local_18 = 0;
  *(undefined4 *)(puVar1 + -0x20) = _DAT_102944c0;
  *(undefined4 *)(puVar1 + -0x1c) = _UNK_102944c4;
  *(undefined4 *)(puVar1 + -0x18) = _UNK_102944c8;
  *(undefined4 *)(puVar1 + -0x14) = _UNK_102944cc;
  local_48 = puVar1 + -0x10;
  *(undefined4 *)(puVar1 + -0x24) = 0x100a7065;
  FUN_1008c23a();
  local_18 = 5;
  *(char **)(puVar1 + -0x14) = "pages";
  *(undefined4 *)(puVar1 + -0x18) = 0x100a707b;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar1 + -0x14) = 0x100a708a;
  FUN_10084774();
  puVar1 = local_4c;
  local_24 = local_4c;
  local_48 = *(undefined1 **)(local_44 + 0x28);
  for (local_44 = *(int *)(local_44 + 0x24); (undefined1 *)local_44 != local_48;
      local_44 = local_44 + 0x60) {
    local_18 = 0;
    *(char **)(puVar1 + -4) = "pages";
    *(undefined4 *)(puVar1 + -8) = 0x100a70b9;
    local_4c = (undefined1 *)FUN_1008bf00();
    *(undefined1 **)(puVar1 + -4) = local_40;
    *(undefined4 *)(puVar1 + -8) = 0x100a70c9;
    FUN_100a7210();
    local_18 = 2;
    *(undefined1 **)(puVar1 + -4) = local_40;
    *(undefined4 *)(puVar1 + -8) = 0x100a70de;
    FUN_1008bf84();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar1 + -4) = 0x100a70ee;
    FUN_1007f222();
  }
  ExceptionList = local_20;
  return param_1;
}

