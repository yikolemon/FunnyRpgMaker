/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180188879 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180188879(longlong *param_1)

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
  lVar4 = FUN_1801006f9();
  local_68 = param_1;
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_18005bbb8(local_178);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_180283cd0(fVar7 / local_178[0]);
    FUN_18018a3cc(local_178,
                  (longlong)(fVar7 - _DAT_1802b0d70) & (longlong)fVar7 >> 0x3f | (longlong)fVar7);
    FUN_180060822(local_138);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_180283cd0(fVar7 / local_138[0]);
    FUN_18018a5fc(local_138,
                  (longlong)(fVar7 - _DAT_1802b0d70) & (longlong)fVar7 >> 0x3f | (longlong)fVar7);
    for (local_78 = 0; local_78 < *(int *)(lVar4 + 0x15a8); local_78 = local_78 + 1) {
      local_b8[0] = *(longlong *)(*(longlong *)(lVar4 + 0x15b0) + (longlong)local_78 * 8);
      if (local_b8[0] != 0) {
        FUN_18018aa20(local_178,local_f8,local_b8);
        FUN_180189164(local_138,local_f8,local_b8,&local_78);
      }
    }
    FUN_180060822(local_f8);
    iVar2 = *(int *)(lVar4 + 0x15a8);
    if ((longlong)iVar2 < 0) {
      fVar7 = (float)(ulonglong)(longlong)iVar2;
    }
    else {
      fVar7 = (float)iVar2;
    }
    fVar7 = (float)FUN_180283cd0(fVar7 / local_f8[0]);
    FUN_18018a5fc(local_f8,(longlong)(fVar7 - _DAT_1802b0d70) & (longlong)fVar7 >> 0x3f |
                           (longlong)fVar7);
    *local_68 = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_1801892e6(local_68,(longlong)*(int *)(lVar4 + 0x15a8));
    for (uVar6 = 0; (int)uVar6 < *(int *)(lVar4 + 0x15a8); uVar6 = uVar6 + 1) {
      local_88 = *(longlong *)(*(longlong *)(lVar4 + 0x15b0) + (ulonglong)uVar6 * 8);
      if (local_88 != 0) {
        local_80 = FUN_180189361(local_88,local_178);
        local_b8[0] = (local_68[1] - *local_68 >> 3) * -0x3333333333333333;
        FUN_180189544(local_f8,&local_78,&local_80,local_b8);
        if (local_70 == '\x01') {
          local_b8[2] = 0;
          local_b8[3] = 0;
          local_b8[1] = 0;
          local_98 = 0xffffffff;
          local_b8[0] = local_80;
          FUN_18018b030(local_68,local_b8);
          FUN_180004cea(local_b8 + 1);
        }
        lVar1 = *local_68 + *(longlong *)(CONCAT44(uStack_74,local_78) + 0x18) * 0x28;
        plVar3 = *(longlong **)(lVar1 + 0x10);
        if (plVar3 == *(longlong **)(lVar1 + 0x18)) {
          FUN_180052bde(lVar1 + 8,plVar3,&local_88);
        }
        else {
          *plVar3 = local_88;
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 8;
        }
      }
    }
    lVar1 = local_68[1];
    for (lVar4 = *local_68; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
      FUN_1801896c6(lVar4 + 8,local_138);
      puVar5 = (undefined4 *)FUN_18018a34e(local_138,lVar4);
      *(undefined4 *)(lVar4 + 0x20) = *puVar5;
    }
    FUN_18018c930(*local_68,local_68[1],(local_68[1] - *local_68 >> 3) * -0x3333333333333333);
    FUN_180004cea(local_e0);
    FUN_1800609dc(local_f0);
    FUN_180004cea(local_120);
    FUN_1800609dc(local_130);
    FUN_180004cea(local_160);
    FUN_18006a5ac(local_170);
  }
  return local_68;
}

