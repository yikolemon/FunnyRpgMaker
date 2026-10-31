/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008dea6 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008dea6(undefined4 param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 *puVar9;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  int local_48;
  uint local_44;
  byte local_40 [8];
  int *local_38;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 *puVar8;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c37c0;
  local_20 = ExceptionList;
  uStack_54 = 0;
  uStack_58 = 0x1008dee9;
  ExceptionList = &local_20;
  uStack_54 = FUN_10080804();
  local_50 = (undefined1 *)&local_50;
  local_18 = 0;
  local_24 = auStack_60;
  local_4c = auStack_60;
  FUN_1008e5ac(local_48 + 8);
  local_18 = 10;
  FUN_1008bf00(&DAT_1033a3fb);
  local_18 = 0xffffffff;
  uVar4 = FUN_10084774();
  puVar7 = local_50;
  local_4c = local_50;
  *(undefined4 *)(local_50 + -4) = uVar4;
  local_24 = local_50 + -0x10;
  puVar2 = local_50 + -0x10;
  puVar3 = local_50 + -0x10;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    puVar9 = (undefined4 *)(local_50 + -0x14);
    local_50 = local_50 + -0x10;
    *puVar9 = &DAT_1039cc24;
    *(undefined4 *)(puVar7 + -0x18) = 0x1008e1c7;
    FUN_1022c0d0();
    puVar2 = local_50;
    puVar3 = local_24;
    if (DAT_1039cc24 == -1) {
      local_18 = 2;
      *(undefined4 *)(puVar7 + -0x14) = 0x1008e1e9;
      FUN_10075be2();
      *(undefined1 **)(puVar7 + -0x14) = &LAB_10080db4;
      *(undefined4 *)(puVar7 + -0x18) = 0x1008e1f4;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      *(int **)(puVar7 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)(puVar7 + -0x18) = 0x1008e209;
      FUN_1022c180();
      puVar2 = local_50;
      puVar3 = local_24;
    }
  }
  local_24 = puVar3;
  local_50 = puVar2;
  if (*(uint *)(local_48 + 0x30) < 8) {
    iVar5 = local_48 + 0x1c;
  }
  else {
    iVar5 = *(int *)(local_48 + 0x1c);
  }
  local_18 = 0;
  *(int *)(puVar7 + -0x14) = iVar5 + *(int *)(local_48 + 0x2c) * 2;
  *(int *)(puVar7 + -0x18) = iVar5;
  *(byte **)(puVar7 + -0x1c) = local_40;
  *(undefined4 *)(puVar7 + -0x20) = 0x1008df8c;
  FUN_1007671c();
  local_18 = 7;
  *(byte **)(puVar7 + -0x14) = local_40;
  *(undefined4 *)(puVar7 + -0x18) = 0x1008dfa0;
  FUN_1008be62();
  local_18 = 8;
  *(char **)(puVar7 + -0x14) = "name";
  *(undefined4 *)(puVar7 + -0x18) = 0x1008dfb6;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar7 + -0x14) = 0x1008dfc5;
  FUN_10084774();
  puVar7 = local_4c;
  local_24 = local_4c;
  *(undefined4 *)(local_4c + -4) = 0x1008dfd5;
  FUN_10001fee();
  local_24 = puVar7 + -0x10;
  local_50 = puVar7 + -0x10;
  puVar2 = puVar7 + -0x10;
  local_4c = puVar7;
  puVar3 = puVar7 + -0x10;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
    *(int **)(puVar7 + -0x14) = &DAT_1039cc24;
    *(undefined4 *)(puVar7 + -0x18) = 0x1008e21c;
    FUN_1022c0d0();
    puVar2 = local_50;
    puVar3 = local_24;
    if (DAT_1039cc24 == -1) {
      local_18 = 1;
      *(undefined4 *)(puVar7 + -0x14) = 0x1008e23e;
      FUN_10075be2();
      *(undefined1 **)(puVar7 + -0x14) = &LAB_10080db4;
      *(undefined4 *)(puVar7 + -0x18) = 0x1008e249;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      *(int **)(puVar7 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)(puVar7 + -0x18) = 0x1008e25e;
      FUN_1022c180();
      puVar2 = local_50;
      puVar3 = local_24;
    }
  }
  local_24 = puVar3;
  local_50 = puVar2;
  if (*(uint *)(local_48 + 0x6c) < 8) {
    iVar5 = local_48 + 0x58;
  }
  else {
    iVar5 = *(int *)(local_48 + 0x58);
  }
  local_18 = 0;
  *(int *)(puVar7 + -0x14) = iVar5 + *(int *)(local_48 + 0x68) * 2;
  *(int *)(puVar7 + -0x18) = iVar5;
  *(byte **)(puVar7 + -0x1c) = local_40;
  *(undefined4 *)(puVar7 + -0x20) = 0x1008e02d;
  FUN_1007671c();
  local_18 = 5;
  *(byte **)(puVar7 + -0x14) = local_40;
  *(undefined4 *)(puVar7 + -0x18) = 0x1008e041;
  FUN_1008be62();
  local_18 = 6;
  *(char **)(puVar7 + -0x14) = "description";
  *(undefined4 *)(puVar7 + -0x18) = 0x1008e057;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar7 + -0x14) = 0x1008e066;
  FUN_10084774();
  puVar7 = local_4c;
  local_24 = local_4c;
  *(undefined4 *)(local_4c + -4) = 0x1008e074;
  FUN_10001fee();
  local_50 = puVar7;
  local_24 = puVar7 + -0x10;
  local_18 = 0;
  *(undefined4 *)(puVar7 + -0x20) = _DAT_102944c0;
  *(undefined4 *)(puVar7 + -0x1c) = _UNK_102944c4;
  *(undefined4 *)(puVar7 + -0x18) = _UNK_102944c8;
  *(undefined4 *)(puVar7 + -0x14) = _UNK_102944cc;
  local_4c = puVar7 + -0x10;
  *(undefined4 *)(puVar7 + -0x24) = 0x1008e09b;
  FUN_1008c23a();
  local_18 = 9;
  *(char **)(puVar7 + -0x14) = "commands";
  *(undefined4 *)(puVar7 + -0x18) = 0x1008e0b1;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar7 + -0x14) = 0x1008e0c0;
  FUN_10084774();
  local_24 = local_50;
  local_44 = 0;
  puVar7 = local_50;
  do {
    if ((uint)(*(int *)(local_48 + 0x38) - *(int *)(local_48 + 0x34) >> 3) <= local_44) {
      ExceptionList = local_20;
      return param_1;
    }
    pcVar1 = *(code **)**(undefined4 **)(*(int *)(local_48 + 0x34) + local_44 * 8);
    local_18 = 0;
    *(byte **)(puVar7 + -4) = local_40;
    puVar8 = (undefined4 *)(puVar7 + -8);
    puVar7 = puVar7 + -8;
    *puVar8 = 0x1008e0f6;
    (*pcVar1)();
    local_18 = 3;
    piVar6 = (int *)(uint)local_40[0];
    if (piVar6 != (int *)0x0) {
      if (piVar6 == (int *)0x1) {
        piVar6 = local_38;
        if (*local_38 != local_38[1]) goto code_r0x1008e12e;
      }
      else if ((piVar6 != (int *)0x2) || (piVar6 = local_38, *local_38 != local_38[1])) {
code_r0x1008e12e:
        *(int **)(puVar7 + -4) = piVar6;
        *(uint **)(puVar7 + -0x14) = &local_44;
        *(undefined4 *)(puVar7 + -0x18) = 0x1008e145;
        local_50 = puVar7;
        local_4c = puVar7 + -0x10;
        local_24 = puVar7 + -0x10;
        FUN_1008e5ac();
        local_18 = 4;
        *(char **)(puVar7 + -0x14) = "index";
        *(undefined4 *)(puVar7 + -0x18) = 0x1008e159;
        FUN_1008bf00();
        local_18 = 0xffffffff;
        *(undefined4 *)(puVar7 + -0x14) = 0x1008e168;
        FUN_10084774();
        puVar7 = local_50;
        local_24 = local_50;
        local_18 = 3;
        *(char **)(local_50 + -4) = "commands";
        *(undefined4 *)(puVar7 + -8) = 0x1008e181;
        FUN_1008bf00();
        *(byte **)(puVar7 + -4) = local_40;
        *(undefined4 *)(puVar7 + -8) = 0x1008e18c;
        FUN_1008e644();
      }
    }
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar7 + -4) = 0x1008e19c;
    FUN_1007f222();
    local_44 = local_44 + 1;
  } while( true );
}

