/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c272c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402c272c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_2f8 [48];
  undefined1 local_2c8 [48];
  undefined1 local_298 [48];
  undefined1 local_268 [48];
  undefined1 local_238 [48];
  undefined1 local_208 [48];
  undefined8 **local_1d8;
  longlong local_1d0 [5];
  undefined8 **local_1a8;
  longlong local_1a0 [5];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 **local_168;
  undefined1 local_160 [40];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 **local_120;
  undefined1 local_118 [8];
  longlong local_110;
  ulonglong local_108;
  undefined8 **local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined8 **local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 **local_a0;
  longlong local_98;
  undefined8 **local_90 [2];
  longlong local_80;
  ulonglong local_78;
  undefined8 **local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_138 = _DAT_1404c87f0;
  uStack_130 = _UNK_1404c87f8;
  local_178 = _DAT_1404c8800;
  uStack_174 = _UNK_1404c8804;
  uStack_170 = _UNK_1404c8808;
  uStack_16c = _UNK_1404c880c;
  puVar8 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
  }
  local_50 = param_2;
  if ((ulonglong)param_1[2] < 6) {
LAB_1402c281a:
    FUN_1402141fc(local_90,param_1);
    bVar1 = false;
  }
  else {
    lVar7 = thunk_FUN_14044cfd0(puVar8,"connection reset",4);
    if ((lVar7 != 4) || (0x19 < (*(uint *)(puVar8 + 1) & 0xffffffdf) - 0x3a0041))
    goto LAB_1402c281a;
    puVar8 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar8 = (undefined8 *)*param_3;
    }
    if ((ulonglong)param_3[2] < 6) goto LAB_1402c281a;
    lVar7 = thunk_FUN_14044cfd0(puVar8,"connection reset",4);
    if ((lVar7 != 4) || (0x19 < (*(uint *)(puVar8 + 1) & 0xffffffdf) - 0x3a0041))
    goto LAB_1402c281a;
    FUN_1402c4102(param_1,local_90);
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1402c4102(param_3,local_70);
  }
  else {
    FUN_1402141fc(local_70,param_3);
  }
  FUN_140214244(local_50);
  FUN_1402c4be4(local_70,&local_120);
  FUN_1402c4be4(local_90,&local_168);
  local_1d8 = &local_120;
  if (7 < local_108) {
    local_1d8 = local_120;
  }
  local_1d0[0] = local_110;
  iVar6 = FUN_14027e61a(&local_168);
  cVar5 = '\x01';
  if (iVar6 == 0) {
    cVar3 = FUN_14021580e(local_90);
    cVar4 = FUN_14021580e(local_70);
    if (cVar3 == cVar4) {
      local_1a8 = local_90;
      if (7 < local_78) {
        local_1a8 = local_90[0];
      }
      local_1a0[0] = local_80;
      FUN_1402c556f(&local_1d8);
      if (local_1d0[0] == 0) {
        local_1a8 = local_70;
        if (7 < local_58) {
          local_1a8 = local_70[0];
        }
        local_1a0[0] = local_60;
        FUN_1402c556f(&local_1d8);
        if (local_1d0[0] != 0) goto LAB_1402c2990;
      }
      cVar3 = FUN_1402c4c5d(local_90);
      if (cVar3 == '\0') {
        cVar5 = FUN_1402c4c5d(local_70);
      }
    }
  }
LAB_1402c2990:
  FUN_14021331c(&local_168);
  FUN_14021331c(&local_120);
  if (cVar5 == '\0') {
    local_120 = local_90;
    if (7 < local_78) {
      local_120 = local_90[0];
    }
    local_120 = (undefined8 **)((longlong)local_120 + local_80 * 2);
    FUN_1402c4b76(&local_168,&local_120,local_90);
    FUN_1402c417e(local_70,&local_1d8);
    local_120 = local_70;
    if (7 < local_58) {
      local_120 = local_70[0];
    }
    local_120 = (undefined8 **)((longlong)local_120 + local_60 * 2);
    FUN_1402c4b76(&local_1a8,&local_120,local_70);
    FUN_1402c5064(local_2f8,&local_1a8);
    FUN_1402c5064(local_2c8,&local_1d8);
    FUN_1402c5064(local_298,&local_168);
    FUN_1402c417e(local_90,local_268);
    FUN_1402c4da9(&local_120,local_268,local_298,local_2c8,local_2f8);
    if ((local_120 == local_168) && (local_f0 == local_1a8)) {
      FUN_1402c50d0(local_50,&local_138);
    }
    else {
      FUN_1402c5064(local_238);
      FUN_1402c5064(local_208,&local_1d8);
      lVar7 = FUN_1402c5130(local_208,local_238);
      local_a0 = local_70;
      if (7 < local_58) {
        local_a0 = local_70[0];
      }
      local_98 = local_60;
      FUN_1402c541d(&local_c0);
      lVar2 = local_b8;
      local_a0 = local_70;
      if (7 < local_58) {
        local_a0 = local_70[0];
      }
      local_98 = local_60;
      FUN_1402c556f(&local_c0);
      for (; lVar7 < (longlong)(((ulonglong)(local_b8 != 0) + 1) - (ulonglong)(lVar2 == 0));
          lVar7 = lVar7 + 1) {
        FUN_1402c43c4(&local_f0);
      }
      lVar7 = 0;
      while (local_f0 != local_1a8) {
        if (local_d8 != 0) {
          FUN_140213408(&local_c0,&local_138,0);
          local_a0 = &local_c0;
          if (7 < local_a8) {
            local_a0 = local_c0;
          }
          local_98 = local_b0;
          iVar6 = FUN_14027e61a(local_e8,&local_a0);
          FUN_14021331c(&local_c0);
          if (iVar6 != 0) {
            FUN_140213408(&local_c0,&local_178,0);
            local_a0 = &local_c0;
            if (7 < local_a8) {
              local_a0 = local_c0;
            }
            local_98 = local_b0;
            iVar6 = FUN_14027e61a(local_e8,&local_a0);
            FUN_14021331c(&local_c0);
            if (iVar6 == 0) {
              lVar7 = lVar7 + -1;
            }
            else {
              lVar7 = lVar7 + 1;
            }
          }
        }
        FUN_1402c43c4(&local_f0);
      }
      if (-1 < lVar7) {
        if ((lVar7 == 0) && ((local_120 == local_168 || (local_108 == 0)))) {
          FUN_1402c50d0(local_50,&local_138);
        }
        else {
          for (; 0 < lVar7; lVar7 = lVar7 + -1) {
            FUN_14027d554(local_50,&local_178);
          }
          while (local_120 != local_168) {
            FUN_140215304(local_50,local_118);
            FUN_1402c43c4(&local_120);
          }
        }
      }
    }
    FUN_14021331c(local_e8);
    FUN_14021331c(local_118);
    FUN_14021331c(local_1a0);
    FUN_14021331c(local_1d0);
    FUN_14021331c(local_160);
  }
  FUN_14021331c(local_70);
  FUN_14021331c(local_90);
  return local_50;
}

