/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002984f */

ulonglong * FUN_1002984f(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  longlong lVar18;
  ulonglong uVar19;
  char local_54;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30;
  undefined1 local_28 [8];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar7 = param_3 & 0xfffff;
  uVar10 = param_3 >> 0x14 & 0x7ff;
  if (uVar10 == 0) {
    iVar11 = -0x432;
    if (param_2 == 0 && uVar7 == 0) {
      *(uint *)((int)param_1 + 4) = 0;
      *(uint *)param_1 = 0;
      *(uint *)(param_1 + 1) = 0;
      goto LAB_10029e97;
    }
LAB_100298b6:
    uVar3 = iVar11 * 0x4d105 >> 0x14;
    FUN_1002a086(local_28,2 - uVar3);
    uVar12 = ((int)((2 - uVar3) * 0x1a934f) >> 0x13) + iVar11;
    bVar9 = (byte)uVar12;
    bVar6 = 0x3f - bVar9;
    uVar10 = local_20 >> (bVar6 & 0x1f) | local_1c << 0x20 - (bVar6 & 0x1f);
    if ((bVar6 & 0x20) != 0) {
      uVar10 = local_1c >> (bVar6 & 0x1f);
    }
    uVar15 = uVar7 << 1 | param_2 >> 0x1f;
    uVar7 = param_2 * 2 + 1;
    uVar4 = uVar7 << (bVar9 & 0x1f);
    uVar5 = uVar4;
    uVar16 = 0;
    if ((uVar12 & 0x20) == 0) {
      uVar5 = uVar15 << (bVar9 & 0x1f) | uVar7 >> 0x20 - (bVar9 & 0x1f);
      uVar16 = uVar4;
    }
    iVar11 = param_2 * 2;
    FUN_1002a27c(&local_38,uVar16,uVar5,local_28);
    lVar18 = (ulonglong)local_34 * 0xe353f7cf + ((ulonglong)local_38 * 0xe353f7cf >> 0x20);
    uVar14 = (uint)((ulonglong)lVar18 >> 0x20);
    uVar4 = (uint)((ulonglong)local_38 * 0x20c49ba5 >> 0x20);
    uVar7 = (uint)CARRY4((uint)((ulonglong)local_38 * 0x20c49ba5),(uint)lVar18);
    uVar16 = uVar4 + uVar14;
    uVar13 = uVar16 + uVar7;
    uVar5 = (uint)((ulonglong)local_34 * 0x20c49ba5);
    uVar7 = (int)((ulonglong)local_34 * 0x20c49ba5 >> 0x20) +
            (uint)(CARRY4(uVar4,uVar14) || CARRY4(uVar16,uVar7)) + (uint)CARRY4(uVar5,uVar13);
    uVar16 = uVar7 * 0x2000000 | uVar5 + uVar13 >> 7;
    local_38 = uVar16 * -1000 + local_38;
    uVar7 = uVar7 >> 7;
    if (local_38 < uVar10) {
      if ((local_38 != 0) || ((param_2 & local_30) == 0)) {
LAB_10029a16:
        lVar18 = __aulldiv(uVar16,uVar7,100000000,0);
        if (lVar18 * -100000000 == CONCAT44(-(uint)(uVar16 != 0) - uVar7,-uVar16)) {
          iVar11 = 6;
          uVar7 = (uint)lVar18;
          do {
            uVar10 = uVar7;
            uVar7 = uVar10 * 0x40000000 | uVar10 * -0x3d70a3d7 >> 2;
            iVar11 = iVar11 + 2;
          } while (uVar7 < 0x28f5c29);
          uVar12 = uVar10 * -0x33333333 >> 1 | (uint)((uVar10 * -0x33333333 & 1) != 0) << 0x1f;
          uVar7 = uVar12;
          if (uVar12 >= 0x1999999a) {
            uVar7 = uVar10;
          }
          iVar11 = iVar11 + (uint)(uVar12 < 0x1999999a);
          *(uint *)param_1 = uVar7;
          *(uint *)((int)param_1 + 4) = 0;
        }
        else {
          iVar11 = -1;
          do {
            uVar12 = uVar16;
            uVar10 = uVar7;
            iVar8 = iVar11;
            uVar16 = uVar10 * -0x3d70a3d7 +
                     uVar12 * -0x70a3d70b + (int)((ulonglong)uVar12 * 0xc28f5c29 >> 0x20);
            uVar7 = uVar12 << 0x1e | uVar16 >> 2;
            uVar16 = uVar16 * 0x40000000 | (uint)((ulonglong)uVar12 * 0xc28f5c29) >> 2;
            iVar11 = iVar8 + 2;
          } while (uVar7 < 0x28f5c29 && (uint)(0xf5c28f5c < uVar16) <= 0x28f5c28 - uVar7);
          *(uint *)((int)param_1 + 4) = uVar10;
          uVar10 = uVar10 * -0x33333333 +
                   uVar12 * -0x33333334 + (int)((ulonglong)uVar12 * 0xcccccccd >> 0x20);
          uVar7 = (uint)((ulonglong)uVar12 * 0xcccccccd) >> 1 | uVar10 * -0x80000000;
          *(uint *)param_1 = uVar12;
          uVar10 = uVar10 >> 1 | uVar12 << 0x1f;
          if (uVar10 < 0x1999999a && (uint)(0x99999999 < uVar7) <= 0x19999999 - uVar10) {
            *(uint *)param_1 = uVar7;
            *(uint *)((int)param_1 + 4) = uVar10;
          }
          else {
            iVar11 = iVar8 + 1;
          }
        }
        uVar7 = iVar11 + uVar3 + 1;
        goto LAB_10029e94;
      }
      bVar17 = uVar16 != 0;
      uVar16 = uVar16 - 1;
      uVar7 = (uVar7 - 1) + (uint)bVar17;
      local_38 = 1000;
    }
    else if ((local_38 <= uVar10) &&
            (uVar5 = FUN_1002a340(iVar11 + -1,(uVar15 - 1) + (uint)(iVar11 != 0),local_28,uVar12),
            (~param_2 & (uVar5 & 0xffff) >> 8 & 1) != 0 || (uVar5 & 1) != 0)) goto LAB_10029a16;
    *(uint *)(param_1 + 1) = uVar3;
    uVar3 = local_38 - (uVar10 >> 1);
    local_3c = uVar3 + 0x32;
    cVar2 = FUN_1002a43d(&local_3c);
    uVar10 = local_3c;
    uVar19 = (ulonglong)uVar16 * 10 + CONCAT44(uVar7 * 10,local_3c);
    *param_1 = uVar19;
    if ((cVar2 != '\0') &&
       ((uVar7 = FUN_1002a340(iVar11,uVar15,local_28,uVar12), (uVar3 & 1) != (uVar7 & 1) ||
        (((uVar7 & 0xffff) >> 8 & uVar10 & 1) != 0)))) {
      *param_1 = uVar19 - 1;
    }
  }
  else {
    iVar11 = uVar10 - 0x433;
    if (param_2 != 0 || uVar7 != 0) {
      uVar7 = uVar7 + 0xfffff + (uint)(param_2 != 0) + (uint)(0xfffffffe < param_2 - 1);
      goto LAB_100298b6;
    }
    uVar16 = iVar11 * 0x9a209 + -0x3fe1f >> 0x15;
    local_54 = (char)((int)(uVar16 * -0x1a934f) >> 0x13) + (char)iVar11;
    FUN_1002a086(local_28,-uVar16);
    uVar3 = local_1c - (local_20 < local_1c >> 0x16);
    bVar6 = 0xb - local_54;
    uVar5 = uVar3 >> (bVar6 & 0x1f);
    uVar7 = local_1c + CARRY4(local_1c >> 0x15,local_20);
    uVar4 = uVar7 >> (bVar6 & 0x1f);
    uVar12 = uVar4;
    uVar10 = (local_1c >> 0x15) + local_20 >> (bVar6 & 0x1f) | uVar7 << 0x20 - (bVar6 & 0x1f);
    uVar7 = uVar5;
    uVar3 = local_20 - (local_1c >> 0x16) >> (bVar6 & 0x1f) | uVar3 << 0x20 - (bVar6 & 0x1f);
    if ((bVar6 & 0x20) != 0) {
      uVar7 = 0;
      uVar12 = 0;
      uVar10 = uVar4;
      uVar3 = uVar5;
    }
    bVar6 = FUN_10028e63(iVar11);
    uVar5 = (bVar6 ^ 1) + uVar3;
    uVar7 = uVar7 + CARRY4((uint)(bVar6 ^ 1),uVar3);
    uVar19 = __aulldiv(uVar10,uVar12,10,0);
    lVar18 = (uVar19 & 0xffffffff) * 10;
    uVar3 = (int)((ulonglong)lVar18 >> 0x20) + (int)(uVar19 >> 0x20) * 10;
    if (uVar3 < uVar7 || uVar3 - uVar7 < (uint)((uint)lVar18 < uVar5)) {
      bVar6 = 10 - local_54;
      uVar12 = local_1c >> (bVar6 & 0x1f);
      uVar3 = uVar12;
      uVar10 = local_20 >> (bVar6 & 0x1f) | local_1c << 0x20 - (bVar6 & 0x1f);
      if ((bVar6 & 0x20) != 0) {
        uVar3 = 0;
        uVar10 = uVar12;
      }
      uVar3 = uVar3 + (0xfffffffe < uVar10);
      uVar10 = uVar10 + 1 >> 1;
      uVar12 = uVar3 * -0x80000000;
      uVar4 = uVar10 | uVar12;
      uVar3 = uVar3 >> 1;
      *(uint *)param_1 = uVar4;
      *(uint *)((int)param_1 + 4) = uVar3;
      *(uint *)(param_1 + 1) = uVar16;
      if (iVar11 == -0x4d) {
        *(uint *)((int)param_1 + 4) = uVar3;
        *(uint *)param_1 = uVar10 & 0xfffffffe | uVar12;
      }
      else if (uVar3 < uVar7 || uVar3 - uVar7 < (uint)(uVar4 < uVar5)) {
        *(uint *)param_1 = uVar4 + 1;
        *(uint *)((int)param_1 + 4) = uVar3 + (0xfffffffe < uVar4);
      }
      goto LAB_10029e97;
    }
    uVar7 = (uint)(uVar19 * -0x3898f8b4dd16f1df);
    uVar3 = (uint)(uVar19 * -0x3898f8b4dd16f1df >> 0x20);
    uVar5 = uVar3 >> 8 | uVar7 << 0x18;
    if (uVar5 < 0x2a || uVar5 - 0x2a < (uint)((uVar3 * 0x1000000 | uVar7 >> 8) < 0xf31dc462)) {
      uVar7 = __aulldiv(uVar10,uVar12,1000000000,0);
      iVar11 = 6;
      do {
        uVar10 = uVar7;
        uVar7 = uVar10 * 0x40000000 | uVar10 * -0x3d70a3d7 >> 2;
        iVar11 = iVar11 + 2;
      } while (uVar7 < 0x28f5c29);
      uVar3 = uVar10 * -0x33333333 >> 1 | (uint)((uVar10 * -0x33333333 & 1) != 0) << 0x1f;
      uVar7 = uVar3;
      if (uVar3 >= 0x1999999a) {
        uVar7 = uVar10;
      }
      iVar11 = iVar11 + (uint)(uVar3 < 0x1999999a);
      *(uint *)param_1 = uVar7;
      *(uint *)((int)param_1 + 4) = 0;
    }
    else {
      iVar11 = -1;
      do {
        uVar1 = uVar19;
        iVar8 = iVar11;
        uVar10 = (uint)(uVar1 * -0x70a3d70a3d70a3d7 >> 0x20);
        uVar7 = (int)uVar1 << 0x1e | uVar10 >> 2;
        uVar10 = uVar10 * 0x40000000 | (uint)(uVar1 * -0x70a3d70a3d70a3d7) >> 2;
        iVar11 = iVar8 + 2;
        uVar19 = CONCAT44(uVar7,uVar10);
      } while (uVar7 < 0x28f5c29 && (uint)(0xf5c28f5c < uVar10) <= 0x28f5c28 - uVar7);
      uVar10 = (uint)(uVar1 * -0x3333333333333333 >> 0x20);
      uVar7 = (uint)(uVar1 * -0x3333333333333333) >> 1 | uVar10 * -0x80000000;
      *param_1 = uVar1;
      uVar10 = uVar10 >> 1 | (int)uVar1 << 0x1f;
      if (uVar10 < 0x1999999a && (uint)(0x99999999 < uVar7) <= 0x19999999 - uVar10) {
        *(uint *)param_1 = uVar7;
        *(uint *)((int)param_1 + 4) = uVar10;
      }
      else {
        iVar11 = iVar8 + 1;
      }
    }
    uVar7 = iVar11 + uVar16 + 1;
LAB_10029e94:
    *(uint *)(param_1 + 1) = uVar7;
  }
LAB_10029e97:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

