/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100986e6 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100986e6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 *local_6c;
  undefined1 *local_68;
  int local_64;
  undefined4 local_60 [6];
  undefined4 ***local_48 [4];
  int local_38;
  uint local_34;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3b80;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) &&
     (*(int *)(param_1 + 4) == *(int *)(param_1 + 8))) {
    uStack_74 = 0;
    uStack_78 = 0x10098ab6;
    FUN_10080804();
    ExceptionList = local_20;
  }
  else {
    uStack_74 = 0;
    uStack_78 = 0x10098741;
    local_64 = param_1;
    local_28 = &stack0xfffffffc;
    local_24 = auStack_70;
    uStack_74 = FUN_10080804();
    local_6c = (undefined4 *)auStack_70;
    local_18 = 0;
    local_24 = auStack_80;
    local_68 = auStack_80;
    local_60[0] = *(undefined4 *)(local_64 + 0x10);
    FUN_10099a16(local_60);
    local_18 = 9;
    FUN_1008bf00("code");
    local_18 = 0xffffffff;
    uVar1 = FUN_10084774();
    puVar4 = local_6c;
    local_68 = (undefined1 *)local_6c;
    *(undefined4 *)((int)local_6c + -4) = uVar1;
    local_24 = (undefined1 *)((int)local_6c + -0x10);
    local_18 = 0;
    piVar3 = (int *)((int)local_6c + -0x14);
    local_6c = (undefined4 *)((int)local_6c + -0x10);
    *piVar3 = (int)local_48;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x100987af;
    FUN_10099ab4();
    local_18 = 5;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
      *(undefined4 *)((int)puVar4 + -0x18) = 0x10098ace;
      FUN_1022c0d0();
      if (DAT_1039cc24 == -1) {
        local_18 = 6;
        *(undefined4 *)((int)puVar4 + -0x14) = 0x10098af0;
        FUN_10075be2();
        *(undefined1 **)((int)puVar4 + -0x14) = &LAB_10080db4;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x10098afb;
        FUN_1022c3a0();
        local_18 = 0xffffffff;
        *(int **)((int)puVar4 + -0x14) = &DAT_1039cc24;
        *(undefined4 *)((int)puVar4 + -0x18) = 0x10098b10;
        FUN_1022c180();
      }
    }
    ppppuVar5 = local_48;
    if (7 < local_34) {
      ppppuVar5 = (undefined4 ****)local_48[0];
    }
    local_18 = 5;
    *(int *)((int)puVar4 + -0x14) = (int)ppppuVar5 + local_38 * 2;
    *(undefined4 *****)((int)puVar4 + -0x18) = ppppuVar5;
    *(undefined4 **)((int)puVar4 + -0x1c) = local_60;
    *(undefined4 *)((int)puVar4 + -0x20) = 0x10098803;
    FUN_1007671c();
    local_18 = 7;
    *(undefined4 **)((int)puVar4 + -0x14) = local_60;
    *(undefined4 *)((int)puVar4 + -0x18) = 0x10098818;
    FUN_1008be62();
    local_18 = 8;
    *(char **)((int)puVar4 + -0x14) = "codeStr";
    *(undefined4 *)((int)puVar4 + -0x18) = 0x1009882e;
    FUN_1008bf00();
    local_18 = 0xffffffff;
    *(undefined4 *)((int)puVar4 + -0x14) = 0x1009883d;
    FUN_10084774();
    puVar4 = (undefined4 *)local_68;
    local_24 = local_68;
    *(undefined4 *)(local_68 + -4) = 0x1009884b;
    FUN_10001fee();
    *(undefined4 *)((int)puVar4 + -4) = 0x10098853;
    FUN_10001134();
    if (*(int *)(local_64 + 0x14) != *(int *)(local_64 + 0x18)) {
      local_6c = puVar4;
      local_24 = (undefined1 *)((int)puVar4 + -0x10);
      local_18 = 0;
      *(undefined4 *)((int)puVar4 + -0x20) = _DAT_102944c0;
      *(undefined4 *)((int)puVar4 + -0x1c) = _UNK_102944c4;
      *(undefined4 *)((int)puVar4 + -0x18) = _UNK_102944c8;
      *(undefined4 *)((int)puVar4 + -0x14) = _UNK_102944cc;
      local_68 = (undefined1 *)((int)puVar4 + -0x10);
      *(undefined4 *)((int)puVar4 + -0x24) = 0x1009888b;
      FUN_1008c23a();
      local_18 = 0xb;
      *(char **)((int)puVar4 + -0x14) = "stringArgs";
      *(undefined4 *)((int)puVar4 + -0x18) = 0x100988a1;
      FUN_1008bf00();
      local_18 = 0xffffffff;
      *(undefined4 *)((int)puVar4 + -0x14) = 0x100988b0;
      FUN_10084774();
      puVar4 = local_6c;
      local_24 = (undefined1 *)local_6c;
      local_2c = *(undefined4 **)(local_64 + 0x18);
      for (local_6c = *(undefined4 **)(local_64 + 0x14); local_6c != local_2c;
          local_6c = local_6c + 6) {
        local_18 = 0;
        *(char **)((int)puVar4 + -4) = "stringArgs";
        *(undefined4 *)((int)puVar4 + -8) = 0x100988e3;
        local_68 = (undefined1 *)FUN_1008bf00();
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
            DAT_1039cc24) {
          *(int **)((int)puVar4 + -4) = &DAT_1039cc24;
          *(undefined4 *)((int)puVar4 + -8) = 0x10098987;
          FUN_1022c0d0();
          if (DAT_1039cc24 == -1) {
            local_18 = 1;
            *(undefined4 *)((int)puVar4 + -4) = 0x100989a9;
            FUN_10075be2();
            *(undefined1 **)((int)puVar4 + -4) = &LAB_10080db4;
            *(undefined4 *)((int)puVar4 + -8) = 0x100989b4;
            FUN_1022c3a0();
            local_18 = 0xffffffff;
            *(int **)((int)puVar4 + -4) = &DAT_1039cc24;
            *(undefined4 *)((int)puVar4 + -8) = 0x100989c9;
            FUN_1022c180();
          }
        }
        puVar2 = local_6c;
        if (7 < (uint)local_6c[5]) {
          puVar2 = (undefined4 *)*local_6c;
        }
        local_18 = 0;
        *(int *)((int)puVar4 + -4) = (int)puVar2 + local_6c[4] * 2;
        *(undefined4 **)((int)puVar4 + -8) = puVar2;
        *(undefined4 **)((int)puVar4 + -0xc) = local_60;
        *(undefined4 *)((int)puVar4 + -0x10) = 0x10098930;
        FUN_1007671c();
        local_18 = 3;
        *(undefined4 **)((int)puVar4 + -4) = local_60;
        *(undefined4 *)((int)puVar4 + -8) = 0x10098944;
        FUN_1008be62();
        local_18 = 4;
        *(undefined4 *****)((int)puVar4 + -4) = local_48;
        *(undefined4 *)((int)puVar4 + -8) = 0x10098959;
        FUN_1008bf84();
        local_18 = 0xffffffff;
        *(undefined4 *)((int)puVar4 + -4) = 0x10098969;
        FUN_1007f222();
        *(undefined4 *)((int)puVar4 + -4) = 0x10098971;
        FUN_10001fee();
      }
    }
    if (*(int *)(local_64 + 4) != *(int *)(local_64 + 8)) {
      *(int *)((int)puVar4 + -4) = *(int *)(local_64 + 4);
      local_18 = 0;
      *(undefined4 *)((int)puVar4 + -0x20) = _DAT_102944c0;
      *(undefined4 *)((int)puVar4 + -0x1c) = _UNK_102944c4;
      *(undefined4 *)((int)puVar4 + -0x18) = _UNK_102944c8;
      *(undefined4 *)((int)puVar4 + -0x14) = _UNK_102944cc;
      *(undefined4 *)((int)puVar4 + -0x24) = 0x10098a0b;
      local_6c = puVar4;
      local_68 = (undefined1 *)((int)puVar4 + -0x10);
      local_24 = (undefined1 *)((int)puVar4 + -0x10);
      FUN_1008c23a();
      local_18 = 10;
      *(char **)((int)puVar4 + -0x14) = "intArgs";
      *(undefined4 *)((int)puVar4 + -0x18) = 0x10098a21;
      FUN_1008bf00();
      local_18 = 0xffffffff;
      *(undefined4 *)((int)puVar4 + -0x14) = 0x10098a30;
      FUN_10084774();
      puVar4 = local_6c;
      local_24 = (undefined1 *)local_6c;
      local_68 = *(undefined1 **)(local_64 + 8);
      for (local_6c = *(undefined4 **)(local_64 + 4); local_6c != (undefined4 *)local_68;
          local_6c = (undefined4 *)((int)local_6c + 4)) {
        local_18 = 0;
        *(char **)((int)puVar4 + -4) = "intArgs";
        *(undefined4 *)((int)puVar4 + -8) = 0x10098a5f;
        FUN_1008bf00();
        *(undefined4 **)((int)puVar4 + -4) = local_6c;
        *(undefined4 *)((int)puVar4 + -8) = 0x10098a6c;
        FUN_1008e5ac();
        local_18 = 2;
        *(undefined4 **)((int)puVar4 + -4) = local_60;
        *(undefined4 *)((int)puVar4 + -8) = 0x10098a7e;
        FUN_1008bf84();
        local_18 = 0xffffffff;
        *(undefined4 *)((int)puVar4 + -4) = 0x10098a8e;
        FUN_1007f222();
      }
    }
    ExceptionList = local_20;
  }
  return param_2;
}

