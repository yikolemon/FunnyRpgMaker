/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016d5cc */

void FUN_14016d5cc(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int *local_f0;
  ulonglong local_e0;
  undefined8 local_d8;
  int iStack_cc;
  ulonglong local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  if ((ulonglong)*param_1 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 6);
    lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 10) + 0xcc + (ulonglong)param_2 * 0xcc);
    uVar18 = *(ulonglong *)(param_1 + 2);
    uVar12 = (ulonglong)*param_1 * 0x40 + uVar18;
    uVar15 = 0;
    uVar5 = uVar18;
    do {
      uVar15 = uVar15 + ((*(uint *)(uVar5 + 0x1c) >> 4 & 1) != 0);
      uVar5 = uVar5 + 0x40;
    } while (uVar5 < uVar12);
    if (uVar15 != 0) {
      if (uVar15 < 0x11) {
        puVar6 = local_c8;
      }
      else {
        local_f0 = &iStack_cc;
        local_f8 = 0;
        puVar6 = (ulonglong *)FUN_14012b8aa(uVar13,8,0);
        if (iStack_cc != 0) goto LAB_14016d857;
      }
      uVar16 = 0;
      uVar5 = uVar18;
      do {
        if ((*(byte *)(uVar5 + 0x1c) & 0x10) != 0) {
          puVar8 = puVar6 + uVar16;
          if ((int)uVar16 != 0) {
            do {
              if (*(int *)(puVar8[-1] + 0x30) <= *(int *)(uVar5 + 0x30)) break;
              *puVar8 = puVar8[-1];
              puVar8 = puVar8 + -1;
            } while (puVar6 < puVar8);
          }
          *puVar8 = uVar5;
          uVar16 = (ulonglong)((int)uVar16 + 1);
        }
        uVar5 = uVar5 + 0x40;
      } while (uVar5 < uVar12);
      uVar15 = (uint)uVar16;
      uVar5 = (ulonglong)(uVar15 + 1);
      do {
        uVar4 = *(uint *)(uVar18 + 0x1c);
        if ((uVar4 & 0x10) == 0) {
          if ((*(uint *)(uVar18 + 0x18) & 2) != 0) {
            if (((*(int *)(uVar18 + 0x20) == 0) || ((uVar4 & 0x40) == 0)) ||
               (*(int *)(uVar18 + 0x20) != *(int *)(uVar18 + 0x24))) goto LAB_14016d835;
            *(uint *)(uVar18 + 0x18) = *(uint *)(uVar18 + 0x18) & 0xfffffffd;
          }
          if (uVar15 == 0) {
LAB_14016d75c:
            lVar11 = ((longlong)*(int *)(uVar18 + 0x30) - (longlong)*(int *)(*puVar6 + 0x30)) *
                     lVar17;
            *(int *)(uVar18 + 0x38) =
                 (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10) +
                 *(int *)(*puVar6 + 0x38);
          }
          else {
            uVar9 = 0;
            do {
              if (*(int *)(uVar18 + 0x30) < *(int *)(puVar6[uVar9] + 0x30)) {
                uVar10 = uVar9;
                if ((int)uVar9 == 0) goto LAB_14016d75c;
                break;
              }
              uVar9 = uVar9 + 1;
              uVar10 = uVar16;
            } while (uVar15 != (uint)uVar9);
            uVar9 = puVar6[(int)uVar10 - 1];
            puVar8 = puVar6 + uVar16;
            uVar10 = 0;
            do {
              puVar8 = puVar8 + -1;
              if (uVar16 == uVar10) {
                uVar14 = 0;
                goto LAB_14016d792;
              }
              uVar10 = uVar10 + 1;
            } while (*(int *)(uVar18 + 0x30) <= *(int *)(*puVar8 + 0x30));
            uVar14 = (int)uVar5 - (int)uVar10;
LAB_14016d792:
            iVar3 = *(int *)(uVar18 + 0x30);
            if (uVar14 == uVar15) {
              lVar11 = ((longlong)iVar3 - (longlong)*(int *)(puVar6[uVar15 - 1] + 0x30)) * lVar17;
              *(int *)(uVar18 + 0x38) =
                   (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10) +
                   *(int *)(puVar6[uVar15 - 1] + 0x38);
            }
            else {
              iVar1 = *(int *)(uVar9 + 0x30);
              if (iVar3 == iVar1) {
                uVar7 = *(undefined4 *)(uVar9 + 0x38);
              }
              else {
                uVar10 = puVar6[uVar14];
                if (iVar3 != *(int *)(uVar10 + 0x30)) {
                  iVar2 = *(int *)(uVar9 + 0x38);
                  local_e0 = uVar5;
                  local_d8 = uVar13;
                  iVar3 = FUN_14012a478(iVar3 - iVar1,*(int *)(uVar10 + 0x38) - iVar2,
                                        *(int *)(uVar10 + 0x30) - iVar1);
                  *(int *)(uVar18 + 0x38) = iVar3 + iVar2;
                  uVar4 = *(uint *)(uVar18 + 0x1c);
                  uVar13 = local_d8;
                  uVar5 = local_e0;
                  goto LAB_14016d82e;
                }
                uVar7 = *(undefined4 *)(uVar10 + 0x38);
              }
              *(undefined4 *)(uVar18 + 0x38) = uVar7;
            }
          }
LAB_14016d82e:
          *(uint *)(uVar18 + 0x1c) = uVar4 | 0x20;
        }
LAB_14016d835:
        uVar18 = uVar18 + 0x40;
      } while (uVar18 < uVar12);
      if (puVar6 != local_c8) {
        FUN_140128b39(uVar13,puVar6);
      }
    }
  }
LAB_14016d857:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_118);
  }
  return;
}

