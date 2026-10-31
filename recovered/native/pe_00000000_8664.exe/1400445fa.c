/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400445fa */

void FUN_1400445fa(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong *param_5,
                  ulonglong *param_6)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  
  uVar9 = *param_6;
  bVar7 = -(char)(int)param_6[1];
  uVar16 = 1L << (bVar7 & 0x3f);
  uVar6 = uVar9 >> (bVar7 & 0x3f);
  lVar3 = *param_4;
  lVar4 = *param_5;
  uVar5 = (uint)uVar6;
  if (uVar5 < 1000000000) {
    if (uVar5 < 100000000) {
      if (uVar5 < 10000000) {
        if (uVar5 < 1000000) {
          if (uVar5 < 100000) {
            if (uVar5 < 10000) {
              if (uVar5 < 1000) {
                if (uVar5 < 100) {
                  uVar15 = (uint)(9 < uVar5) * 9 + 1;
                  iVar17 = (9 < uVar5) + 1;
                }
                else {
                  iVar17 = 3;
                  uVar15 = 100;
                }
              }
              else {
                iVar17 = 4;
                uVar15 = 1000;
              }
            }
            else {
              iVar17 = 5;
              uVar15 = 10000;
            }
          }
          else {
            iVar17 = 6;
            uVar15 = 100000;
          }
        }
        else {
          iVar17 = 7;
          uVar15 = 1000000;
        }
      }
      else {
        iVar17 = 8;
        uVar15 = 10000000;
      }
    }
    else {
      iVar17 = 9;
      uVar15 = 100000000;
    }
  }
  else {
    iVar17 = 10;
    uVar15 = 1000000000;
  }
  uVar18 = uVar9 - lVar3;
  uVar10 = uVar9 - lVar4;
  uVar19 = uVar16 - 1 & uVar9;
  do {
    if (iVar17 < 1) {
      iVar17 = 0;
      do {
        uVar8 = uVar18;
        uVar6 = uVar10;
        uVar9 = uVar19 * 10;
        uVar19 = uVar9 & uVar16 - 1;
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
        *(char *)(param_1 + iVar2) = (char)(uVar9 >> (bVar7 & 0x3f)) + '0';
        uVar18 = uVar8 * 10;
        uVar10 = uVar6 * 10;
        iVar17 = iVar17 + -1;
      } while (uVar18 < uVar19);
      *param_3 = *param_3 + iVar17;
      if ((uVar19 < uVar10) && (uVar16 <= uVar18 - uVar19)) {
        iVar17 = *param_2;
        uVar9 = uVar6 * 10 - uVar19;
        uVar19 = uVar19 + uVar16;
        uVar18 = uVar8 * 10 - uVar19;
        do {
          if ((uVar10 <= uVar19) && (uVar9 <= uVar6 * -10 + uVar19)) {
            return;
          }
          pcVar1 = (char *)(param_1 + -1 + (longlong)iVar17);
          *pcVar1 = *pcVar1 + -1;
          bVar20 = uVar16 <= uVar18;
          uVar18 = uVar18 - uVar16;
          if (uVar10 <= uVar19) {
            return;
          }
          uVar9 = uVar9 - uVar16;
          uVar19 = uVar19 + uVar16;
        } while (bVar20);
      }
      return;
    }
    uVar8 = uVar6 & 0xffffffff;
    uVar6 = uVar8 % (ulonglong)uVar15;
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    *(char *)(param_1 + iVar2) = (char)(uVar8 / uVar15) + '0';
    iVar17 = iVar17 + -1;
    uVar8 = (uVar6 << (bVar7 & 0x3f)) + uVar19;
    if (uVar18 < uVar8) {
      uVar15 = uVar15 / 10;
    }
    else {
      *param_3 = *param_3 + iVar17;
      uVar14 = (ulonglong)uVar15 << (bVar7 & 0x3f);
      if (uVar10 <= uVar8) {
        return;
      }
      if (uVar18 - uVar8 < uVar14) {
        return;
      }
      iVar2 = *param_2;
      uVar13 = (uVar9 - lVar4) - uVar8;
      uVar12 = uVar8 + uVar14;
      uVar11 = (uVar9 - lVar3) - uVar12;
      do {
        if ((uVar10 <= uVar12) && (uVar13 <= (lVar4 - uVar9) + uVar12)) break;
        pcVar1 = (char *)(param_1 + -1 + (longlong)iVar2);
        *pcVar1 = *pcVar1 + -1;
        bVar20 = uVar14 <= uVar11;
        uVar11 = uVar11 - uVar14;
        if (uVar10 <= uVar12) break;
        uVar13 = uVar13 - uVar14;
        uVar12 = uVar12 + uVar14;
      } while (bVar20);
    }
    if (uVar8 <= uVar18) {
      return;
    }
  } while( true );
}

