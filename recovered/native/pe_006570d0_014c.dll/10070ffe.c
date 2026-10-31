/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10070ffe */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10070ffe(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  undefined1 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined1 local_50 [24];
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2820;
  local_20 = ExceptionList;
  uStack_64 = 0;
  uStack_68 = 0x10071041;
  ExceptionList = &local_20;
  uStack_64 = FUN_10080804();
  local_58 = (undefined4 *)auStack_60;
  local_18 = 0;
  local_5c = auStack_70;
  local_24 = auStack_70;
  puVar1 = auStack_70;
  puVar4 = (undefined4 *)auStack_60;
  puVar2 = auStack_70;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    FUN_1022c0d0(&DAT_1039cc24);
    puVar1 = local_5c;
    puVar4 = local_58;
    puVar2 = local_24;
    if (DAT_1039cc24 == -1) {
      local_18 = 6;
      FUN_10075be2();
      FUN_1022c3a0(&LAB_10080db4);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039cc24);
      puVar1 = local_5c;
      puVar4 = local_58;
      puVar2 = local_24;
    }
  }
  local_24 = puVar2;
  local_58 = puVar4;
  local_5c = puVar1;
  if (*(uint *)((int)local_54 + 0x5c) < 8) {
    iVar3 = (int)local_54 + 0x48;
  }
  else {
    iVar3 = *(int *)((int)local_54 + 0x48);
  }
  local_18 = 0;
  FUN_1007671c(local_50,iVar3,iVar3 + *(int *)((int)local_54 + 0x58) * 2);
  local_18 = 0x11;
  FUN_1008be62(local_50);
  local_18 = 0x12;
  FUN_1008bf00("Title");
  local_18 = 0xffffffff;
  FUN_10084774();
  puVar4 = local_58;
  local_24 = (undefined1 *)local_58;
  *(undefined4 *)((int)local_58 + -4) = 0x100710ec;
  FUN_10001fee();
  local_5c = (undefined1 *)((int)puVar4 + -0x10);
  local_24 = (undefined1 *)((int)puVar4 + -0x10);
  puVar1 = (undefined1 *)((int)puVar4 + -0x10);
  local_58 = puVar4;
  puVar2 = (undefined1 *)((int)puVar4 + -0x10);
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x1007159e;
    FUN_1022c0d0();
    puVar1 = local_5c;
    puVar2 = local_24;
    if (DAT_1039cc24 == -1) {
      local_18 = 5;
      *(undefined4 *)((int)puVar4 + -0x14) = 0x100715c0;
      FUN_10075be2();
      *(undefined1 **)((int)puVar4 + -0x14) = &LAB_10080db4;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x100715cb;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x100715e0;
      FUN_1022c180();
      puVar1 = local_5c;
      puVar2 = local_24;
    }
  }
  local_24 = puVar2;
  local_5c = puVar1;
  if (*(uint *)((int)local_54 + 0xd4) < 8) {
    iVar3 = (int)local_54 + 0xc0;
  }
  else {
    iVar3 = *(int *)((int)local_54 + 0xc0);
  }
  local_18 = 0;
  *(int *)((int)puVar4 + -0x14) = iVar3 + *(int *)((int)local_54 + 0xd0) * 2;
  *(int *)((int)puVar4 + -0x18) = iVar3;
  *(undefined1 **)((int)puVar4 + -0x1c) = local_50;
  *(undefined4 *)((int)puVar4 + -0x20) = 0x10071150;
  FUN_1007671c();
  local_18 = 0xf;
  *(undefined1 **)((int)puVar4 + -0x14) = local_50;
  *(undefined4 *)((int)puVar4 + -0x18) = 0x10071165;
  FUN_1008be62();
  local_18 = 0x10;
  *(char **)((int)puVar4 + -0x14) = "TitlePlus";
  *(undefined4 *)((int)puVar4 + -0x18) = 0x1007117b;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x1007118a;
  FUN_10084774();
  puVar4 = local_58;
  local_24 = (undefined1 *)local_58;
  *(undefined4 *)((int)local_58 + -4) = 0x10071198;
  FUN_10001fee();
  if (9 < *(uint *)((int)local_54 + 0x44)) {
    local_5c = (undefined1 *)((int)puVar4 + -0x10);
    local_24 = (undefined1 *)((int)puVar4 + -0x10);
    puVar1 = (undefined1 *)((int)puVar4 + -0x10);
    local_58 = puVar4;
    puVar2 = (undefined1 *)((int)puVar4 + -0x10);
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x1007164b;
      FUN_1022c0d0();
      puVar1 = local_5c;
      puVar2 = local_24;
      if (DAT_1039cc24 == -1) {
        local_18 = 4;
        *(undefined4 *)((int)puVar4 + -0x14) = 0x1007166d;
        FUN_10075be2();
        *(undefined1 **)((int)puVar4 + -0x14) = &LAB_10080db4;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x10071678;
        FUN_1022c3a0();
        local_18 = 0xffffffff;
        *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x1007168d;
        FUN_1022c180();
        puVar1 = local_5c;
        puVar2 = local_24;
      }
    }
    local_24 = puVar2;
    local_5c = puVar1;
    if (*(uint *)((int)local_54 + 0x11c) < 8) {
      iVar3 = (int)local_54 + 0x108;
    }
    else {
      iVar3 = *(int *)((int)local_54 + 0x108);
    }
    local_18 = 0;
    *(int *)((int)puVar4 + -0x14) = iVar3 + *(int *)((int)local_54 + 0x118) * 2;
    *(int *)((int)puVar4 + -0x18) = iVar3;
    *(undefined1 **)((int)puVar4 + -0x1c) = local_50;
    *(undefined4 *)((int)puVar4 + -0x20) = 0x1007120d;
    FUN_1007671c();
    local_18 = 0xd;
    *(undefined1 **)((int)puVar4 + -0x14) = local_50;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x10071222;
    FUN_1008be62();
    local_18 = 0xe;
    *(char **)((int)puVar4 + -0x14) = "StartUpMsg";
    *(undefined4 *)((int)puVar4 + -0x18) = 0x10071238;
    FUN_1008bf00();
    local_18 = 0xffffffff;
    *(undefined4 *)((int)puVar4 + -0x14) = 0x10071247;
    FUN_10084774();
    puVar4 = local_58;
    local_24 = (undefined1 *)local_58;
    *(undefined4 *)((int)local_58 + -4) = 0x10071257;
    FUN_10001fee();
    local_5c = (undefined1 *)((int)puVar4 + -0x10);
    local_24 = (undefined1 *)((int)puVar4 + -0x10);
    puVar1 = (undefined1 *)((int)puVar4 + -0x10);
    local_58 = puVar4;
    puVar2 = (undefined1 *)((int)puVar4 + -0x10);
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x100716a0;
      FUN_1022c0d0();
      puVar1 = local_5c;
      puVar2 = local_24;
      if (DAT_1039cc24 == -1) {
        local_18 = 3;
        *(undefined4 *)((int)puVar4 + -0x14) = 0x100716c2;
        FUN_10075be2();
        *(undefined1 **)((int)puVar4 + -0x14) = &LAB_10080db4;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x100716cd;
        FUN_1022c3a0();
        local_18 = 0xffffffff;
        *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x100716e2;
        FUN_1022c180();
        puVar1 = local_5c;
        puVar2 = local_24;
      }
    }
    local_24 = puVar2;
    local_5c = puVar1;
    if (*(uint *)((int)local_54 + 0x134) < 8) {
      iVar3 = (int)local_54 + 0x120;
    }
    else {
      iVar3 = *(int *)((int)local_54 + 0x120);
    }
    local_18 = 0;
    *(int *)((int)puVar4 + -0x14) = iVar3 + *(int *)((int)local_54 + 0x130) * 2;
    *(int *)((int)puVar4 + -0x18) = iVar3;
    *(undefined1 **)((int)puVar4 + -0x1c) = local_50;
    *(undefined4 *)((int)puVar4 + -0x20) = 0x100712bb;
    FUN_1007671c();
    local_18 = 0xb;
    *(undefined1 **)((int)puVar4 + -0x14) = local_50;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x100712d0;
    FUN_1008be62();
    local_18 = 0xc;
    *(char **)((int)puVar4 + -0x14) = "TitleMsg";
    *(undefined4 *)((int)puVar4 + -0x18) = 0x100712e6;
    FUN_1008bf00();
    local_18 = 0xffffffff;
    *(undefined4 *)((int)puVar4 + -0x14) = 0x100712f5;
    FUN_10084774();
    puVar4 = local_58;
    local_24 = (undefined1 *)local_58;
    *(undefined4 *)((int)local_58 + -4) = 0x10071303;
    FUN_10001fee();
  }
  local_5c = (undefined1 *)((int)puVar4 + -0x10);
  local_24 = (undefined1 *)((int)puVar4 + -0x10);
  local_58 = puVar4;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x100715f6;
    local_5c = (undefined1 *)((int)puVar4 + -0x10);
    local_24 = (undefined1 *)((int)puVar4 + -0x10);
    FUN_1022c0d0();
    if (DAT_1039cc24 == -1) {
      local_18 = 2;
      *(undefined4 *)((int)puVar4 + -0x14) = 0x10071618;
      FUN_10075be2();
      *(undefined1 **)((int)puVar4 + -0x14) = &LAB_10080db4;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x10071623;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x10071638;
      FUN_1022c180();
    }
  }
  if (*(uint *)((int)local_54 + 0x98) < 8) {
    iVar3 = (int)local_54 + 0x84;
  }
  else {
    iVar3 = *(int *)((int)local_54 + 0x84);
  }
  local_18 = 0;
  *(int *)((int)puVar4 + -0x14) = iVar3 + *(int *)((int)local_54 + 0x94) * 2;
  *(int *)((int)puVar4 + -0x18) = iVar3;
  *(undefined1 **)((int)puVar4 + -0x1c) = local_50;
  *(undefined4 *)((int)puVar4 + -0x20) = 0x1007136b;
  FUN_1007671c();
  local_18 = 9;
  *(undefined1 **)((int)puVar4 + -0x14) = local_50;
  *(undefined4 *)((int)puVar4 + -0x18) = 0x10071380;
  FUN_1008be62();
  local_18 = 10;
  *(char **)((int)puVar4 + -0x14) = "MainFont";
  *(undefined4 *)((int)puVar4 + -0x18) = 0x10071396;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x100713a5;
  FUN_10084774();
  puVar4 = local_58;
  local_24 = (undefined1 *)local_58;
  *(undefined4 *)((int)local_58 + -4) = 0x100713b3;
  FUN_10001fee();
  local_5c = (undefined1 *)puVar4;
  local_24 = (undefined1 *)((int)puVar4 + -0x10);
  local_18 = 0;
  *(undefined4 *)((int)puVar4 + -0x20) = _DAT_102944c0;
  *(undefined4 *)((int)puVar4 + -0x1c) = _UNK_102944c4;
  *(undefined4 *)((int)puVar4 + -0x18) = _UNK_102944c8;
  *(undefined4 *)((int)puVar4 + -0x14) = _UNK_102944cc;
  local_58 = (undefined4 *)((int)puVar4 + -0x10);
  *(undefined4 *)((int)puVar4 + -0x24) = 0x100713db;
  FUN_1008c23a();
  local_18 = 0x13;
  *(char **)((int)puVar4 + -0x14) = "SubFonts";
  *(undefined4 *)((int)puVar4 + -0x18) = 0x100713f1;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x10071400;
  FUN_10084774();
  puVar1 = local_5c;
  local_24 = local_5c;
  local_58 = *(undefined4 **)((int)local_54 + 0xa0);
  for (local_54 = *(undefined4 **)((int)local_54 + 0x9c); local_54 != local_58;
      local_54 = local_54 + 6) {
    local_18 = 0;
    *(char **)(puVar1 + -4) = "SubFonts";
    *(undefined4 *)(puVar1 + -8) = 0x10071439;
    local_5c = (undefined1 *)FUN_1008bf00();
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      *(int **)(puVar1 + -4) = &DAT_1039cc24;
      *(undefined4 *)(puVar1 + -8) = 0x100714dd;
      FUN_1022c0d0();
      if (DAT_1039cc24 == -1) {
        local_18 = 1;
        *(undefined4 *)(puVar1 + -4) = 0x100714ff;
        FUN_10075be2();
        *(undefined1 **)(puVar1 + -4) = &LAB_10080db4;
        *(undefined4 *)(puVar1 + -8) = 0x1007150a;
        FUN_1022c3a0();
        local_18 = 0xffffffff;
        *(int **)(puVar1 + -4) = &DAT_1039cc24;
        *(undefined4 *)(puVar1 + -8) = 0x1007151f;
        FUN_1022c180();
      }
    }
    puVar4 = local_54;
    if (7 < (uint)local_54[5]) {
      puVar4 = (undefined4 *)*local_54;
    }
    local_18 = 0;
    *(int *)(puVar1 + -4) = (int)puVar4 + local_54[4] * 2;
    *(undefined4 **)(puVar1 + -8) = puVar4;
    *(undefined1 **)(puVar1 + -0xc) = local_50;
    *(undefined4 *)(puVar1 + -0x10) = 0x10071486;
    FUN_1007671c();
    local_18 = 7;
    *(undefined1 **)(puVar1 + -4) = local_50;
    *(undefined4 *)(puVar1 + -8) = 0x1007149a;
    FUN_1008be62();
    local_18 = 8;
    *(undefined1 **)(puVar1 + -4) = local_38;
    *(undefined4 *)(puVar1 + -8) = 0x100714af;
    FUN_1008bf84();
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar1 + -4) = 0x100714bf;
    FUN_1007f222();
    *(undefined4 *)(puVar1 + -4) = 0x100714c7;
    FUN_10001fee();
  }
  ExceptionList = local_20;
  return param_1;
}

