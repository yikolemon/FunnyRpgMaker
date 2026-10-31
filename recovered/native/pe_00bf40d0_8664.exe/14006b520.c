/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b520 */

void FUN_14006b520(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_118 [32];
  int iStack_cc;
  ulonglong local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_118;
  if ((ulonglong)*param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 6);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 10) + 0xcc + (ulonglong)param_2 * 0xcc);
    uVar17 = *(ulonglong *)(param_1 + 2);
    uVar12 = (ulonglong)*param_1 * 0x40 + uVar17;
    uVar14 = 0;
    uVar6 = uVar17;
    do {
      uVar14 = uVar14 + ((*(uint *)(uVar6 + 0x1c) >> 4 & 1) != 0);
      uVar6 = uVar6 + 0x40;
    } while (uVar6 < uVar12);
    if (uVar14 != 0) {
      if (uVar14 < 0x11) {
        puVar7 = local_c8;
      }
      else {
        puVar7 = (ulonglong *)FUN_14001f231(lVar3,8,0,uVar14,0,&iStack_cc);
        if (iStack_cc != 0) goto LAB_14006b7ab;
      }
      uVar15 = 0;
      uVar6 = uVar17;
      do {
        if ((*(byte *)(uVar6 + 0x1c) & 0x10) != 0) {
          puVar9 = puVar7 + uVar15;
          if ((int)uVar15 != 0) {
            do {
              if (*(int *)(puVar9[-1] + 0x30) <= *(int *)(uVar6 + 0x30)) break;
              *puVar9 = puVar9[-1];
              puVar9 = puVar9 + -1;
            } while (puVar7 < puVar9);
          }
          *puVar9 = uVar6;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        uVar6 = uVar6 + 0x40;
      } while (uVar6 < uVar12);
      uVar14 = (uint)uVar15;
      do {
        uVar5 = *(uint *)(uVar17 + 0x1c);
        if ((uVar5 & 0x10) == 0) {
          if ((*(uint *)(uVar17 + 0x18) & 2) != 0) {
            if (((*(int *)(uVar17 + 0x20) == 0) || ((uVar5 & 0x40) == 0)) ||
               (*(int *)(uVar17 + 0x20) != *(int *)(uVar17 + 0x24))) goto LAB_14006b789;
            *(uint *)(uVar17 + 0x18) = *(uint *)(uVar17 + 0x18) & 0xfffffffd;
          }
          if (uVar14 == 0) {
LAB_14006b6b0:
            lVar11 = ((longlong)*(int *)(uVar17 + 0x30) - (longlong)*(int *)(*puVar7 + 0x30)) *
                     lVar16;
            *(int *)(uVar17 + 0x38) =
                 (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10) +
                 *(int *)(*puVar7 + 0x38);
          }
          else {
            uVar6 = 0;
            do {
              if (*(int *)(uVar17 + 0x30) < *(int *)(puVar7[uVar6] + 0x30)) {
                uVar10 = uVar6;
                if ((int)uVar6 == 0) goto LAB_14006b6b0;
                break;
              }
              uVar6 = uVar6 + 1;
              uVar10 = uVar15;
            } while (uVar14 != (uint)uVar6);
            uVar6 = puVar7[(int)uVar10 - 1];
            puVar9 = puVar7 + uVar15;
            uVar10 = 0;
            do {
              puVar9 = puVar9 + -1;
              if (uVar15 == uVar10) {
                uVar13 = 0;
                goto LAB_14006b6e6;
              }
              uVar10 = uVar10 + 1;
            } while (*(int *)(uVar17 + 0x30) <= *(int *)(*puVar9 + 0x30));
            uVar13 = (uVar14 + 1) - (int)uVar10;
LAB_14006b6e6:
            iVar4 = *(int *)(uVar17 + 0x30);
            if (uVar13 == uVar14) {
              lVar11 = ((longlong)iVar4 - (longlong)*(int *)(puVar7[uVar14 - 1] + 0x30)) * lVar16;
              *(int *)(uVar17 + 0x38) =
                   (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10) +
                   *(int *)(puVar7[uVar14 - 1] + 0x38);
            }
            else {
              iVar1 = *(int *)(uVar6 + 0x30);
              if (iVar4 == iVar1) {
                uVar8 = *(undefined4 *)(uVar6 + 0x38);
              }
              else {
                uVar10 = puVar7[uVar13];
                if (iVar4 != *(int *)(uVar10 + 0x30)) {
                  iVar2 = *(int *)(uVar6 + 0x38);
                  iVar4 = FUN_14001de7c(iVar4 - iVar1,*(int *)(uVar10 + 0x38) - iVar2,
                                        *(int *)(uVar10 + 0x30) - iVar1);
                  *(int *)(uVar17 + 0x38) = iVar4 + iVar2;
                  uVar5 = *(uint *)(uVar17 + 0x1c);
                  goto LAB_14006b782;
                }
                uVar8 = *(undefined4 *)(uVar10 + 0x38);
              }
              *(undefined4 *)(uVar17 + 0x38) = uVar8;
            }
          }
LAB_14006b782:
          *(uint *)(uVar17 + 0x1c) = uVar5 | 0x20;
        }
LAB_14006b789:
        uVar17 = uVar17 + 0x40;
      } while (uVar17 < uVar12);
      if (puVar7 != local_c8) {
        FUN_14001c53d(lVar3,(longlong)puVar7);
      }
    }
  }
LAB_14006b7ab:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_118);
  }
  return;
}

