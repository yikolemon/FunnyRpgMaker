/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012eea2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1012eea2(float *param_1,undefined4 param_2,uint param_3,longlong *param_4,uint param_5,
                 int param_6,uint param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  char cVar10;
  float10 fVar11;
  float10 fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong lVar33;
  float local_160;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  byte local_3a;
  char local_39;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  uint local_18;
  
  iVar3 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    fVar27 = (float)*(undefined8 *)(param_1 + 2) - (float)*(undefined8 *)param_1;
    fVar28 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) -
             (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    iVar13 = -(uint)(fVar27 <= 0.0);
    iVar14 = -(uint)(fVar28 <= 0.0);
    auVar25._4_4_ = iVar14;
    auVar25._0_4_ = iVar13;
    auVar25._8_4_ = iVar14;
    auVar25._12_4_ = iVar14;
    auVar22._8_8_ = auVar25._8_8_;
    auVar22._4_4_ = iVar13;
    auVar22._0_4_ = iVar13;
    iVar13 = movmskpd(local_18,auVar22);
    if (iVar13 == 0) {
      fVar20 = DAT_1028b430;
      if ((param_3 == 1) && (fVar28 < fVar27)) {
        fVar11 = (float10)FUN_100fdbca(fVar27 + fVar27,0x3f800000);
        fVar15 = fVar28 / (float)fVar11;
        cVar10 = '\0';
        if (fVar15 < 0.0) goto LAB_1012eefa;
        fVar20 = DAT_1028b430;
        if (fVar15 <= DAT_1028b430) {
          fVar20 = fVar15;
        }
        if (fVar20 <= 0.0) goto LAB_1012eefa;
      }
      local_28._0_4_ = *param_1;
      local_28._4_4_ = param_1[1];
      fStack_20 = param_1[2];
      fStack_1c = param_1[3];
      fVar11 = (float10)FUN_100ea38a(fVar27,fVar28);
      fVar11 = (float10)FUN_100ea38a(*(undefined4 *)(iVar3 + 0xd4c),(float)fVar11 * DAT_102b70e0);
      fVar16 = (float)(int)fVar11;
      fVar28 = (float)local_28 + fVar16;
      fVar27 = local_28._4_4_ + fVar16;
      fVar23 = fStack_20 - fVar16;
      fVar16 = fStack_1c - fVar16;
      local_28 = CONCAT44(fVar27,fVar28);
      fVar29 = fVar16 - fVar27;
      fVar15 = fVar23 - fVar28;
      if (param_3 != 0) {
        fVar15 = fVar29;
      }
      cVar10 = '\0';
      fStack_20 = fVar23;
      fStack_1c = fVar16;
      if (DAT_1028b430 <= fVar15) {
        uVar31 = FUN_1012f7ec(param_7,param_8,param_5,param_6);
        lVar32 = FUN_1012f7ec(uVar31,1,0);
        local_38 = CONCAT44(fVar29,fVar23 - fVar28);
        fVar11 = (float10)FUN_100ea38a(*(undefined4 *)((int)&local_38 + param_3 * 4),
                                       *(undefined4 *)(iVar3 + 0xd50));
        fVar18 = (float)CONCAT44(param_6,param_5);
        fVar11 = (float10)FUN_10112cc4((fVar18 / (float)lVar32) * fVar15,(float)fVar11,fVar15);
        auVar21._0_4_ = (float)(int)fVar11;
        local_38 = *(undefined8 *)param_1;
        fStack_30 = param_1[2];
        fStack_2c = param_1[3];
        FUN_1012ec2c(iVar1,&local_38,*(undefined4 *)(iVar3 + 0xce0),param_3 ^ 1);
        local_39 = '\0';
        local_3a = 0;
        FUN_1010c9d8(param_1,param_2,0,2);
        FUN_1012d77e(&local_38,param_2,&local_3a,&local_39,0x40000);
        lVar32 = FUN_1012f7ec(1,0,param_7 - param_5,(param_8 - param_6) - (uint)(param_7 < param_5))
        ;
        cVar10 = local_39;
        fVar30 = DAT_1028b430;
        fVar19 = (float)lVar32;
        auVar21._4_4_ = (float)*param_4;
        auVar21._8_8_ = 0;
        auVar26._4_4_ = fVar19;
        auVar26._0_4_ = fVar15;
        auVar26._8_4_ = fVar29;
        auVar26._12_4_ = 0;
        auVar22 = divps(auVar21,auVar26);
        fVar17 = auVar22._0_4_;
        fVar24 = auVar22._4_4_;
        auVar2._4_4_ = -(uint)(fVar17 < DAT_1028b430);
        auVar2._0_4_ = -(uint)(fVar17 < DAT_1028b430);
        auVar2._8_4_ = -(uint)(fVar24 < 0.0);
        auVar2._12_4_ = -(uint)(fVar24 < 0.0);
        uVar6 = movmskpd(param_4,auVar2);
        fVar29 = 0.0;
        if (((uVar6 & 2) == 0) && (fVar29 = DAT_1028b430, fVar24 <= DAT_1028b430)) {
          fVar29 = fVar24;
        }
        local_160 = (fVar29 * (fVar15 - auVar21._0_4_)) / fVar15;
        if (((DAT_1028b430 <= fVar20) && (local_39 != '\0')) && ((uVar6 & 1) != 0)) {
          fVar24 = (*(float *)(iVar3 + 0xe4 + param_3 * 4) -
                   *(float *)((int)&local_28 + param_3 * 4)) / fVar15;
          fVar29 = DAT_1028b430;
          if (fVar24 <= DAT_1028b430) {
            fVar29 = fVar24;
          }
          fVar29 = (float)(~-(uint)(fVar24 < 0.0) & (uint)fVar29);
          uVar9 = (ushort)(fVar17 + local_160 < fVar29);
          if (fVar29 < local_160) {
            uVar9 = 0xffff;
          }
          if (*(char *)(iVar3 + 0x1534) == '\0') {
            uVar5 = *(ushort *)(iVar3 + 0x25ca);
          }
          else {
            uVar5 = 0;
            if ((*(char *)(iVar3 + 0x81) != '\0') && (*(char *)(iVar3 + 0x105) == '\0')) {
              uVar5 = uVar9;
            }
            *(ushort *)(iVar3 + 0x25ca) = uVar5;
            fVar24 = 0.0;
            if ((uVar9 == 0) && (*(char *)(iVar3 + 0x105) == '\0')) {
              fVar24 = DAT_102b8d58 * fVar17 + (fVar29 - local_160);
            }
            *(float *)(iVar3 + 0x25cc) = fVar24;
          }
          if (uVar5 == 0) {
            fVar18 = (fVar17 * DAT_102b8d58 + (fVar29 - *(float *)(iVar3 + 0x25cc))) /
                     (fVar30 - fVar17);
            fVar29 = fVar30;
            if (fVar18 <= fVar30) {
              fVar29 = fVar18;
            }
            lVar33 = (longlong)ROUND((float)(~-(uint)(fVar18 < 0.0) & (uint)fVar29) * fVar19);
            *param_4 = lVar33;
          }
          else {
            cVar4 = FUN_10103eee(0,1,0);
            fVar30 = DAT_1028b430;
            if (cVar4 == '\0') {
              lVar33 = *param_4;
            }
            else {
              lVar33 = *param_4;
              if (uVar9 == *(ushort *)(iVar3 + 0x25ca)) {
                if ((short)*(ushort *)(iVar3 + 0x25ca) < 1) {
                  fVar18 = (float)((uint)fVar18 ^ _DAT_1028f620);
                }
                lVar33 = FUN_1012f80d((longlong)ROUND(fVar18) + lVar33,0,0,lVar32);
                *param_4 = lVar33;
                fVar30 = DAT_1028b430;
              }
            }
          }
          fVar19 = (float)lVar33 / fVar19;
          if (fVar19 <= fVar30) {
            fVar30 = fVar19;
          }
          local_160 = ((fVar15 - auVar21._0_4_) * (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar30)) /
                      fVar15;
        }
        uVar7 = FUN_100fcb39(0xe,0x3f800000);
        iVar13 = 0x11;
        if (cVar10 == '\0') {
          iVar13 = local_3a + 0xf;
        }
        uVar8 = FUN_100fcb39(iVar13,fVar20);
        FUN_1018b85a(param_1,param_1 + 2,uVar7,*(undefined4 *)(iVar1 + 0x88),param_9);
        if (param_3 == 0) {
          fVar11 = (float10)FUN_100ea365(fVar28,fVar23,local_160);
          fVar20 = auVar21._0_4_ + (float)fVar11;
          fVar11 = (float10)FUN_100ea365(fVar28,fVar23,local_160);
          fVar28 = (float)fVar11;
        }
        else {
          fVar11 = (float10)FUN_100ea365(fVar27,fVar16,local_160);
          fVar12 = (float10)FUN_100ea365(fVar27,fVar16,local_160);
          fVar27 = (float)fVar12;
          fVar20 = fVar23;
          fVar16 = auVar21._0_4_ + (float)fVar11;
        }
        local_4c = fVar28;
        local_48 = fVar27;
        local_44 = fVar20;
        local_40 = fVar16;
        FUN_1018b85a(&local_4c,&local_44,uVar8,*(undefined4 *)(iVar3 + 0xd48),0);
      }
      goto LAB_1012eefa;
    }
  }
  cVar10 = '\0';
LAB_1012eefa:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return cVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

