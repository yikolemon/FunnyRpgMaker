/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010572e */

void FUN_14010572e(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
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
  
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0.0;
  local_c8 = 0;
  cVar5 = FUN_14010cbe8("split",3,0);
  if (cVar5 != '\0') {
    fVar19 = 0.0;
    lVar9 = 0;
    FUN_140112128(&DAT_140edcdbf,8,0,0);
    FUN_140112128(&DAT_140edcdbf,0x10,0,0);
    FUN_140112128(&DAT_140edcdbf,8,0,0);
    FUN_14011264b(0,0);
    fVar4 = DAT_140211518;
    uVar3 = DAT_140211280;
    fVar2 = DAT_1401c86d4;
    local_b0 = param_1 + 0x20;
    lVar14 = 0xffffffff;
    uVar16 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    local_a8 = param_1;
    do {
      uVar13 = (uint)lVar14;
      lVar11 = lVar9 * 0x10;
      bVar6 = (byte)uVar16;
      FUN_140112930((~bVar6 & 1) * '\x02');
      pcVar8 = "Basket";
      if (bVar6 != 0) {
        pcVar8 = "Available";
      }
      FUN_1400abfd5("%s (%d)",pcVar8,*(undefined4 *)(param_1 + lVar11));
      fVar17 = (float)FUN_140093756();
      local_98 = (ulonglong)(uint)((float)*(int *)(param_1 + lVar11) * fVar17) << 0x20;
      FUN_14008fe0a(&local_98);
      if (bVar6 == 0) {
        local_98._0_4_ = 0x80800000;
        local_98._4_4_ = fVar19;
        cVar5 = FUN_14008a029(&DAT_140ecea34,&local_98,0x80,0);
        if (cVar5 == '\0') {
          FUN_14008a651();
          break;
        }
LAB_14010593a:
        piVar12 = (int *)(lVar11 + param_1);
        puVar15 = (undefined4 *)(lVar9 * 0x30 + local_b0);
        local_b4 = (uint)uVar16;
        uVar7 = FUN_1400c75df(0x40,*puVar15,*piVar12);
        *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(piVar12 + 2);
        *(undefined1 **)(puVar15 + 4) = &LAB_1401063e0;
        FUN_1400c8704(puVar15,uVar7);
        if (0 < *piVar12) {
          lVar11 = 0;
          do {
            uVar16 = (ulonglong)*(uint *)(*(longlong *)(piVar12 + 2) + lVar11 * 4);
            uVar18 = FUN_1400c85b6(puVar15,uVar16);
            FUN_1400c82a0(lVar11);
            local_98._0_4_ = 0;
            local_98._4_4_ = 0.0;
            FUN_1400b2126((&PTR_s_Artichoke_140e8cb00)[uVar16],uVar18,4);
            cVar5 = FUN_140080ad1();
            if (cVar5 != '\0') {
              cVar5 = FUN_140091e97(0x20d,1);
              if ((cVar5 != '\0') || (cVar5 = FUN_140091e97(0x273,1), cVar5 != '\0')) {
                lVar14 = lVar9;
              }
              cVar5 = FUN_1400920d0(0);
              if (cVar5 != '\0') {
                lVar14 = lVar9;
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < *piVar12);
        }
        uVar7 = FUN_1400c7e5d();
        *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(piVar12 + 2);
        *(undefined1 **)(puVar15 + 4) = &LAB_1401063e0;
        FUN_1400c8704(puVar15,uVar7);
        uVar16 = (ulonglong)local_b4;
        param_1 = local_a8;
      }
      else {
        local_98 = uVar3;
        local_9c = (float)FUN_14009378a();
        local_9c = local_9c * fVar4;
        local_a0 = 0;
        FUN_14008fdd9(&local_a0,&local_98,0);
        local_98._4_4_ = (float)FUN_14008ff20();
        local_98._4_4_ = local_98._4_4_ * fVar2;
        local_98._0_4_ = 0x80800000;
        cVar5 = FUN_14008a029(&DAT_140ecec9d,&local_98,0x88,0);
        FUN_14008fcfc(&local_98);
        fVar19 = local_98._4_4_;
        if (cVar5 != '\0') goto LAB_14010593a;
      }
      uVar13 = (uint)lVar14;
      FUN_14008a651();
      lVar9 = 1;
      uVar1 = uVar16 & 1;
      uVar16 = 0;
    } while (uVar1 != 0);
    FUN_140112930(1);
    FUN_1400b080a();
    uVar18 = FUN_14009376e();
    local_98._4_4_ = (float)FUN_14009376e();
    local_98._0_4_ = uVar18;
    bVar6 = FUN_1400ad187(">>",&local_98);
    cVar5 = FUN_1400ad187(&DAT_140ecd74d,&local_98);
    uVar10 = 0;
    if (cVar5 == '\0') {
      uVar10 = uVar13;
    }
    cVar5 = FUN_1400ad187(&DAT_140ecd754,&local_98);
    if (cVar5 != '\0') {
      uVar10 = 1;
    }
    cVar5 = FUN_1400ad187(&DAT_140ecd74f,&local_98);
    if (bVar6 != 0 || cVar5 != '\0') {
      uVar13 = bVar6 - 1;
      if (cVar5 != '\0') {
        uVar13 = 1;
      }
      FUN_1401060c6(param_1,uVar13,uVar13 ^ 1);
    }
    if (uVar10 != 0xffffffff) {
      FUN_140106240(param_1,uVar10,uVar10 ^ 1);
    }
    FUN_140110400();
  }
  if (DAT_140f17b40 != (local_90 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_90 ^ (ulonglong)auStack_e8);
  }
  return;
}

