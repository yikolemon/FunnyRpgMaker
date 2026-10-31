/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263e85 */

/* WARNING: Removing unreachable block (ram,0x10264041) */
/* WARNING: Removing unreachable block (ram,0x1026418f) */

undefined4
FUN_10263e85(uint param_1,uint param_2,int param_3,uint param_4,char param_5,
            floating_point_value *param_6)

{
  floating_point_value fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  int local_c;
  
  uVar18 = CONCAT44(param_2,param_1);
  uVar15 = 0;
  if (param_2 == 0) {
    iVar6 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (param_1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  else {
    iVar6 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + 0x20;
  }
  fVar1 = param_6[4];
  iVar13 = 0x18;
  if (fVar1 != (floating_point_value)0x0) {
    iVar13 = 0x35;
  }
  iVar13 = iVar13 - iVar6;
  local_c = param_3 - iVar13;
  iVar6 = 0x7f;
  if (fVar1 != (floating_point_value)0x0) {
    iVar6 = 0x3ff;
  }
  bVar19 = SUB41(param_4,0);
  if (iVar6 < local_c) {
LAB_1026420b:
    __crt_strtox::assemble_floating_point_infinity(bVar19,param_6);
    return 3;
  }
  iVar7 = -0x7e;
  if (fVar1 != (floating_point_value)0x0) {
    iVar7 = -0x3fe;
  }
  if (local_c < iVar7) {
    iVar7 = param_3 + -1 + iVar6;
    local_c = -iVar6;
    if (iVar7 < 0) {
      uVar14 = -iVar7;
      if (uVar14 < 0x40) {
        uVar8 = uVar14 - 1;
        uVar11 = 1 << (uVar8 & 0x1f);
        uVar9 = 0;
        if (0x1f < uVar8) {
          uVar9 = uVar11;
        }
        uVar11 = uVar11 ^ uVar9;
        if (0x3f < uVar8) {
          uVar9 = uVar11;
        }
        uVar8 = 1 << (uVar14 & 0x1f);
        uVar12 = 0;
        if (0x1f < uVar14) {
          uVar12 = uVar8;
        }
        uVar8 = uVar8 ^ uVar12;
        if (0x3f < uVar14) {
          uVar12 = uVar8;
        }
        bVar2 = (uVar11 & param_1) != 0;
        bVar3 = (uVar9 & param_2) != 0;
        if ((param_5 == '\0') ||
           ((uVar11 - 1 & param_1) != 0 || ((uVar9 - 1) + (uint)(uVar11 != 0) & param_2) != 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        else {
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar6 = FUN_10278900();
          if (iVar6 == 0) {
            if ((bVar2 || bVar3) && ((bVar5 || ((uVar8 & param_1) != 0 || (uVar12 & param_2) != 0)))
               ) {
              uVar15 = 1;
            }
          }
          else if (iVar6 == 0x100) {
            uVar15 = param_4 & 0xff;
          }
          else if (iVar6 == 0x200) {
            uVar15 = (uint)(bVar19 ^ 1);
          }
        }
        lVar16 = __aullshr();
        uVar18 = lVar16 + (ulonglong)uVar15;
        if (uVar18 != 0) {
          uVar17 = FUN_10263dd8();
          if (uVar17 < uVar18) {
            local_c = ((param_3 - iVar7) - iVar13) + -1;
          }
          goto LAB_102641c9;
        }
      }
      __crt_strtox::assemble_floating_point_zero(bVar19,param_6);
      return 2;
    }
  }
  else {
    if (iVar13 < 0) {
      uVar14 = -iVar13;
      if (uVar14 < 0x40) {
        uVar8 = uVar14 - 1;
        uVar11 = 1 << (uVar8 & 0x1f);
        uVar9 = 0;
        if (0x1f < uVar8) {
          uVar9 = uVar11;
        }
        uVar11 = uVar11 ^ uVar9;
        if (0x3f < uVar8) {
          uVar9 = uVar11;
        }
        uVar8 = 1 << (uVar14 & 0x1f);
        uVar12 = 0;
        if (0x1f < uVar14) {
          uVar12 = uVar8;
        }
        uVar8 = uVar8 ^ uVar12;
        if (0x3f < uVar14) {
          uVar12 = uVar8;
        }
        bVar2 = (uVar11 & param_1) != 0;
        bVar3 = (uVar9 & param_2) != 0;
        if ((param_5 == '\0') ||
           ((uVar11 - 1 & param_1) != 0 || ((uVar9 - 1) + (uint)(uVar11 != 0) & param_2) != 0)) {
          bVar4 = true;
          bVar5 = true;
        }
        else {
          bVar4 = false;
          bVar5 = false;
        }
        if ((bVar2 || bVar3) || (bVar4)) {
          iVar6 = FUN_10278900();
          if (iVar6 == 0) {
            if ((bVar2 || bVar3) && ((bVar5 || ((uVar8 & param_1) != 0 || (uVar12 & param_2) != 0)))
               ) {
              uVar15 = 1;
            }
          }
          else if (iVar6 == 0x100) {
            uVar15 = param_4 & 0xff;
          }
          else if (iVar6 == 0x200) {
            uVar15 = (uint)(bVar19 ^ 1);
          }
        }
        lVar16 = __aullshr();
        uVar18 = lVar16 + (ulonglong)uVar15;
      }
      else {
        uVar18 = 0;
      }
      uVar17 = FUN_10263dc1();
      if (uVar17 < uVar18) {
        uVar18 = uVar18 >> 1;
        local_c = local_c + 1;
        iVar6 = 0x7f;
        if (param_6[4] != (floating_point_value)0x0) {
          iVar6 = 0x3ff;
        }
        if (iVar6 < local_c) goto LAB_1026420b;
      }
      goto LAB_102641c9;
    }
    if (iVar13 < 1) goto LAB_102641c9;
  }
  uVar18 = __allshl();
LAB_102641c9:
  uVar17 = FUN_10263dd8();
  if (param_6[4] == (floating_point_value)0x0) {
    uVar10 = FUN_10263d9c();
    uVar10 = FUN_10264260(param_4,local_c,uVar18 & uVar17,uVar10);
  }
  else {
    uVar10 = FUN_10263d77();
    uVar10 = FUN_1026421e(param_4,local_c,uVar18 & uVar17,uVar10);
  }
  return uVar10;
}

