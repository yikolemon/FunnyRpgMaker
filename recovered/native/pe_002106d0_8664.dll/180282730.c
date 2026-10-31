/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180282730 */

void FUN_180282730(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  double dVar10;
  undefined1 in_XMM1 [16];
  
  dVar7 = in_XMM0._0_8_;
  dVar10 = in_XMM1._0_8_;
  uVar5 = in_XMM0._4_4_ >> 0x14 & 0x7ff;
  uVar2 = in_XMM1._4_4_ >> 0x14 & 0x7ff;
  iVar3 = uVar5 - uVar2;
  dVar4 = ABS(dVar10);
  dVar6 = ABS(dVar7);
  if (0x7ff0000000000000 < (ulonglong)dVar4) {
    FUN_18029c560();
    return;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar6) {
    FUN_18029c560();
    return;
  }
  if (dVar6 == 0.0) {
    if (-1 < (longlong)dVar10) {
      return;
    }
joined_r0x000180282a40:
    if ((longlong)dVar7 < 0) {
      FUN_18029c2e0(0x20);
    }
    else {
      FUN_18029c2e0(0x20);
    }
  }
  else {
    if (dVar4 == 0.0) {
      if (-1 < (longlong)dVar7) {
        FUN_18029c2e0(0x20);
        goto LAB_18028282f;
      }
    }
    else {
LAB_18028282f:
      dVar8 = dVar10;
      dVar9 = dVar7;
      if ((uVar2 < 0x3fd) && (uVar5 < 0x3fd)) {
        if (((ulonglong)dVar10 & 0x7ff0000000000000) == 0) {
          if ((longlong)dVar10 < 0) {
            dVar8 = (double)((ulonglong)dVar10 | 0x4010000000000000) + DAT_1803290d8;
          }
          else {
            dVar8 = (double)((ulonglong)dVar10 | 0x4010000000000000) + DAT_180351198;
          }
        }
        else {
          dVar8 = (double)((longlong)dVar10 + 0x4000000000000000);
        }
        if (((ulonglong)dVar7 & 0x7ff0000000000000) == 0) {
          if ((longlong)dVar7 < 0) {
            dVar9 = (double)((ulonglong)dVar7 | 0x4010000000000000) + DAT_1803290d8;
          }
          else {
            dVar9 = (double)((ulonglong)dVar7 | 0x4010000000000000) + DAT_180351198;
          }
        }
        else {
          dVar9 = (double)((longlong)dVar7 + 0x4000000000000000);
        }
        iVar3 = ((uint)((ulonglong)dVar9 >> 0x34) & 0x7ff) -
                ((uint)((ulonglong)dVar8 >> 0x34) & 0x7ff);
      }
      if (iVar3 < 0x39) {
        if ((iVar3 < -0x1c) && (-1 < (longlong)dVar10)) {
          if (iVar3 < -0x432) {
            FUN_18029c2e0(0x20);
            return;
          }
          if (-0x3ff < iVar3) {
            return;
          }
          dVar8 = (dVar9 * 1.2676506002282294e+30) / dVar8;
          dVar4 = ABS(dVar8);
          uVar1 = (ulonglong)dVar4 >> 0x34;
          uVar2 = (uint)((ulonglong)dVar4 >> 0x34);
          if (uVar2 < 0x65) {
            if ((int)(0x65 - uVar2) < 0x37) {
              uVar1 = ((ulonglong)dVar8 & 0x1fffffffffffff | 0x10000000000000) >>
                      (100U - (char)uVar1 & 0x3f);
              uVar1 = (uVar1 >> 1) + (ulonglong)((uint)uVar1 & 1);
            }
            else {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = uVar1 - 100 << 0x34;
          }
          if ((uVar1 & 0x7ff0000000000000) != 0) {
            return;
          }
          FUN_18029c2e0(0x20);
          return;
        }
        if ((-0x39 < iVar3) || (-1 < (longlong)dVar10)) {
          if (dVar6 != INFINITY) {
            return;
          }
          if (dVar4 != INFINITY) {
            return;
          }
          FUN_18029c2e0(0x20);
          return;
        }
        goto joined_r0x000180282a40;
      }
      if (-1 < (longlong)dVar7) {
        FUN_18029c2e0(0x20);
        return;
      }
    }
    FUN_18029c2e0(0x20);
  }
  return;
}

