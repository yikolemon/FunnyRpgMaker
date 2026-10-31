/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005a508 */

void FUN_14005a508(longlong param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined1 auStackY_b8 [32];
  uint local_74;
  ulonglong local_60;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  pcVar2 = (char *)param_2[2];
  lVar3 = param_2[4];
  FUN_14001c53d(lVar3,*(longlong *)(param_1 + 0x2a8));
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar14 = (char *)*param_2;
  if ((pcVar14 < pcVar2) && (*param_2 = (longlong)(pcVar14 + 1), *pcVar14 == '[')) {
    (*(code *)param_2[7])(param_2);
    lVar6 = FUN_14001e961(lVar3,0xc,&local_4c);
    *(longlong *)(param_1 + 0x2a8) = lVar6;
    if (local_4c == 0) {
      pcVar14 = (char *)*param_2;
      uVar7 = 0;
      if (pcVar14 < pcVar2) {
        uVar12 = 0xc;
        lVar13 = 0;
        local_60 = 0;
        local_74 = 0;
        iVar5 = 0;
        bVar11 = false;
        lVar6 = 0;
        do {
          cVar1 = *pcVar14;
          if (cVar1 != '<') {
            if (cVar1 == ']') {
              *param_2 = (longlong)(pcVar14 + 1);
              *(int *)(param_1 + 0x2b0) = (int)lVar13;
              iVar5 = (int)param_2[3];
              goto LAB_14005a916;
            }
            if (9 < (byte)(cVar1 - 0x30U)) goto LAB_14005a71b;
            if (!bVar11) {
              uVar4 = (*(code *)param_2[9])(param_2);
              if (-1 < (int)uVar4) {
                local_60 = (ulonglong)uVar4;
                (*(code *)param_2[8])(param_2);
                if ((int)param_2[3] != 0) goto LAB_14005a94e;
                lVar8 = *param_2;
                lVar6 = lVar8 + 1;
                if (uVar4 < (uint)((int)pcVar2 - (int)lVar8)) {
                  *param_2 = lVar8 + (ulonglong)uVar4 + 1;
                  bVar11 = false;
                  goto LAB_14005a72f;
                }
              }
LAB_14005a9bd:
              local_4c = 3;
              goto LAB_14005a910;
            }
            bVar11 = true;
            break;
          }
          if (!bVar11 && lVar6 != 0) goto LAB_14005a9bd;
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_14005a91a;
          uVar15 = (longlong)(~(ulonglong)pcVar14 + *param_2) / 2;
          uVar4 = (uint)uVar15;
          if (uVar4 == 0) {
            local_4c = 3;
            goto LAB_14005a913;
          }
          lVar6 = FUN_14001f231(lVar3,1,local_74,uVar4,lVar6,&local_4c);
          if (local_4c != 0) goto LAB_14005a913;
          *param_2 = (longlong)pcVar14;
          (*(code *)param_2[0xb])(param_2,lVar6,uVar15 & 0xffffffff,&local_50);
          bVar11 = true;
          local_60 = (ulonglong)local_50;
          local_74 = uVar4;
LAB_14005a71b:
          if (lVar6 == 0) {
            local_4c = 3;
            lVar6 = 0;
            goto LAB_14005a913;
          }
LAB_14005a72f:
          uVar15 = local_60;
          if ((((local_60 & 1) == 0) ||
              (uVar15 = (ulonglong)((int)local_60 - 1), *(char *)(lVar6 + uVar15) == '\0')) &&
             (local_60 = uVar15, (int)uVar15 == 0)) break;
          uVar4 = (int)pcVar2 - (int)*param_2;
          lVar13 = (longlong)(int)lVar13;
          uVar15 = 0;
          do {
            uVar9 = uVar12;
            if (iVar5 == 2) {
LAB_14005a8ae:
              iVar5 = 2;
              uVar12 = uVar9;
              if ((int)uVar9 <= lVar13) {
                local_4c = 3;
                goto LAB_14005a913;
              }
            }
            else if (iVar5 == 1) {
LAB_14005a803:
              iVar5 = 1;
              if ((int)uVar12 <= lVar13) {
                uVar9 = uVar12;
                if (uVar7 != 0) {
                  lVar8 = 0;
                  do {
                    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2a8) + 0x18 + lVar8);
                    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                             uVar10 << 0x18;
                    if ((uVar4 < uVar10) || ((int)(uVar4 - uVar10) < (int)uVar9))
                    goto LAB_14005a98c;
                    uVar9 = uVar9 + (uVar10 + 3 & 0xfffffffc);
                    lVar8 = lVar8 + 0x10;
                  } while ((ulonglong)uVar7 << 4 != lVar8);
                }
                uVar9 = uVar9 + 1;
                lVar8 = FUN_14001f231(lVar3,1,uVar12,uVar9,*(longlong *)(param_1 + 0x2a8),&local_4c)
                ;
                *(longlong *)(param_1 + 0x2a8) = lVar8;
                if (local_4c == 0) goto LAB_14005a8ae;
                goto LAB_14005a913;
              }
            }
            else {
              iVar5 = 0;
              if (0xb < lVar13) {
                lVar8 = *(longlong *)(param_1 + 0x2a8);
                uVar7 = (uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x10;
                uVar9 = uVar7 * 0x10 | 0xc;
                if ((int)uVar4 < (int)uVar9) {
LAB_14005a98c:
                  local_4c = 3;
                }
                else {
                  lVar8 = FUN_14001f231(lVar3,1,uVar12,uVar9,lVar8,&local_4c);
                  *(longlong *)(param_1 + 0x2a8) = lVar8;
                  uVar12 = uVar9;
                  if (local_4c == 0) goto LAB_14005a803;
                }
                goto LAB_14005a913;
              }
            }
            *(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + lVar13) =
                 *(undefined1 *)(lVar6 + uVar15);
            lVar13 = lVar13 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != local_60);
          (*(code *)param_2[7])(param_2);
          pcVar14 = (char *)*param_2;
        } while (pcVar14 < pcVar2);
      }
      else {
        lVar6 = 0;
        bVar11 = false;
      }
      local_4c = 3;
      goto LAB_14005a913;
    }
  }
  else {
    local_4c = 3;
  }
  lVar6 = 0;
LAB_14005a910:
  bVar11 = false;
LAB_14005a913:
  *(int *)(param_2 + 3) = local_4c;
  iVar5 = local_4c;
LAB_14005a916:
  if (iVar5 != 0) {
LAB_14005a91a:
    FUN_14001c53d(lVar3,*(longlong *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (bVar11) {
    FUN_14001c53d(lVar3,lVar6);
  }
LAB_14005a94e:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return;
}

