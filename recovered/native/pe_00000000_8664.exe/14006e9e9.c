/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e9e9 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14006e9e9(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  float fVar7;
  float local_178 [2];
  undefined1 local_170 [16];
  undefined1 local_160 [40];
  float local_138 [2];
  undefined1 local_130 [16];
  undefined1 local_120 [40];
  float local_f8 [2];
  undefined1 local_f0 [16];
  undefined1 local_e0 [40];
  longlong local_b8 [4];
  undefined4 local_98;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined4 uStack_74;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar4 = FUN_1400799b5();
  local_68 = param_1;
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_14006f16c(local_178);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_1401a1f10(fVar7 / local_178[0]);
    FUN_140070812(local_178,
                  (longlong)(fVar7 - _DAT_1401c8620) & (longlong)fVar7 >> 0x3f | (longlong)fVar7);
    FUN_14006f3a8(local_138);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_1401a1f10(fVar7 / local_138[0]);
    FUN_140070de4(local_138,
                  (longlong)(fVar7 - _DAT_1401c8620) & (longlong)fVar7 >> 0x3f | (longlong)fVar7);
    for (local_78 = 0; local_78 < *(int *)(lVar4 + 0x15a8); local_78 = local_78 + 1) {
      local_b8[0] = *(longlong *)(*(longlong *)(lVar4 + 0x15b0) + (longlong)local_78 * 8);
      if (local_b8[0] != 0) {
        FUN_140071256(local_178,local_f8,local_b8);
        FUN_14006f3fc(local_138,local_f8,local_b8,&local_78);
      }
    }
    FUN_14006f3a8(local_f8);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_1401a1f10(fVar7 / local_f8[0]);
    FUN_140070de4(local_f8,(longlong)(fVar7 - _DAT_1401c8620) & (longlong)fVar7 >> 0x3f |
                           (longlong)fVar7);
    *local_68 = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_14006f57e(local_68,(longlong)*(int *)(lVar4 + 0x15a8));
    for (uVar6 = 0; (int)uVar6 < *(int *)(lVar4 + 0x15a8); uVar6 = uVar6 + 1) {
      local_88 = *(longlong *)(*(longlong *)(lVar4 + 0x15b0) + (ulonglong)uVar6 * 8);
      if (local_88 != 0) {
        local_80 = FUN_14006f5f9(local_88,local_178);
        local_b8[0] = (local_68[1] - *local_68 >> 3) * -0x3333333333333333;
        FUN_14006f7dc(local_f8,&local_78,&local_80,local_b8);
        if (local_70 == '\x01') {
          local_b8[2] = 0;
          local_b8[3] = 0;
          local_b8[1] = 0;
          local_98 = 0xffffffff;
          local_b8[0] = local_80;
          FUN_140071a46(local_68,local_b8);
          FUN_1400022f6(local_b8 + 1);
        }
        lVar1 = *local_68 + *(longlong *)(CONCAT44(uStack_74,local_78) + 0x18) * 0x28;
        plVar3 = *(longlong **)(lVar1 + 0x10);
        if (plVar3 == *(longlong **)(lVar1 + 0x18)) {
          FUN_14000d3b4(lVar1 + 8,plVar3,&local_88);
        }
        else {
          *plVar3 = local_88;
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 8;
        }
      }
    }
    lVar1 = local_68[1];
    for (lVar4 = *local_68; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
      FUN_14006f95e(lVar4 + 8,local_138);
      puVar5 = (undefined4 *)FUN_1400705e6(local_138,lVar4);
      *(undefined4 *)(lVar4 + 0x20) = *puVar5;
    }
    FUN_14007374a(*local_68,local_68[1],(local_68[1] - *local_68 >> 3) * -0x3333333333333333);
    FUN_1400022f6(local_e0);
    FUN_140070d9c(local_f0);
    FUN_1400022f6(local_120);
    FUN_140070d9c(local_130);
    FUN_1400022f6(local_160);
    FUN_1400707ca(local_170);
  }
  return local_68;
}

