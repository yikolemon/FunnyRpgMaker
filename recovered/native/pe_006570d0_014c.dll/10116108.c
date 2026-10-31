/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116108 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __fastcall FUN_10116108(undefined8 *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  float10 fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  iVar2 = *(int *)(DAT_1039d74c + 0x2048);
  iVar6 = FUN_10116f08();
  if (iVar6 == 1) {
    local_4c = (undefined8 *)(iVar4 + 0xe4);
    cVar5 = FUN_10103c30();
    puVar7 = (undefined8 *)(iVar4 + 0x2468);
    if (cVar5 != '\0') {
      puVar7 = (undefined8 *)(iVar4 + 0xe4);
    }
    uVar10 = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) + _UNK_102b8e04,
                      (float)*puVar7 + _DAT_102b8e00);
    goto LAB_101162e4;
  }
  if ((((*(int *)(iVar4 + 0x1528) == 0) || (*(char *)(iVar4 + 0x153a) != '\x01')) ||
      ((param_2 >> 0x1a & 1) == 0)) || (*(int *)(iVar4 + 0x1528) != *(int *)(iVar4 + 0x1e80))) {
    if (iVar2 != 0) {
      pfVar1 = (float *)(iVar2 + 0x3cc + *(int *)(iVar4 + 0x2050) * 0x10);
      fStack_34 = (float)*(undefined8 *)(iVar2 + 0x154);
      local_3c = *pfVar1 + fStack_34;
      fStack_30 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x154) >> 0x20);
      fStack_38 = pfVar1[1] + fStack_30;
      fStack_34 = pfVar1[2] + fStack_34;
      fStack_30 = pfVar1[3] + fStack_30;
      goto LAB_101161b8;
    }
    local_3c = 0.0;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
LAB_1011621c:
    bVar3 = true;
  }
  else {
    local_3c = *(float *)(iVar4 + 0x1e9c);
    fStack_38 = *(float *)(iVar4 + 0x1ea0);
    fStack_34 = *(float *)(iVar4 + 0x1ea4);
    fStack_30 = *(float *)(iVar4 + 0x1ea8);
    if (iVar2 == 0) goto LAB_1011621c;
LAB_101161b8:
    if (*(int *)(iVar2 + 0x2b4) != *(int *)(iVar4 + 4)) {
      if (*(float *)(iVar2 + 0xd4) == DAT_102b89b4) {
        if ((*(float *)(iVar2 + 0xd8) == DAT_102b89b4) &&
           (!NAN(*(float *)(iVar2 + 0xd8)) && !NAN(DAT_102b89b4))) goto LAB_10116215;
      }
      FUN_1010fae1();
      fVar9 = (float)*(undefined8 *)(iVar2 + 0xc4) - (float)local_1c;
      fVar12 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xc4) >> 0x20) -
               (float)((ulonglong)local_1c >> 0x20);
      local_3c = local_3c + fVar9;
      fStack_38 = fStack_38 + fVar12;
      fStack_34 = fStack_34 + fVar9;
      fStack_30 = fStack_30 + fVar12;
    }
LAB_10116215:
    bVar3 = false;
  }
  local_48 = fStack_30 - fStack_38;
  local_4c = *(undefined8 **)(iVar4 + 0xd10);
  local_2c = fStack_30;
  fStack_28 = fStack_30;
  fStack_24 = fStack_30;
  fStack_20 = fStack_30;
  fVar8 = (float10)FUN_100ea38a();
  local_40 = (float)fVar8;
  local_2c = local_2c - local_40;
  local_48 = fStack_34 - local_3c;
  local_4c = (undefined8 *)(*(float *)(iVar4 + 0xd0c) * DAT_102b8cb0);
  fVar8 = (float10)FUN_100ea38a();
  local_44 = (float)fVar8;
  auVar11._0_4_ = local_44 + local_3c;
  auVar11._4_8_ = 0;
  auVar11._12_4_ = fStack_28;
  auVar14._8_8_ = auVar11._8_8_;
  auVar14._0_8_ = CONCAT44(local_2c,auVar11._0_4_);
  if ((!bVar3) && (iVar2 = *(int *)(iVar2 + 0x3c), iVar2 != 0)) {
    fVar9 = (float)*(undefined8 *)(iVar2 + 8);
    fVar12 = (float)((ulonglong)*(undefined8 *)(iVar2 + 8) >> 0x20);
    auVar13._0_4_ = (float)*(undefined8 *)(iVar2 + 0x10) + fVar9;
    auVar13._4_4_ = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x10) >> 0x20) + fVar12;
    auVar13._8_8_ = 0;
    auVar14 = minps(auVar13,auVar14);
    auVar14._0_8_ =
         CONCAT44(~-(uint)(local_2c < fVar12) & auVar14._4_4_,
                  ~-(uint)(auVar11._0_4_ < fVar9) & auVar14._0_4_) |
         CONCAT44((uint)fVar12 & -(uint)(local_2c < fVar12),
                  (uint)fVar9 & -(uint)(auVar11._0_4_ < fVar9));
  }
  uVar10 = CONCAT44((float)(int)(float)(auVar14._0_8_ >> 0x20),(float)(int)(float)auVar14._0_8_);
LAB_101162e4:
  *param_1 = uVar10;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

