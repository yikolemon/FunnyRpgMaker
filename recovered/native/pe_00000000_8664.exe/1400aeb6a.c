/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aeb6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400aeb6a(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined7 uVar11;
  undefined7 extraout_var;
  undefined8 uVar10;
  int iVar12;
  undefined *puVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  byte *local_110;
  undefined4 local_104;
  uint local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_ec;
  float local_e8;
  byte local_e4;
  byte local_e3;
  byte local_e2;
  byte local_e1;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  ulonglong local_c0;
  
  lVar2 = DAT_140f2a910;
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  local_110 = param_2;
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar6 = FUN_140080066(lVar1,param_1,0);
    uVar8 = FUN_14007b050(param_1,0);
    local_128 = 0xbf800000;
    FUN_14007b686(&local_d0,param_1,uVar8,0);
    fVar16 = (float)FUN_14009376e();
    uVar10 = *(undefined8 *)(lVar1 + 0x158);
    fVar15 = (float)uVar10;
    fVar7 = (float)((ulonglong)uVar10 >> 0x20);
    fVar18 = 0.0;
    if (0.0 < local_d0) {
      fVar18 = local_d0 + *(float *)(lVar2 + 0xe0c);
    }
    local_d4 = *(float *)(lVar2 + 0xdf8) + *(float *)(lVar2 + 0xdf8) + local_cc + fVar7;
    local_d8 = fVar18 + fVar16 + fVar15;
    local_c8 = CONCAT44(local_d4 - fVar7,local_d8 - fVar15);
    local_e0 = fVar15;
    local_dc = fVar7;
    FUN_14008a82c();
    bVar5 = FUN_14008a9ce(&local_e0,uVar6,0,0);
    if (bVar5 != 0) {
      bVar14 = *local_110;
      local_e1 = bVar14;
      if ((*(uint *)(lVar2 + 0x1fe4) >> 0x16 & 1) == 0) {
        local_128 = 0;
        local_e4 = FUN_1400ac79b(&local_e0,uVar6,&local_e2,&local_e3);
        bVar14 = bVar14 ^ local_e4;
      }
      else {
LAB_1400aeda0:
        FUN_1400af0f8(uVar6,&local_e1,0);
        local_128 = 0;
        local_e4 = FUN_1400ac79b(&local_e0,uVar6,&local_e2,&local_e3);
        FUN_1400af201(uVar6,&local_e1);
        bVar14 = local_e1;
      }
      if (*local_110 != bVar14) {
        *local_110 = bVar14;
        local_e4 = 1;
        FUN_1400807a3(uVar6);
      }
      fVar18 = fVar16 + fVar15;
      local_100 = *(uint *)(lVar2 + 0x1fe4);
      pbVar9 = (byte *)(ulonglong)local_100;
      if (bVar5 != 0) {
        local_f8 = uVar8;
        FUN_14007bdca(&local_e0,uVar6,0);
        uVar4 = local_100;
        uVar6 = DAT_1401c86c8;
        iVar12 = 7;
        if ((bVar14 & 1) != 0) {
          iVar12 = 0x13;
        }
        if ((local_100 & 0x1000) != 0) {
          iVar12 = 0x13;
        }
        if (local_e2 != 0) {
          iVar12 = 9 - (uint)((local_e3 & local_e2) == 0);
        }
        local_fc = FUN_14007a557(iVar12,DAT_1401c86c8);
        local_104 = FUN_14007a557(0x12,uVar6);
        local_128 = *(undefined4 *)(lVar2 + 0xdfc);
        FUN_14007ba95(uVar10,CONCAT44(fVar16 + fVar7,fVar18),local_fc,1);
        uVar8 = local_f8;
        uVar3 = local_104;
        uVar6 = DAT_1401c86c8;
        if ((uVar4 & 0x1000) == 0) {
          pbVar9 = local_110;
          if (*local_110 == 1) {
            fVar17 = (float)FUN_14007b71f(DAT_1401c86c8,(float)(int)(fVar16 / DAT_14020fff0));
            pbVar9 = (byte *)FUN_1400e6f37(*(undefined8 *)(lVar1 + 800),
                                           CONCAT44(fVar17 + fVar7,fVar15 + fVar17),uVar3,
                                           fVar16 - (fVar17 + fVar17));
          }
        }
        else {
          fVar19 = fVar16 / _DAT_140211db0;
          fVar17 = (float)FUN_14007b71f(DAT_1401c86c8,(float)(int)fVar19);
          local_ec = (float)FUN_14007b71f(uVar6,(float)(int)fVar19);
          local_128 = *(undefined4 *)(lVar2 + 0xdfc);
          local_c8 = CONCAT44((fVar16 + fVar7) - fVar17,fVar18 - local_ec);
          local_e8 = fVar17 + fVar7;
          local_ec = fVar15 + local_ec;
          local_120 = 0;
          pbVar9 = (byte *)FUN_1400de294(*(undefined8 *)(lVar1 + 800),&local_ec,&local_c8,local_104)
          ;
          uVar8 = local_f8;
        }
      }
      local_c8 = CONCAT44(*(float *)(lVar2 + 0xdf8) + fVar7,*(float *)(lVar2 + 0xe0c) + fVar18);
      if (*(char *)(lVar2 + 0x2a40) == '\x01') {
        if ((local_100 >> 0xc & 1) == 0) {
          puVar13 = &DAT_140ecc3aa;
          if (*local_110 != 0) {
            puVar13 = &DAT_140ecc353;
          }
        }
        else {
          puVar13 = &DAT_140ecc34f;
        }
        pbVar9 = (byte *)FUN_14007b17a(&local_c8,puVar13,0);
      }
      uVar11 = (undefined7)((ulonglong)pbVar9 >> 8);
      if ((bVar5 & 0.0 < local_d0) == 1) {
        FUN_14007b084(local_c8,param_1,uVar8,0);
        uVar11 = extraout_var;
      }
      uVar10 = CONCAT71(uVar11,local_e4);
      goto LAB_1400af07f;
    }
    if (((((*(uint *)(lVar2 + 0x1fe4) >> 0x16 & 1) != 0) && (*(char *)(lVar2 + 0x25e0) == '\x01'))
        && (local_dc < *(float *)(lVar2 + 0x25f0))) &&
       (((*(float *)(lVar2 + 0x25e8) <= local_d4 && local_d4 != *(float *)(lVar2 + 0x25e8) &&
         (local_e0 < *(float *)(lVar2 + 0x25ec))) &&
        (*(float *)(lVar2 + 0x25e4) <= local_d8 && local_d8 != *(float *)(lVar2 + 0x25e4))))) {
      local_e1 = *local_110;
      goto LAB_1400aeda0;
    }
  }
  uVar10 = 0;
LAB_1400af07f:
  if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_148)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_c0 ^ (ulonglong)auStack_148);
}

