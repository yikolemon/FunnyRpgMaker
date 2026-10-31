/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015c5b8 */

void FUN_14015c5b8(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int *local_90;
  uint local_84;
  longlong local_80;
  int local_74;
  char *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  pcVar1 = (char *)param_2[2];
  lVar2 = param_2[4];
  FUN_140128b39(lVar2,*(undefined8 *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar16 = (char *)*param_2;
  if ((pcVar16 < pcVar1) && (*param_2 = (longlong)(pcVar16 + 1), *pcVar16 == '[')) {
    (*(code *)param_2[7])(param_2);
    uVar6 = FUN_14012afda(lVar2,0xc);
    *(undefined8 *)(param_1 + 0x2a8) = uVar6;
    if (local_4c == 0) {
      pcVar16 = (char *)*param_2;
      local_68 = 0;
      if (pcVar16 < pcVar1) {
        uVar14 = 0xc;
        lVar15 = 0;
        local_60 = 0;
        local_74 = 0;
        iVar5 = 0;
        uVar8 = 0;
        lVar9 = 0;
        local_70 = pcVar1;
        do {
          cVar12 = *pcVar16;
          if (cVar12 != '<') {
            if (cVar12 == ']') {
              *param_2 = (longlong)(pcVar16 + 1);
              *(int *)(param_1 + 0x2b0) = (int)lVar15;
              iVar5 = (int)param_2[3];
              goto LAB_14015c9c6;
            }
            uVar17 = local_60;
            iVar13 = local_74;
            if (9 < (byte)(cVar12 - 0x30U)) goto LAB_14015c7cb;
            if ((char)uVar8 == '\0') {
              local_80 = CONCAT44(local_80._4_4_,iVar5);
              uVar4 = (*(code *)param_2[9])(param_2);
              if (-1 < (int)uVar4) {
                uVar17 = (ulonglong)uVar4;
                (*(code *)param_2[8])(param_2);
                if ((int)param_2[3] != 0) goto LAB_14015c9fe;
                lVar3 = *param_2;
                lVar9 = lVar3 + 1;
                if (uVar4 < (uint)((int)local_70 - (int)lVar3)) {
                  *param_2 = lVar3 + (ulonglong)uVar4 + 1;
                  uVar8 = 0;
                  iVar5 = (int)local_80;
                  goto LAB_14015c7df;
                }
              }
LAB_14015ca6d:
              local_4c = 3;
              goto LAB_14015c9c0;
            }
            uVar8 = 1;
            break;
          }
          if ((char)uVar8 == '\0' && lVar9 != 0) goto LAB_14015ca6d;
          local_80 = CONCAT44(local_80._4_4_,iVar5);
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_14015c9ca;
          uVar18 = (longlong)(~(ulonglong)pcVar16 + *param_2) / 2;
          if ((int)uVar18 == 0) {
            local_4c = 3;
            goto LAB_14015c9c3;
          }
          local_90 = &local_4c;
          local_98 = lVar9;
          local_84 = (uint)uVar8;
          lVar9 = FUN_14012b8aa(lVar2,1,local_74,uVar18 & 0xffffffff);
          if (local_4c != 0) {
LAB_14015ca4e:
            uVar8 = (ulonglong)local_84;
            goto LAB_14015c9c3;
          }
          *param_2 = (longlong)pcVar16;
          local_98 = CONCAT71(local_98._1_7_,1);
          plVar7 = param_2;
          (*(code *)param_2[0xb])(param_2,lVar9,uVar18 & 0xffffffff,&local_50);
          uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
          uVar17 = (ulonglong)local_50;
          iVar13 = (int)uVar18;
          iVar5 = (int)local_80;
LAB_14015c7cb:
          if (lVar9 == 0) {
            local_4c = 3;
            lVar9 = 0;
            uVar8 = uVar8 & 0xffffffff;
            goto LAB_14015c9c3;
          }
          uVar8 = uVar8 & 0xffffffff;
          local_74 = iVar13;
LAB_14015c7df:
          if ((uVar17 & 1) == 0) {
            uVar18 = uVar17 & 0xffffffff;
LAB_14015c7f6:
            uVar17 = uVar18;
            if ((int)uVar18 == 0) break;
          }
          else {
            uVar18 = (ulonglong)((int)uVar17 - 1);
            if (*(char *)(lVar9 + uVar18) == '\0') goto LAB_14015c7f6;
          }
          local_84 = (uint)uVar8;
          uVar4 = (int)local_70 - (int)*param_2;
          lVar15 = (longlong)(int)lVar15;
          uVar8 = uVar17 & 0xffffffff;
          uVar18 = 0;
          local_80 = lVar9;
          local_60 = uVar17;
          local_58 = uVar8;
          do {
            uVar10 = uVar14;
            if (iVar5 == 2) {
LAB_14015c95e:
              iVar5 = 2;
              uVar14 = uVar10;
              if ((int)uVar10 <= lVar15) {
                local_4c = 3;
                goto LAB_14015ca4e;
              }
            }
            else if (iVar5 == 1) {
LAB_14015c8b3:
              iVar5 = 1;
              lVar9 = local_80;
              if ((int)uVar14 <= lVar15) {
                uVar10 = uVar14;
                if (0 < (int)local_68) {
                  lVar9 = 0;
                  do {
                    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x2a8) + 0x18 + lVar9);
                    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                             uVar11 << 0x18;
                    if ((uVar4 < uVar11) || ((int)(uVar4 - uVar11) < (int)uVar10))
                    goto LAB_14015ca3c;
                    uVar10 = uVar10 + (uVar11 + 3 & 0xfffffffc);
                    lVar9 = lVar9 + 0x10;
                  } while ((local_68 & 0xffffffff) << 4 != lVar9);
                }
                uVar10 = uVar10 + 1;
                local_90 = &local_4c;
                local_98 = *(longlong *)(param_1 + 0x2a8);
                uVar6 = FUN_14012b8aa(lVar2,1,uVar14,uVar10);
                *(undefined8 *)(param_1 + 0x2a8) = uVar6;
                uVar8 = local_58;
                lVar9 = local_80;
                if (local_4c == 0) goto LAB_14015c95e;
                goto LAB_14015ca4e;
              }
            }
            else {
              iVar5 = 0;
              if (0xb < lVar15) {
                lVar9 = *(longlong *)(param_1 + 0x2a8);
                uVar10 = (uint)*(byte *)(lVar9 + 5) + (uint)*(byte *)(lVar9 + 4) * 0x10;
                local_68 = (ulonglong)uVar10;
                uVar10 = uVar10 * 0x10 | 0xc;
                if ((int)uVar4 < (int)uVar10) {
LAB_14015ca3c:
                  local_4c = 3;
                  lVar9 = local_80;
                }
                else {
                  local_90 = &local_4c;
                  local_98 = lVar9;
                  uVar6 = FUN_14012b8aa(lVar2,1,uVar14,uVar10);
                  *(undefined8 *)(param_1 + 0x2a8) = uVar6;
                  uVar8 = local_58;
                  lVar9 = local_80;
                  uVar14 = uVar10;
                  if (local_4c == 0) goto LAB_14015c8b3;
                }
                goto LAB_14015ca4e;
              }
            }
            *(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + lVar15) =
                 *(undefined1 *)(lVar9 + uVar18);
            lVar15 = lVar15 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar8);
          (*(code *)param_2[7])(param_2);
          pcVar16 = (char *)*param_2;
          uVar8 = (ulonglong)local_84;
        } while (pcVar16 < local_70);
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
      }
      local_4c = 3;
      goto LAB_14015c9c3;
    }
  }
  else {
    local_4c = 3;
  }
  lVar9 = 0;
LAB_14015c9c0:
  uVar8 = 0;
LAB_14015c9c3:
  *(int *)(param_2 + 3) = local_4c;
  iVar5 = local_4c;
LAB_14015c9c6:
  cVar12 = (char)uVar8;
  if (iVar5 != 0) {
LAB_14015c9ca:
    cVar12 = (char)uVar8;
    FUN_140128b39(lVar2,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (cVar12 != '\0') {
    FUN_140128b39(lVar2,lVar9);
  }
LAB_14015c9fe:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return;
}

