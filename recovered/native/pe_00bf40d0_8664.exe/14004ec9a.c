/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ec9a */

int FUN_14004ec9a(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStackY_b8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  local_4c = 0;
  if (param_3 == 0 || param_4 != (int *)0x0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *param_1 = 0;
    if (((param_3 == 0) || (param_3 == *(ushort *)(lVar5 + 0x1120))) &&
       (param_2 < *(uint *)(lVar5 + 0x1110))) {
      lVar7 = *(longlong *)(lVar5 + 0x1118);
      uVar17 = *(int *)(lVar7 + (ulonglong)param_2 * 0x10) + 1;
      lVar11 = FUN_14001f231(lVar6,4,*(uint *)(param_1 + 0x20),uVar17,*(longlong *)(param_1 + 0x28),
                             &local_4c);
      *(longlong *)(param_1 + 0x28) = lVar11;
      iVar10 = local_4c;
      if (local_4c == 0) {
        *(uint *)(param_1 + 0x20) = uVar17;
        if (uVar17 != 0) {
          uVar16 = 0;
          do {
            if (uVar16 == 0) {
              **(undefined4 **)(param_1 + 0x28) = 0x10000;
            }
            else {
              uVar1 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)param_2 * 0x10 + 8) + -4 +
                               uVar16 * 4);
              if (*(uint *)(lVar5 + 0x1124) <= uVar1) goto LAB_14004eed1;
              lVar11 = *(longlong *)(param_1 + 0x28);
              if (param_3 == 0) {
LAB_14004ee5b:
                *(undefined4 *)(lVar11 + uVar16 * 4) = 0;
              }
              else {
                lVar8 = *(longlong *)(lVar5 + 0x1128);
                *(undefined4 *)(lVar11 + uVar16 * 4) = 0x10000;
                lVar11 = 0;
                piVar13 = param_4;
                do {
                  lVar9 = *(longlong *)(lVar8 + (ulonglong)uVar1 * 8);
                  iVar10 = *(int *)(lVar9 + 4 + lVar11);
                  if ((iVar10 != 0) && (iVar2 = *piVar13, iVar10 != iVar2)) {
                    iVar3 = *(int *)(lVar9 + lVar11);
                    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
                      iVar4 = *(int *)(lVar9 + 8 + lVar11);
                      uVar15 = iVar4 - iVar2;
                      if (uVar15 != 0 && iVar2 <= iVar4) {
                        if (iVar2 < iVar10) {
                          uVar14 = iVar10 - iVar3;
                          uVar15 = iVar2 - iVar3;
                        }
                        else {
                          uVar14 = iVar4 - iVar10;
                        }
                        iVar10 = FUN_14001de7c(*(uint *)(*(longlong *)(param_1 + 0x28) + uVar16 * 4)
                                               ,uVar15,uVar14);
                        *(int *)(*(longlong *)(param_1 + 0x28) + uVar16 * 4) = iVar10;
                        goto LAB_14004ee3c;
                      }
                    }
                    lVar11 = *(longlong *)(param_1 + 0x28);
                    goto LAB_14004ee5b;
                  }
LAB_14004ee3c:
                  lVar11 = lVar11 + 0xc;
                  piVar13 = piVar13 + 1;
                } while ((ulonglong)param_3 * 0xc != lVar11);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar17);
        }
        *(uint *)(param_1 + 0x10) = param_2;
        if (param_3 != 0) {
          puVar12 = (undefined8 *)
                    FUN_14001f231(lVar6,4,*(uint *)(param_1 + 0x14),param_3,
                                  *(longlong *)(param_1 + 0x18),&local_4c);
          *(undefined8 **)(param_1 + 0x18) = puVar12;
          iVar10 = local_4c;
          if (local_4c != 0) goto LAB_14004eed6;
          FUN_1400b3550(puVar12,(undefined8 *)param_4,(ulonglong)param_3 << 2);
        }
        *(uint *)(param_1 + 0x14) = param_3;
        *param_1 = 1;
        iVar10 = local_4c;
      }
      goto LAB_14004eed6;
    }
  }
LAB_14004eed1:
  iVar10 = 3;
LAB_14004eed6:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return iVar10;
}

