/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10189cf2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10189cf2(int param_1,float *param_2,float param_3,float param_4,float param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  int local_78;
  int local_74;
  undefined1 auVar11 [16];
  
  if (DAT_102b70e0 <= param_3) {
    if (param_6 < 1) {
      if (param_3 <= *(float *)(*(int *)(param_1 + 0x2c) + 0x1d8)) {
        fVar13 = (param_4 * DAT_102b71d0) / DAT_102b956c;
        fVar14 = (DAT_102b71d0 * param_5) / DAT_102b956c;
        if (param_4 <= param_5) {
          fVar7 = (float10)FUN_1026d3b0((double)fVar13);
          iVar1 = (int)(float)(int)((int)fVar14 -
                                   (uint)(fVar14 < 0.0 && (float)(int)fVar14 != fVar14));
          iVar3 = (int)fVar7;
          local_78 = iVar1;
          local_74 = iVar3;
        }
        else {
          fVar7 = (float10)FUN_1026d3b0((double)fVar14);
          iVar3 = (int)fVar7;
          iVar1 = (int)(float)(int)((int)fVar13 -
                                   (uint)((float)(int)fVar13 != fVar13 && fVar13 < 0.0));
          local_78 = iVar3;
          local_74 = iVar1;
        }
        iVar1 = FUN_100fbc6a(iVar1 - iVar3,0);
        auVar10._0_4_ = (float)local_78 * _DAT_10301390 + (float)local_78 * _DAT_10301390;
        auVar10._4_4_ = (float)local_74 * _UNK_10301394 + (float)local_74 * _UNK_10301394;
        auVar10._8_4_ = _UNK_10301398 * 0.0 + _UNK_10301398 * 0.0;
        auVar10._12_4_ = _UNK_1030139c * 0.0 + _UNK_1030139c * 0.0;
        auVar10 = divps(auVar10,_DAT_102bb430);
        iVar3 = -(uint)(_DAT_103013a0 <= (float)((uint)(param_5 + auVar10._0_4_) & _DAT_1028b410));
        iVar9 = -(uint)(_UNK_103013a4 <= (float)((uint)(param_4 + auVar10._4_4_) & _UNK_1028b414));
        auVar12._4_4_ = iVar9;
        auVar12._0_4_ = iVar3;
        auVar12._8_4_ = iVar9;
        auVar12._12_4_ = iVar9;
        auVar11._8_8_ = auVar12._8_8_;
        auVar11._4_4_ = iVar3;
        auVar11._0_4_ = iVar3;
        uVar4 = movmskpd(extraout_ECX,auVar11);
        uVar5 = uVar4 >> 1 & 0x7f;
        iVar3 = uVar5 + (uVar4 & 1) + *(int *)(param_1 + 0x38) + iVar1 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar3) {
          uVar2 = FUN_100fa1fa(iVar3 * 8);
          if (*(int *)(param_1 + 0x40) != 0) {
            FUN_1025b2d0(uVar2,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
            FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
          }
          *(undefined4 *)(param_1 + 0x40) = uVar2;
          *(int *)(param_1 + 0x3c) = iVar3;
        }
        if ((char)uVar5 != '\0') {
          fVar13 = param_2[1];
          fVar7 = (float10)FUN_102704b0((double)param_4);
          fVar14 = *param_2;
          fVar8 = (float10)FUN_1026d4b0((double)param_4);
          iVar3 = *(int *)(param_1 + 0x38);
          if (iVar3 == *(int *)(param_1 + 0x3c)) {
            if (iVar3 == 0) {
              iVar9 = 8;
            }
            else {
              iVar9 = iVar3 / 2 + iVar3;
            }
            iVar6 = iVar3 + 1;
            if (iVar3 + 1 < iVar9) {
              iVar6 = iVar9;
            }
            iVar9 = FUN_100fa1fa(iVar6 * 8);
            if (*(int *)(param_1 + 0x40) != 0) {
              FUN_1025b2d0(iVar9,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
              FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
            }
            *(int *)(param_1 + 0x40) = iVar9;
            *(int *)(param_1 + 0x3c) = iVar6;
            iVar3 = *(int *)(param_1 + 0x38);
          }
          else {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          *(ulonglong *)(iVar9 + iVar3 * 8) =
               CONCAT44(param_3 * (float)fVar7 + fVar13,param_3 * (float)fVar8 + fVar14);
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        }
        if (0 < iVar1) {
          FUN_101896ac(param_2,param_3,local_74,local_78,0);
        }
        if ((uVar4 & 1) == 0) {
          return;
        }
        fVar13 = param_2[1];
        fVar7 = (float10)FUN_102704b0((double)param_5);
        fVar14 = *param_2;
        fVar8 = (float10)FUN_1026d4b0((double)param_5);
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == *(int *)(param_1 + 0x3c)) {
          if (iVar1 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar1 / 2 + iVar1;
          }
          iVar9 = iVar1 + 1;
          if (iVar1 + 1 < iVar3) {
            iVar9 = iVar3;
          }
          iVar3 = FUN_100fa1fa(iVar9 * 8);
          if (*(int *)(param_1 + 0x40) != 0) {
            FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
            FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
          }
          *(int *)(param_1 + 0x40) = iVar3;
          *(int *)(param_1 + 0x3c) = iVar9;
          iVar1 = *(int *)(param_1 + 0x38);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x40);
        }
        *(ulonglong *)(iVar3 + iVar1 * 8) =
             CONCAT44(param_3 * (float)fVar7 + fVar13,param_3 * (float)fVar8 + fVar14);
        goto LAB_10189e68;
      }
      fVar13 = (float)((uint)(param_5 - param_4) & _DAT_1028b410);
      iVar1 = FUN_101880ee(param_3);
      fVar7 = (float10)FUN_1026d3b0((double)(((float)iVar1 * fVar13) / DAT_102b956c));
      param_6 = FUN_100fbc6a((int)fVar7,1);
    }
    FUN_101899bc(param_2,param_3,param_4,param_5,param_6);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_1 + 0x3c)) {
      if (iVar1 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar1 / 2 + iVar1;
      }
      iVar9 = iVar1 + 1;
      if (iVar1 + 1 < iVar3) {
        iVar9 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar9 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar3;
      *(int *)(param_1 + 0x3c) = iVar9;
      iVar1 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x40);
    }
    *(undefined8 *)(iVar3 + iVar1 * 8) = *(undefined8 *)param_2;
LAB_10189e68:
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

