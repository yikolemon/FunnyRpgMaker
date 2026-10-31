/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ac2cd */

void FUN_1400ac2cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined4 local_94;
  undefined1 local_90 [4];
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  lVar3 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    fVar6 = (float)FUN_1400936b2();
    FUN_140077ef6(&local_80,&local_88,param_2,param_3);
    local_d8._0_4_ = 0xbf800000;
    FUN_14007b686(local_90,local_80,local_88,0);
    uVar5 = FUN_14007b050(param_1,0);
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,0xbf800000);
    FUN_14007b686(&local_98,param_1,uVar5,0);
    uVar2 = *(undefined8 *)(lVar1 + 0x158);
    fVar9 = (float)uVar2;
    fVar10 = (float)((ulonglong)uVar2 >> 0x20);
    uStack_a0 = CONCAT44(*(float *)(lVar3 + 0xdf8) + *(float *)(lVar3 + 0xdf8) + local_8c + fVar10,
                         fVar6 + fVar9);
    local_a8 = uVar2;
    fVar7 = (float)FUN_14007b71f(local_8c,local_94);
    fVar8 = 0.0;
    if (0.0 < local_98) {
      fVar8 = local_98 + *(float *)(lVar3 + 0xe0c);
    }
    fVar6 = fVar6 + fVar8 + fVar9;
    fVar7 = *(float *)(lVar3 + 0xdf8) + *(float *)(lVar3 + 0xdf8) + fVar7 + fVar10;
    local_b8._8_4_ = fVar6;
    local_b8._0_8_ = uVar2;
    local_b8._12_4_ = fVar7;
    local_78 = CONCAT44(fVar7 - fVar10,fVar6 - fVar9);
    FUN_14008a82c(&local_78);
    cVar4 = FUN_14008a9ce(local_b8,0,0,0);
    if (cVar4 != '\0') {
      local_78 = 0;
      local_c0 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0xdf4) >> 0x20) + fVar10,
                          (float)*(undefined8 *)(lVar3 + 0xdf4) + fVar9);
      local_c8 = 0;
      local_d8 = local_90;
      local_d0 = &local_78;
      FUN_14007b731(&local_c0,&uStack_a0,local_80,local_88);
      if (0.0 < local_98) {
        FUN_14007b084(CONCAT44(local_a8._4_4_ + *(float *)(lVar3 + 0xdf8),
                               (float)uStack_a0 + *(float *)(lVar3 + 0xe0c)),param_1,uVar5,0);
      }
    }
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_f8);
}

