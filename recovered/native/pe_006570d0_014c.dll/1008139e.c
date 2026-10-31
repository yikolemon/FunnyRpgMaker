/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008139e */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_1008139e(undefined1 *param_1,char param_2,char *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_18c;
  undefined1 auStack_188 [24];
  undefined4 uStack_170;
  undefined ***pppuStack_16c;
  undefined4 uStack_168;
  char *pcStack_164;
  undefined1 *local_160;
  undefined ***local_15c;
  undefined1 auStack_158 [4];
  undefined1 *local_154;
  int *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined **local_140;
  undefined1 local_13c [12];
  undefined **local_130;
  char local_12c;
  char local_12b;
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined **local_f0;
  undefined1 local_ec [12];
  undefined **local_e0;
  undefined1 local_dc [12];
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [52];
  char local_74;
  char local_48;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_158;
  local_144 = auStack_158;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3160;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  local_154 = param_1;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_15c = (undefined ***)(param_1 + 0x30);
    local_160 = (undefined1 *)(uint)(byte)param_1[0x98];
    pcStack_164 = param_3;
    uStack_168 = 0x10081607;
    local_150 = (int *)local_15c;
    FUN_1004f09c();
    local_18 = 0xc;
    local_160 = (undefined1 *)0x1008161b;
    local_15c = &local_140;
    local_15c = (undefined ***)FUN_10084940();
    if (param_2 != '\0') {
      local_15c = (undefined ***)0x1008162e;
      local_15c = (undefined ***)FUN_10081e88();
      *(undefined ****)(local_154 + 0x28) = local_15c;
      if (local_15c != (undefined ***)0xf) {
        local_15c = (undefined ***)0x10338b52;
        local_160 = (undefined1 *)0x1008164b;
        FUN_10001f66();
        local_18 = 0xd;
        pcStack_164 = local_108;
        local_15c = (undefined ***)local_120;
        local_160 = (undefined1 *)0xf;
        uStack_168 = 0x10081668;
        FUN_100844f8();
        local_18 = 0xe;
        local_b0 = *(undefined4 *)(local_154 + 0x4c);
        pcStack_164 = (char *)&local_b8;
        local_b8 = *(undefined8 *)(local_154 + 0x44);
        pppuStack_16c = &local_f0;
        local_15c = (undefined ***)0x0;
        local_160 = local_108;
        uStack_168 = 0x65;
        uStack_170 = 0x100816a0;
        FUN_1004e9e2();
        local_18 = 0xf;
        local_15c = (undefined ***)local_d0;
        local_160 = (undefined1 *)0x100816bd;
        FUN_1004edf4();
        local_18 = 0x10;
        local_12c = '\x01';
        if (local_12b == '\x01') {
          local_15c = &local_f0;
          local_160 = (undefined1 *)0x10081854;
          FUN_1005407c();
          local_15c = (undefined ***)&DAT_1036086c;
                    /* WARNING: Subroutine does not return */
          pcStack_164 = &UNK_1008185f;
          local_160 = local_a8;
          FUN_102586e0();
        }
        local_18 = 0xffffffff;
        local_15c = (undefined ***)0x100816ed;
        FUN_10001fee();
        local_f0 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
        local_18 = 0xffffffff;
        local_15c = (undefined ***)local_dc;
        local_e0 = std::exception::vftable;
        local_160 = (undefined1 *)0x10081725;
        FUN_10259020();
        local_15c = (undefined ***)local_ec;
        local_f0 = std::exception::vftable;
        local_160 = (undefined1 *)0x10081738;
        FUN_10259020();
        local_15c = (undefined ***)0x10081743;
        FUN_10001fee();
        local_15c = (undefined ***)0x1008174b;
        local_15c = (undefined ***)FUN_10001fee();
      }
    }
    if (local_12c == '\x01') {
      local_24 = (undefined1 *)&uStack_168;
      local_150 = &uStack_168;
      local_18 = 0xc;
      pppuStack_16c = (undefined ***)0x9;
      uStack_170 = 0x10081776;
      local_154 = auStack_158;
      FUN_10080e50();
      local_18 = 0xffffffff;
      pppuStack_16c = (undefined ***)0x10081795;
      FUN_10084774();
      local_24 = local_154;
    }
    local_18 = 0xffffffff;
    local_15c = (undefined ***)0x100817b1;
    FUN_10050646();
    ExceptionList = local_20;
    return;
  }
  local_150 = &local_18c;
  local_24 = (undefined1 *)&local_18c;
  uVar1 = param_1[0x98];
  local_148 = auStack_188;
  local_15c = (undefined ***)param_1;
  local_28 = &stack0xfffffffc;
  FUN_1001860e(param_1);
  piVar2 = local_150;
  *local_150 = (int)param_3;
  *(undefined1 *)(piVar2 + 0xb) = uVar1;
  local_14c = param_1 + 0x30;
  piVar2[0xc] = (int)local_14c;
  local_18 = 0xffffffff;
  FUN_10082e24();
  puVar4 = local_144;
  local_24 = local_144;
  local_18 = 3;
  *(undefined1 **)(local_144 + -4) = local_a8;
  *(undefined4 *)(puVar4 + -8) = 0x10081465;
  iVar3 = FUN_1008300c();
  if (param_2 != '\0') {
    *(undefined4 *)(puVar4 + -4) = 0x10081478;
    iVar3 = FUN_10081e88();
    *(int *)(local_154 + 0x28) = iVar3;
    if (iVar3 != 0xf) {
      *(char **)(puVar4 + -4) = "value";
      *(undefined4 *)(puVar4 + -8) = 0x10081495;
      FUN_10001f66();
      local_18 = 4;
      *(undefined1 **)(puVar4 + -4) = local_120;
      *(undefined4 *)(puVar4 + -8) = 0xf;
      *(undefined1 **)(puVar4 + -0xc) = local_108;
      *(undefined4 *)(puVar4 + -0x10) = 0x100814b2;
      FUN_100844f8();
      local_18 = 5;
      local_b0 = *(undefined4 *)(local_154 + 0x4c);
      local_b8 = *(undefined8 *)(local_154 + 0x44);
      *(undefined4 *)(puVar4 + -4) = 0;
      *(undefined1 **)(puVar4 + -8) = local_108;
      *(undefined8 **)(puVar4 + -0xc) = &local_b8;
      *(undefined4 *)(puVar4 + -0x10) = 0x65;
      *(undefined ****)(puVar4 + -0x14) = &local_140;
      *(undefined4 *)(puVar4 + -0x18) = 0x100814ea;
      FUN_1004e9e2();
      local_18 = 6;
      *(undefined1 **)(puVar4 + -4) = local_d0;
      *(undefined4 *)(puVar4 + -8) = 0x10081507;
      FUN_1004edf4();
      local_18 = 7;
      local_74 = '\x01';
      if (local_48 == '\x01') {
        *(undefined ****)(puVar4 + -4) = &local_140;
        *(undefined4 *)(puVar4 + -8) = 0x10081835;
        FUN_1005407c();
        *(undefined **)(puVar4 + -4) = &DAT_1036086c;
        *(undefined ****)(puVar4 + -8) = &local_f0;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar4 + -0xc) = &UNK_10081840;
        FUN_102586e0();
      }
      local_18 = 0xffffffff;
      *(undefined4 *)(puVar4 + -4) = 0x1008153d;
      FUN_10001fee();
      local_140 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
      local_18 = 0xffffffff;
      local_130 = std::exception::vftable;
      *(char **)(puVar4 + -4) = &local_12c;
      *(undefined4 *)(puVar4 + -8) = 0x10081575;
      FUN_10259020();
      local_140 = std::exception::vftable;
      *(undefined1 **)(puVar4 + -4) = local_13c;
      *(undefined4 *)(puVar4 + -8) = 0x10081588;
      FUN_10259020();
      *(undefined4 *)(puVar4 + -4) = 0x10081593;
      FUN_10001fee();
      *(undefined4 *)(puVar4 + -4) = 0x1008159b;
      iVar3 = FUN_10001fee();
    }
  }
  if (local_74 == '\x01') {
    local_154 = puVar4;
    *(int *)(puVar4 + -4) = iVar3;
    local_24 = puVar4 + -0x10;
    local_150 = (int *)(puVar4 + -0x10);
    local_18 = 3;
    *(undefined4 *)(puVar4 + -0x14) = 9;
    *(undefined4 *)(puVar4 + -0x18) = 0x100815cd;
    FUN_10080e50();
    puVar5 = local_154;
  }
  else {
    if (*param_3 != '\t') goto code_r0x100817fb;
    *(char **)(puVar4 + -4) = param_3;
    local_24 = puVar4 + -0x10;
    local_154 = puVar4 + -0x10;
    *(undefined4 *)(puVar4 + -0x14) = 0;
    *(undefined4 *)(puVar4 + -0x18) = 0x100817d4;
    FUN_10080804();
    puVar5 = puVar4;
  }
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar4 + -0x14) = 0x100817f2;
  FUN_10084774();
  puVar4 = puVar5;
  local_24 = puVar5;
code_r0x100817fb:
  local_18 = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x10081810;
  FUN_100847fa();
  ExceptionList = local_20;
  return;
}

