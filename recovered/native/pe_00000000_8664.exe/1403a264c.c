/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a264c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a264c(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 unaff_R12D;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float unaff_XMM10_Db;
  undefined1 auVar12 [16];
  
  if (DAT_1404ecffc <= param_3) {
    if (0 < param_6) {
      FUN_1403a2324(param_1,param_2,param_3,param_4);
      return;
    }
    if (*(float *)(*(longlong *)(param_1 + 0x38) + 0x1f0) < param_3) {
      fVar14 = (float)((uint)(param_5 - param_4) & _DAT_1404bda20);
      iVar1 = FUN_1403a09da(param_1,param_3);
      fVar14 = (float)FUN_1404951a0(((float)iVar1 * fVar14) / DAT_1404efb24);
      uVar2 = FUN_1403118b9((int)fVar14,1);
      FUN_1403a2324(param_1,param_2,param_3,param_4,param_5,uVar2);
      return;
    }
    fVar14 = (param_4 * DAT_1404ed8e0) / DAT_1404efb24;
    fVar15 = (DAT_1404ed8e0 * param_5) / DAT_1404efb24;
    if (param_4 <= param_5) {
      uVar10 = FUN_1404951a0();
      unaff_XMM10_Db = (float)((ulonglong)uVar10 >> 0x20);
      iVar4 = (int)(float)(int)((int)fVar15 - (uint)((float)(int)fVar15 != fVar15 && fVar15 < 0.0));
      iVar16 = (int)(float)uVar10;
      iVar17 = 0;
      iVar1 = iVar4 - iVar16;
    }
    else {
      uVar10 = FUN_1404951a0();
      iVar4 = (int)(float)uVar10;
      iVar16 = (int)(float)(int)((int)fVar14 - (uint)((float)(int)fVar14 != fVar14 && fVar14 < 0.0))
      ;
      iVar17 = (int)(float)((ulonglong)uVar10 >> 0x20);
      iVar1 = iVar16 - iVar4;
    }
    iVar1 = FUN_1403118b9(iVar1,0);
    auVar11._0_4_ =
         (float)iVar4 * (float)s_0123456789__140538800._0_4_ +
         (float)iVar4 * (float)s_0123456789__140538800._0_4_;
    auVar11._4_4_ =
         (float)iVar16 * (float)s_0123456789__140538800._4_4_ +
         (float)iVar16 * (float)s_0123456789__140538800._4_4_;
    auVar11._8_4_ =
         (float)iVar17 * (float)s_0123456789__140538800._8_4_ +
         (float)iVar17 * (float)s_0123456789__140538800._8_4_;
    auVar11._12_4_ =
         (float)(int)unaff_XMM10_Db * _UNK_14053880c + (float)(int)unaff_XMM10_Db * _UNK_14053880c;
    auVar11 = divps(auVar11,_DAT_1404f2760);
    iVar17 = -(uint)((float)s_0123456789__140538810._0_4_ <=
                    (float)((uint)(param_5 + auVar11._0_4_) & _DAT_1404bda20));
    iVar7 = -(uint)((float)s_0123456789__140538810._4_4_ <=
                   (float)((uint)(param_4 + auVar11._4_4_) & _UNK_1404bda24));
    auVar13._4_4_ = iVar7;
    auVar13._0_4_ = iVar17;
    auVar13._8_4_ = iVar7;
    auVar13._12_4_ = iVar7;
    auVar12._8_8_ = auVar13._8_8_;
    auVar12._4_4_ = iVar17;
    auVar12._0_4_ = iVar17;
    uVar5 = movmskpd(unaff_R12D,auVar12);
    iVar17 = (uint)(byte)((byte)uVar5 >> 1) + (uVar5 & 1) + *(int *)(param_1 + 0x50) + iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar17) {
      uVar10 = FUN_14030fcc8((longlong)iVar17 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(uVar10,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = uVar10;
      *(int *)(param_1 + 0x54) = iVar17;
    }
    if ((byte)((byte)uVar5 >> 1) != 0) {
      fVar14 = param_2[1];
      fVar8 = (float)FUN_14049bd00();
      fVar15 = *param_2;
      fVar9 = (float)FUN_140495a60();
      iVar17 = *(int *)(param_1 + 0x50);
      if (iVar17 == *(int *)(param_1 + 0x54)) {
        if (iVar17 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar17 / 2 + iVar17;
        }
        iVar6 = iVar17 + 1;
        if (iVar17 + 1 < iVar7) {
          iVar6 = iVar7;
        }
        lVar3 = FUN_14030fcc8((longlong)iVar6 << 3);
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3)
          ;
          FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
        }
        *(longlong *)(param_1 + 0x58) = lVar3;
        *(int *)(param_1 + 0x54) = iVar6;
        iVar17 = *(int *)(param_1 + 0x50);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x58);
      }
      *(ulonglong *)(lVar3 + (longlong)iVar17 * 8) =
           CONCAT44(param_3 * fVar8 + fVar14,param_3 * fVar9 + fVar15);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    }
    if (0 < iVar1) {
      FUN_1403a2014(param_1,param_2,param_3,iVar16,iVar4,0);
    }
    if ((uVar5 & 1) == 0) {
      return;
    }
    fVar14 = param_2[1];
    fVar8 = (float)FUN_14049bd00();
    fVar15 = *param_2;
    fVar9 = (float)FUN_140495a60();
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == *(int *)(param_1 + 0x54)) {
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar1 / 2 + iVar1;
      }
      iVar16 = iVar1 + 1;
      if (iVar1 + 1 < iVar4) {
        iVar16 = iVar4;
      }
      lVar3 = FUN_14030fcc8((longlong)iVar16 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(int *)(param_1 + 0x54) = iVar16;
      iVar1 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar3 + (longlong)iVar1 * 8) =
         CONCAT44(param_3 * fVar8 + fVar14,param_3 * fVar9 + fVar15);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == *(int *)(param_1 + 0x54)) {
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar1 / 2 + iVar1;
      }
      iVar16 = iVar1 + 1;
      if (iVar1 + 1 < iVar4) {
        iVar16 = iVar4;
      }
      lVar3 = FUN_14030fcc8((longlong)iVar16 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(int *)(param_1 + 0x54) = iVar16;
      iVar1 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *(undefined8 *)param_2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}

