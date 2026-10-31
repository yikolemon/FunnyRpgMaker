/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bfa2a */

void FUN_1801bfa2a(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 unaff_R15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_180402640 ^ (ulonglong)auStack_e8;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0.0;
  local_c8 = 0;
  cVar5 = FUN_180164c18("split",3,0);
  if (cVar5 != '\0') {
    fVar19 = 0.0;
    lVar9 = 0;
    FUN_18016a158(&DAT_1803861e4,8,0,0);
    FUN_18016a158(&DAT_1803861e4,0x10,0,0);
    FUN_18016a158(&DAT_1803861e4,8,0,0);
    FUN_18016a67b(0,0);
    uVar4 = DAT_1802de500;
    fVar3 = DAT_1802dbb50;
    fVar2 = DAT_1802dbb4c;
    local_b0 = param_1 + 0x20;
    lVar14 = 0xffffffff;
    uVar16 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    local_a8 = param_1;
    do {
      uVar13 = (uint)lVar14;
      lVar11 = lVar9 * 0x10;
      bVar6 = (byte)uVar16;
      FUN_18016a960((~bVar6 & 1) * '\x02');
      pcVar8 = "Basket";
      if (bVar6 != 0) {
        pcVar8 = "Available";
      }
      FUN_1801330a5("%s (%d)",pcVar8,*(undefined4 *)(param_1 + lVar11));
      fVar17 = (float)FUN_18011a43e();
      local_98 = (ulonglong)(uint)((float)*(int *)(param_1 + lVar11) * fVar17) << 0x20;
      FUN_180116af2(&local_98);
      if (bVar6 == 0) {
        local_98._0_4_ = 0x80800000;
        local_98._4_4_ = fVar19;
        cVar5 = FUN_180110d11(&DAT_18036ea28,&local_98,0x80,0);
        if (cVar5 == '\0') {
          FUN_180111339();
          break;
        }
LAB_1801bfc36:
        piVar12 = (int *)(lVar11 + param_1);
        puVar15 = (undefined4 *)(lVar9 * 0x30 + local_b0);
        local_b4 = (uint)uVar16;
        uVar7 = FUN_18014e6af(0x40,*puVar15,*piVar12);
        *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(piVar12 + 2);
        *(undefined1 **)(puVar15 + 4) = &LAB_1801c06dc;
        FUN_18014f7d4(puVar15,uVar7);
        if (0 < *piVar12) {
          lVar11 = 0;
          do {
            uVar16 = (ulonglong)*(uint *)(*(longlong *)(piVar12 + 2) + lVar11 * 4);
            uVar18 = FUN_18014f686(puVar15,uVar16);
            FUN_18014f370(lVar11);
            local_98._0_4_ = 0;
            local_98._4_4_ = 0.0;
            FUN_1801391f6((&PTR_s_Artichoke_180328770)[uVar16],uVar18,4);
            cVar5 = FUN_1801077b9();
            if (cVar5 != '\0') {
              cVar5 = FUN_180118b7f(0x20d,1);
              if ((cVar5 != '\0') || (cVar5 = FUN_180118b7f(0x273,1), cVar5 != '\0')) {
                lVar14 = lVar9;
              }
              cVar5 = FUN_180118db8(0);
              if (cVar5 != '\0') {
                lVar14 = lVar9;
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *piVar12);
        }
        uVar7 = FUN_18014ef2d();
        *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(piVar12 + 2);
        *(undefined1 **)(puVar15 + 4) = &LAB_1801c06dc;
        FUN_18014f7d4(puVar15,uVar7);
        uVar16 = (ulonglong)local_b4;
        param_1 = local_a8;
      }
      else {
        local_98 = uVar4;
        local_9c = (float)FUN_18011a472();
        local_9c = local_9c * fVar3;
        local_a0 = 0;
        FUN_180116ac1(&local_a0,&local_98,0);
        local_98._4_4_ = (float)FUN_180116c08();
        local_98._4_4_ = local_98._4_4_ * fVar2;
        local_98._0_4_ = 0x80800000;
        cVar5 = FUN_180110d11(&DAT_18036ed6f,&local_98,0x88,0);
        FUN_1801169e4(&local_98);
        fVar19 = local_98._4_4_;
        if (cVar5 != '\0') goto LAB_1801bfc36;
      }
      uVar13 = (uint)lVar14;
      FUN_180111339();
      lVar9 = 1;
      uVar1 = uVar16 & 1;
      uVar16 = 0;
    } while (uVar1 != 0);
    FUN_18016a960(1);
    FUN_1801378da();
    uVar18 = FUN_18011a456();
    local_98._4_4_ = (float)FUN_18011a456();
    local_98._0_4_ = uVar18;
    bVar6 = FUN_180134257(">>",&local_98);
    cVar5 = FUN_180134257(&DAT_18036d117,&local_98);
    uVar10 = 0;
    if (cVar5 == '\0') {
      uVar10 = uVar13;
    }
    cVar5 = FUN_180134257(&DAT_18036d551,&local_98);
    if (cVar5 != '\0') {
      uVar10 = 1;
    }
    cVar5 = FUN_180134257(&DAT_18036d54c,&local_98);
    if (bVar6 != 0 || cVar5 != '\0') {
      uVar13 = bVar6 - 1;
      if (cVar5 != '\0') {
        uVar13 = 1;
      }
      FUN_1801c03c2(param_1,uVar13,uVar13 ^ 1);
    }
    if (uVar10 != 0xffffffff) {
      FUN_1801c053c(param_1,uVar10,uVar10 ^ 1);
    }
    FUN_180168430();
  }
  if (DAT_180402640 != (local_90 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_90 ^ (ulonglong)auStack_e8);
  }
  return;
}

