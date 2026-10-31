/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10057ea1 */

int * FUN_10057ea1(int *param_1,int *param_2,int *param_3,uint param_4,int param_5,
                  undefined4 param_6,undefined4 param_7,uint param_8,int param_9,undefined4 param_10
                  ,undefined4 param_11,uint param_12,uint param_13,char param_14)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  int *piVar5;
  byte bVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  int iVar26;
  int local_58;
  int *local_54;
  int *local_4c;
  int *local_40;
  uint local_28;
  
  piVar8 = (int *)(param_12 - param_4);
  local_40 = (int *)((param_13 - param_5) - (uint)(param_12 < param_4));
  local_54 = (int *)(param_12 - param_8);
  local_4c = (int *)((param_13 - param_9) - (uint)(param_12 < param_8));
  bVar6 = -param_14;
  piVar20 = (int *)(0 << (bVar6 & 0x1f) | 1U >> 0x20 - (bVar6 & 0x1f));
  piVar14 = (int *)(1 << (bVar6 & 0x1f));
  local_28 = param_12 >> (bVar6 & 0x1f) | param_13 << 0x20 - (bVar6 & 0x1f);
  piVar15 = piVar14;
  if ((bVar6 & 0x20) != 0) {
    piVar15 = (int *)0x0;
    piVar20 = piVar14;
    local_28 = param_13 >> (bVar6 & 0x1f);
  }
  uVar21 = (int)piVar20 + ((piVar15 != (int *)0x0) - 1);
  if (local_28 < 1000000000) {
    if (local_28 < 100000000) {
      if (local_28 < 10000000) {
        if (local_28 < 1000000) {
          if (local_28 < 100000) {
            if (local_28 < 10000) {
              if (local_28 < 1000) {
                if (local_28 < 100) {
                  uVar18 = (uint)(9 < local_28) * 9 + 1;
                  local_58 = (9 < local_28) + 1;
                }
                else {
                  local_58 = 3;
                  uVar18 = 100;
                }
              }
              else {
                local_58 = 4;
                uVar18 = 1000;
              }
            }
            else {
              local_58 = 5;
              uVar18 = 10000;
            }
          }
          else {
            local_58 = 6;
            uVar18 = 100000;
          }
        }
        else {
          local_58 = 7;
          uVar18 = 1000000;
        }
      }
      else {
        local_58 = 8;
        uVar18 = 10000000;
      }
    }
    else {
      local_58 = 9;
      uVar18 = 100000000;
    }
  }
  else {
    local_58 = 10;
    uVar18 = 1000000000;
  }
  piVar14 = (int *)(param_13 & uVar21);
  piVar9 = (int *)(param_12 & (int)piVar15 - 1U);
  do {
    if (local_58 < 1) {
      iVar26 = 0;
      do {
        uVar12 = (uint)(ZEXT48(piVar9) * 10);
        uVar18 = (int)(ZEXT48(piVar9) * 10 >> 0x20) + (int)piVar14 * 10;
        bVar7 = (byte)(uVar18 >> (bVar6 & 0x1f));
        if ((bVar6 & 0x20) == 0) {
          bVar7 = (byte)(uVar12 >> (bVar6 & 0x1f)) | (byte)(uVar18 << 0x20 - (bVar6 & 0x1f));
        }
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
        *(byte *)((int)param_1 + iVar2) = bVar7 + 0x30;
        piVar14 = (int *)(uVar18 & uVar21);
        piVar9 = (int *)(uVar12 & (int)piVar15 - 1U);
        uVar4 = ZEXT48(piVar8);
        piVar8 = (int *)(uVar4 * 10);
        local_40 = (int *)((int)(uVar4 * 10 >> 0x20) + (int)local_40 * 10);
        uVar4 = ZEXT48(local_54);
        local_54 = (int *)(uVar4 * 10);
        local_4c = (int *)((int)(uVar4 * 10 >> 0x20) + (int)local_4c * 10);
        iVar26 = iVar26 + -1;
      } while (local_40 < piVar14 || (uint)((int)local_40 - (int)piVar14) < (uint)(piVar8 < piVar9))
      ;
      *param_3 = *param_3 + iVar26;
      piVar19 = (int *)((int)local_40 + (-(uint)(piVar8 < piVar9) - (int)piVar14));
      piVar24 = piVar19;
      if ((piVar14 < local_4c || (uint)((int)piVar14 - (int)local_4c) < (uint)(piVar9 < local_54))
         && (uVar21 = (uint)((int *)((int)piVar8 - (int)piVar9) < piVar15),
            piVar24 = (int *)(((int)piVar19 - (int)piVar20) - uVar21),
            piVar20 <= piVar19 && uVar21 <= (uint)((int)piVar19 - (int)piVar20))) {
        iVar26 = *param_2;
        while( true ) {
          piVar19 = (int *)((int)piVar9 + (int)piVar15);
          piVar17 = (int *)((int)piVar14 + (int)piVar20 + (uint)CARRY4((uint)piVar9,(uint)piVar15));
          if ((local_4c <= piVar17 &&
               (uint)(piVar19 < local_54) <= (uint)((int)piVar17 - (int)local_4c)) &&
             (uVar18 = (int)local_4c + (-(uint)(local_54 < piVar9) - (int)piVar14),
             uVar21 = (int)piVar17 + (-(uint)(piVar19 < local_54) - (int)local_4c),
             piVar24 = local_4c,
             uVar18 <= uVar21 &&
             (uint)((uint)((int)piVar19 - (int)local_54) < (uint)((int)local_54 - (int)piVar9)) <=
             uVar21 - uVar18)) break;
          pcVar1 = (char *)((int)param_1 + iVar26 + -1);
          *pcVar1 = *pcVar1 + -1;
          piVar24 = (int *)((int)local_40 + (-(uint)(piVar8 < piVar19) - (int)piVar17));
          if (local_4c <= piVar17 &&
              (uint)(piVar19 < local_54) <= (uint)((int)piVar17 - (int)local_4c)) {
            return param_1;
          }
          piVar9 = piVar19;
          piVar14 = piVar17;
          if (piVar24 < piVar20 ||
              (uint)((int)piVar24 - (int)piVar20) <
              (uint)((int *)((int)piVar8 - (int)piVar19) < piVar15)) {
            return param_1;
          }
        }
      }
      return piVar24;
    }
    uVar12 = local_28 / uVar18;
    local_28 = local_28 % uVar18;
    iVar26 = *param_2;
    *param_2 = iVar26 + 1;
    *(char *)((int)param_1 + iVar26) = (char)uVar12 + '0';
    local_58 = local_58 + -1;
    uVar22 = local_28 << (bVar6 & 0x1f);
    uVar23 = uVar22;
    uVar12 = 0 << (bVar6 & 0x1f) | local_28 >> 0x20 - (bVar6 & 0x1f);
    if ((bVar6 & 0x20) != 0) {
      uVar23 = 0;
      uVar12 = uVar22;
    }
    piVar24 = (int *)(uVar23 + (int)piVar9);
    piVar19 = (int *)((int)piVar14 + CARRY4(uVar23,(uint)piVar9) + uVar12);
    bVar3 = (uint)(piVar8 < piVar24) <= (uint)((int)local_40 - (int)piVar19);
    if (piVar19 <= local_40 && bVar3) {
      *param_3 = *param_3 + local_58;
      piVar10 = (int *)(uVar18 << (bVar6 & 0x1f));
      piVar11 = piVar10;
      piVar17 = (int *)(0 << (bVar6 & 0x1f) | uVar18 >> 0x20 - (bVar6 & 0x1f));
      if ((bVar6 & 0x20) != 0) {
        piVar11 = (int *)0x0;
        piVar17 = piVar10;
      }
      piVar10 = (int *)((int)local_40 + (-(uint)(piVar8 < piVar24) - (int)piVar19));
      if (local_4c <= piVar19 && (uint)(piVar24 < local_54) <= (uint)((int)piVar19 - (int)local_4c))
      {
        return param_2;
      }
      if (piVar10 < piVar17 ||
          (uint)((int)piVar10 - (int)piVar17) <
          (uint)((int *)((int)piVar8 - (int)piVar24) < piVar11)) {
        return param_2;
      }
      iVar26 = *param_2;
      piVar10 = piVar19;
      while( true ) {
        piVar16 = (int *)((int)piVar24 + (int)piVar11);
        piVar13 = (int *)((int)piVar10 + (int)piVar17 + (uint)CARRY4((uint)piVar24,(uint)piVar11));
        if ((local_4c <= piVar13 &&
             (uint)(piVar16 < local_54) <= (uint)((int)piVar13 - (int)local_4c)) &&
           (uVar23 = (int)local_4c + (-(uint)(local_54 < piVar24) - (int)piVar10),
           uVar12 = (int)piVar13 + (-(uint)(piVar16 < local_54) - (int)local_4c), piVar5 = local_54,
           uVar23 <= uVar12 &&
           (uint)((uint)((int)piVar16 - (int)local_54) < (uint)((int)local_54 - (int)piVar24)) <=
           uVar12 - uVar23)) break;
        pcVar1 = (char *)((int)param_1 + iVar26 + -1);
        *pcVar1 = *pcVar1 + -1;
        piVar25 = (int *)((int)local_40 + (-(uint)(piVar8 < piVar16) - (int)piVar13));
        piVar5 = (int *)(((int)piVar13 - (int)local_4c) - (uint)(piVar16 < local_54));
        if ((local_4c <= piVar13 &&
             (uint)(piVar16 < local_54) <= (uint)((int)piVar13 - (int)local_4c)) ||
           (piVar10 = piVar13, piVar24 = piVar16, piVar5 = piVar11,
           piVar25 < piVar17 ||
           (uint)((int)piVar25 - (int)piVar17) <
           (uint)((int *)((int)piVar8 - (int)piVar16) < piVar11))) break;
      }
    }
    else {
      piVar5 = (int *)(uVar18 * -0x33333333);
      uVar18 = uVar18 / 10;
    }
    if (piVar19 <= local_40 && bVar3) {
      return piVar5;
    }
  } while( true );
}

