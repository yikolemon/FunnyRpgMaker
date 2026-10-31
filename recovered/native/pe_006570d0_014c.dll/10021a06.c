/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021a06 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10021a06(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  int *local_5c;
  undefined1 local_48 [4];
  int *local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 *puVar8;
  
  uVar5 = _UNK_1028f5dc;
  uVar4 = _UNK_1028f5d8;
  uVar3 = _UNK_1028f5d4;
  local_20 = local_68;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059660;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[9] = _DAT_1028f5d0;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar5 = _UNK_1028f5ec;
  uVar4 = _UNK_1028f5e8;
  uVar3 = _UNK_1028f5e4;
  param_1[0x15] = _DAT_1028f5e0;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar5;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  local_3c = param_1 + 0x24;
  uStack_6c = 0x10021a8e;
  local_24 = param_1;
  FUN_10022116();
  local_14 = 0;
  local_38 = local_24 + 0x2c;
  uStack_6c = 0x10021aa3;
  FUN_1002218a();
  local_14 = 1;
  uStack_6c = 0x98;
  uStack_70 = 0x10021ab6;
  uStack_6c = FUN_10228350();
  local_14 = 10;
  local_20 = (undefined1 *)&local_84;
  local_2c = &local_84;
  local_30 = (undefined4 *)local_80;
  local_34 = (undefined4 *)local_68;
  local_28 = (undefined4 *)uStack_6c;
  FUN_10001f66("\r\n");
  *local_2c = 0;
  local_14 = 10;
  FUN_100221fe();
  puVar7 = local_34;
  local_20 = (undefined1 *)local_34;
  local_24[0x34] = local_28;
  local_24[0x35] = 2;
  local_24[0x36] = 6;
  local_30 = local_24 + 0x38;
  local_24[0x41] = 0;
  local_24[0x42] = 0;
  local_24[0x43] = 0;
  local_2c = local_24 + 0x44;
  local_24[0x44] = 0;
  local_28 = local_24 + 0x45;
  local_24[0x45] = 0;
  local_24[0x46] = 0;
  local_14 = 6;
  *(undefined1 *)(local_24 + 0x47) = 1;
  local_24[0x48] = 0;
  piVar6 = (int *)((int)local_34 + -4);
  local_34 = local_24 + 0x42;
  *piVar6 = (int)local_48;
  *(undefined4 *)((int)puVar7 + -8) = 0x10021be1;
  FUN_1002248c();
  local_14 = 7;
  local_40 = &DAT_10356101;
  *(undefined1 **)((int)puVar7 + -4) = local_48;
  *(undefined1 ***)((int)puVar7 + -8) = &local_40;
  *(undefined1 **)((int)puVar7 + -0xc) = local_60;
  *(undefined4 *)((int)puVar7 + -0x10) = 0x10021c03;
  FUN_1002256b();
  local_14 = 8;
  *(undefined1 **)((int)puVar7 + -4) = local_60;
  *(undefined4 *)((int)puVar7 + -8) = 0x10021c1b;
  FUN_1002265a();
  local_14 = 0xffffffff;
  if (local_5c != (int *)0x0) {
    LOCK();
    piVar1 = local_5c + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pcVar2 = *(code **)*local_5c;
      puVar8 = (undefined4 *)((int)puVar7 + -4);
      puVar7 = (undefined4 *)((int)puVar7 + -4);
      *puVar8 = 0x10021c38;
      (*pcVar2)();
      LOCK();
      piVar1 = local_5c + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pcVar2 = *(code **)(*local_5c + 4);
        puVar9 = (undefined4 *)((int)puVar7 + -4);
        puVar7 = (undefined4 *)((int)puVar7 + -4);
        *puVar9 = 0x10021c46;
        (*pcVar2)();
      }
    }
  }
  local_14 = 7;
  *(undefined1 **)((int)puVar7 + -4) = local_40;
  *(undefined4 *)((int)puVar7 + -8) = 0x10021c5a;
  FUN_10001f66();
  local_14 = 9;
  *(undefined1 **)((int)puVar7 + -4) = local_60;
  *(undefined1 **)((int)puVar7 + -8) = local_68;
  *(undefined4 *)((int)puVar7 + -0xc) = 0x10021c78;
  FUN_10043286();
  *(undefined4 **)((int)puVar7 + -4) = local_28;
  *(undefined4 *)((int)puVar7 + -8) = 0x10021c87;
  FUN_10022702();
  local_14 = 0xffffffff;
  *(undefined4 *)((int)puVar7 + -4) = 0x10021c96;
  FUN_10001fee();
  if (local_44 != (int *)0x0) {
    LOCK();
    piVar1 = local_44 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pcVar2 = *(code **)*local_44;
      puVar10 = (undefined1 *)((int)puVar7 + -4);
      *(undefined4 *)((int)puVar7 + -4) = 0x10021cac;
      (*pcVar2)();
      LOCK();
      piVar1 = local_44 + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pcVar2 = *(code **)(*local_44 + 4);
        *(undefined4 *)(puVar10 + -4) = 0x10021cba;
        (*pcVar2)();
      }
    }
  }
  ExceptionList = local_1c;
  return local_24;
}

