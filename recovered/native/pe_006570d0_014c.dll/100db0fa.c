/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100db0fa */

void __fastcall FUN_100db0fa(undefined4 param_1,int param_2,char ****param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 auStack_140 [2];
  undefined1 local_13e;
  undefined1 local_13d;
  char *local_13c;
  int local_138;
  char *local_134;
  undefined4 ***local_130;
  undefined4 local_12c;
  undefined8 local_128;
  int local_11c;
  char *local_118;
  char *local_114;
  undefined4 ***local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  char *local_e8;
  undefined4 local_e4;
  undefined4 ***local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined4 local_d4;
  char ***local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  char ***local_c0;
  size_t local_bc;
  undefined1 local_b8 [8];
  int local_b0;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined4 local_84;
  char ***local_78;
  size_t local_74;
  undefined4 local_68;
  uint local_64;
  undefined1 local_30 [8];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_140;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddce0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  local_138 = param_2;
  FUN_100446d6();
  local_18 = 2;
  local_c0 = (char ***)param_3;
  local_bc = _strlen((char *)param_3);
  FUN_100d8f98(&local_c0);
  local_134 = local_128._4_4_;
  for (pcVar8 = (char *)local_128; pcVar8 != local_134; pcVar8 = pcVar8 + 0x10) {
    if (*pcVar8 == '\x01') {
      local_c8 = &DAT_1033a3fb;
      local_c4 = 2;
      local_18 = 7;
      local_13c = pcVar8;
      FUN_100dafc2(&local_c8);
      local_18 = 8;
      local_74 = 0;
      local_78 = (char ***)0x0;
      FUN_100d8b63(&local_118,&local_78);
      local_bc = local_74;
      local_c0 = local_78;
      local_d8 = "name";
      local_d4 = 4;
      FUN_100db8d0(&local_d8);
      local_18 = 9;
      local_d0 = (char ***)&local_78;
      if (0xf < local_64) {
        local_d0 = local_78;
      }
      local_cc = local_68;
      FUN_101575f2(local_b8,&local_d0);
      local_18 = 10;
      local_e8 = "description";
      local_e4 = 0xb;
      local_13d = 1;
      FUN_100db8d0(&local_e8);
      local_18 = 0xb;
      local_e0 = local_108;
      if (0xf < local_f4) {
        local_e0 = local_108[0];
      }
      local_dc = local_f8;
      local_13e = 1;
      FUN_101575f2(local_a0,&local_e0);
      local_84 = 0;
      local_88 = 0;
      local_18 = 0xc;
      uVar4 = FUN_100dba14(&DAT_1033a3fb);
      local_12c = 0;
      local_130 = (undefined4 ****)0x0;
      FUN_100d8b63(uVar4,&local_130);
      FUN_100dbc58(local_30,&local_130,&local_c0);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
      local_13e = 0;
      FUN_10001fee();
      local_13d = 0;
      FUN_10001fee();
      FUN_10013efc();
      pcVar8 = local_13c;
    }
  }
  local_18 = 0xffffffff;
  FUN_100171ce();
  puVar1 = *(undefined4 **)(local_138 + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
  }
  local_18 = 2;
  uVar4 = FUN_10013d2e(param_4);
  FUN_10013db4(uVar4);
  local_18 = 3;
  if ((char)local_108[0] == '\x01') {
    local_130 = local_108;
    FUN_100dba9a(&local_c0);
    local_18 = 4;
    FUN_100dbb2e(&local_78);
    local_18 = 5;
    while( true ) {
      cVar3 = FUN_10051c02(&local_78);
      if (cVar3 != '\0') break;
      local_13c = (char *)FUN_100dbbb3(&local_c0);
      local_134 = (char *)FUN_100dbbbc(&local_c0);
      pcVar8 = local_13c;
      if (0xf < *(uint *)(local_13c + 0x14)) {
        pcVar8 = *(char **)local_13c;
      }
      lVar9 = FUN_10270b06(pcVar8,0,0);
      local_128 = lVar9;
      uVar5 = FUN_100d7b05(&local_128);
      uVar5 = uVar5 & *(uint *)(local_138 + 0x18);
      local_11c = *(int *)(local_138 + 0xc);
      iVar7 = *(int *)(local_11c + 4 + uVar5 * 8);
      if (iVar7 != *(int *)(local_138 + 4)) {
        local_ec = *(uint *)(iVar7 + 0xc) ^ (uint)local_128._4_4_;
        local_13c = (char *)local_128;
        if (*(char **)(iVar7 + 8) != (char *)local_128 || local_ec != 0) {
          do {
            if (iVar7 == *(int *)(local_11c + uVar5 * 8)) goto code_r0x100db587;
            iVar7 = *(int *)(iVar7 + 4);
          } while (local_128 != *(longlong *)(iVar7 + 8));
        }
        local_114 = (char *)0x0;
        local_118 = (char *)0x0;
        local_18 = 5;
        FUN_100d8b63(local_134,&local_118);
        local_13c = local_118;
        local_134 = local_114;
        FUN_100d773c(&local_118,&local_128);
        *(char **)(local_118 + 0x4c) = local_134;
        *(char **)(local_118 + 0x48) = local_13c;
      }
code_r0x100db587:
      local_18 = 5;
      FUN_10051ba0();
      local_b0 = local_b0 + 1;
    }
    local_18 = 0xffffffff;
    FUN_100dbbc6();
    FUN_100dbbc6();
  }
  piVar6 = (int *)**(int **)(local_138 + 0x24);
  if (piVar6 != *(int **)(local_138 + 0x24)) {
    local_13c = (char *)(local_138 + 0x20);
    do {
      uVar4 = FUN_100d7b05(piVar6 + 2);
      FUN_100d78b0(&local_c0,piVar6 + 2,uVar4);
      if (local_bc == 0) {
        piVar6 = (int *)FUN_100dc46e(piVar6);
      }
      else {
        piVar6 = (int *)*piVar6;
      }
    } while (piVar6 != *(undefined4 **)(local_138 + 0x24));
  }
  *(undefined1 *)(local_138 + 0x4c) = 1;
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_1022c200(&DAT_10388dd4);
  ExceptionList = local_20;
  return;
}

