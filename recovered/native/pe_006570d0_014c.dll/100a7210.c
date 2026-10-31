/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a7210 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a7210(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  uint local_3c;
  byte local_38 [8];
  int *local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 *puVar7;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_48;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c4320;
  local_20 = ExceptionList;
  uStack_4c = 0;
  uStack_50 = 0x100a7253;
  ExceptionList = &local_20;
  uStack_4c = FUN_10080804();
  local_44 = (undefined1 *)&local_48;
  local_18 = 0;
  local_24 = auStack_58;
  local_48 = auStack_58;
  FUN_1008e5ac(local_40);
  local_18 = 4;
  FUN_1008bf00(&DAT_1033a3fb);
  local_18 = 0xffffffff;
  uVar4 = FUN_10084774();
  puVar6 = local_44;
  *(undefined4 *)(local_44 + -4) = uVar4;
  uVar3 = _UNK_102944cc;
  uVar2 = _UNK_102944c8;
  uVar4 = _UNK_102944c4;
  local_24 = puVar6 + -0x10;
  local_48 = puVar6 + -0x10;
  local_18 = 0;
  *(undefined4 *)(puVar6 + -0x20) = _DAT_102944c0;
  *(undefined4 *)(puVar6 + -0x1c) = uVar4;
  *(undefined4 *)(puVar6 + -0x18) = uVar2;
  *(undefined4 *)(puVar6 + -0x14) = uVar3;
  *(undefined4 *)(puVar6 + -0x24) = 0x100a72bc;
  FUN_1008c23a();
  local_18 = 3;
  *(char **)(puVar6 + -0x14) = "list";
  *(undefined4 *)(puVar6 + -0x18) = 0x100a72d2;
  FUN_1008bf00();
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar6 + -0x14) = 0x100a72e1;
  FUN_10084774();
  local_24 = local_44;
  local_3c = 0;
  puVar6 = local_44;
  do {
    if ((uint)(*(int *)(local_40 + 0x50) - *(int *)(local_40 + 0x4c) >> 3) <= local_3c) {
      ExceptionList = local_20;
      return param_1;
    }
    pcVar1 = *(code **)**(undefined4 **)(*(int *)(local_40 + 0x4c) + local_3c * 8);
    local_18 = 0;
    *(byte **)(puVar6 + -4) = local_38;
    puVar7 = (undefined4 *)(puVar6 + -8);
    puVar6 = puVar6 + -8;
    *puVar7 = 0x100a7318;
    (*pcVar1)();
    local_18 = 1;
    piVar5 = (int *)(uint)local_38[0];
    if (piVar5 != (int *)0x0) {
      if (piVar5 == (int *)0x1) {
        piVar5 = local_30;
        if (*local_30 != local_30[1]) goto code_r0x100a7350;
      }
      else if ((piVar5 != (int *)0x2) || (piVar5 = local_30, *local_30 != local_30[1])) {
code_r0x100a7350:
        *(int **)(puVar6 + -4) = piVar5;
        *(uint **)(puVar6 + -0x14) = &local_3c;
        *(undefined4 *)(puVar6 + -0x18) = 0x100a7367;
        local_48 = puVar6 + -0x10;
        local_44 = puVar6;
        local_24 = puVar6 + -0x10;
        FUN_1008e5ac();
        local_18 = 2;
        *(char **)(puVar6 + -0x14) = "index";
        *(undefined4 *)(puVar6 + -0x18) = 0x100a737b;
        FUN_1008bf00();
        local_18 = 0xffffffff;
        *(undefined4 *)(puVar6 + -0x14) = 0x100a738a;
        FUN_10084774();
        puVar6 = local_44;
        local_24 = local_44;
        local_18 = 1;
        *(char **)(local_44 + -4) = "list";
        *(undefined4 *)(puVar6 + -8) = 0x100a73a4;
        FUN_1008bf00();
        *(byte **)(puVar6 + -4) = local_38;
        *(undefined4 *)(puVar6 + -8) = 0x100a73af;
        FUN_1008e644();
      }
    }
    local_18 = 0xffffffff;
    *(undefined4 *)(puVar6 + -4) = 0x100a73bf;
    FUN_1007f222();
    local_3c = local_3c + 1;
  } while( true );
}

