/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140311fd5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140311fd5(int *param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint7 uVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  ulonglong local_70;
  
  local_70 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  lVar11 = *(longlong *)(param_1 + 10);
  lVar3 = *(longlong *)(param_1 + 0xc);
  lVar4 = *(longlong *)(lVar11 + 0x1608);
  lVar15 = *(longlong *)(lVar11 + 0x24f8);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0x23a) == '\x01')) {
    FUN_14037a238(lVar15);
  }
  uVar13 = param_1[3];
  uVar10 = (ulonglong)uVar13;
  if (uVar13 != 0) {
    cVar5 = FUN_14033d082();
    if (cVar5 == '\0') {
      uVar14 = (uint7)(uint3)(uVar13 >> 8);
      if (*(int *)(lVar3 + 0xc) == 0 && lVar15 != 0) {
        if (*(char *)(lVar15 + 0x245) == '\0') {
          iVar6 = *(int *)(lVar3 + 0x10);
          *param_1 = iVar6;
          iVar6 = FUN_1403101d0(iVar6 + 1,uVar10);
          param_1[1] = iVar6;
          uVar10 = CONCAT71(uVar14,1);
          if (*param_1 < iVar6) {
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
          }
          goto LAB_140312042;
        }
LAB_1403120ca:
        *(double *)(param_1 + 6) = (double)*(float *)(lVar4 + 0x15c);
        fVar18 = (float)param_1[4];
        if (fVar18 <= 0.0) {
          local_80 = CONCAT44(*(int *)(lVar3 + 0x10) + 1,*(int *)(lVar3 + 0x10));
          local_78 = 0;
          local_76 = 0;
          FUN_14033d0ac(lVar3 + 0x18);
          iVar6 = FUN_1403118b9(**(undefined4 **)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x10));
          *param_1 = iVar6;
          iVar6 = FUN_1403101d0(*(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 4),param_1[3]);
          param_1[1] = iVar6;
          *(undefined4 *)(lVar3 + 0xc) = 1;
          uVar10 = CONCAT71(uVar14,1);
          goto LAB_140312042;
        }
LAB_1403120e5:
        iVar6 = param_1[1];
        *(double *)(param_1 + 8) =
             (double)*(float *)(lVar3 + 8) - (double)fVar18 * (double)*(int *)(lVar3 + 0x10);
        if (*(char *)(lVar11 + 0x2a40) == '\x01') {
          iVar7 = param_1[3];
          iVar8 = *(int *)(lVar3 + 0x18);
          if (iVar8 == *(int *)(lVar3 + 0x1c)) {
            if (iVar8 == 0) {
              iVar12 = 8;
            }
            else {
              iVar12 = iVar8 / 2 + iVar8;
            }
            iVar16 = iVar8 + 1;
            if (iVar8 + 1 < iVar12) {
              iVar16 = iVar12;
            }
            uVar10 = FUN_14030fcc8((longlong)iVar16 * 0xc);
            if (*(longlong *)(lVar3 + 0x20) != 0) {
              FUN_1404b97c0(uVar10,*(longlong *)(lVar3 + 0x20),
                            (longlong)*(int *)(lVar3 + 0x18) * 0xc);
              FUN_14030fda4(*(undefined8 *)(lVar3 + 0x20));
            }
            *(ulonglong *)(lVar3 + 0x20) = uVar10;
            *(int *)(lVar3 + 0x1c) = iVar16;
            iVar8 = *(int *)(lVar3 + 0x18);
          }
          else {
            uVar10 = *(ulonglong *)(lVar3 + 0x20);
          }
          lVar11 = (longlong)iVar8;
          *(undefined4 *)(uVar10 + lVar11 * 0xc) = 0;
          *(int *)(uVar10 + 4 + lVar11 * 0xc) = iVar7;
          *(undefined2 *)(uVar10 + 8 + lVar11 * 0xc) = 0;
          *(undefined1 *)(uVar10 + 10 + lVar11 * 0xc) = 0;
        }
        else {
          bVar17 = false;
          cVar5 = '\0';
          if (*(char *)(lVar11 + 0x22a1) == '\x01') {
            if (*(longlong *)(lVar11 + 0x2200) == 0) {
              bVar17 = false;
              cVar5 = '\0';
            }
            else {
              bVar17 = false;
              if (*(longlong *)(*(longlong *)(lVar11 + 0x2200) + 0x438) ==
                  *(longlong *)(lVar4 + 0x438)) {
                cVar5 = -(*(int *)(lVar11 + 0x22b8) == 2);
                lVar15 = lVar3 + 0x18;
                bVar17 = *(int *)(lVar11 + 0x22b8) == 3;
                local_80 = CONCAT44((int)*(float *)(lVar11 + 0x22c8),
                                    (int)*(float *)(lVar11 + 0x22c0));
                local_78 = CONCAT11(cVar5,1);
                local_76 = bVar17;
                FUN_140311d76(lVar15);
                if (*(float *)(lVar11 + 0x22cc) < *(float *)(lVar11 + 0x22d4) ||
                    *(float *)(lVar11 + 0x22cc) == *(float *)(lVar11 + 0x22d4)) {
                  if (*(float *)(lVar11 + 0x22d0) <= *(float *)(lVar11 + 0x22d8)) {
                    local_80 = CONCAT44((int)*(float *)(lVar11 + 0x22d8),
                                        (int)*(float *)(lVar11 + 0x22d0));
                    local_78 = CONCAT11(cVar5,1);
                    local_76 = bVar17;
                    FUN_140311d76(lVar15);
                  }
                }
                if (((*(byte *)(lVar11 + 0x22a5) & 4) != 0) && (*(int *)(lVar11 + 0x22e0) == -1)) {
                  local_80 = CONCAT44(param_1[3],param_1[3] + -1);
                  local_78 = 0;
                  local_76 = 0;
                  FUN_140311d76(lVar15);
                }
              }
            }
          }
          if ((*(int *)(lVar11 + 0x21f8) != 0) &&
             (*(int *)(lVar4 + 0x450) == *(int *)(lVar11 + 0x21f8))) {
            local_80 = CONCAT44((int)(*(float *)(lVar4 + 0x464) + *(float *)(lVar4 + 0x16c)),
                                (int)(*(float *)(lVar4 + 0x45c) + *(float *)(lVar4 + 0x16c)));
            local_78 = 1;
            local_76 = 0;
            FUN_140311d76(lVar3 + 0x18);
          }
          fVar18 = *(float *)(lVar4 + 700);
          fVar19 = *(float *)(lVar4 + 0x2c4);
          if ((*(char *)(lVar11 + 0x25b4) == '\x01') && (*(longlong *)(lVar11 + 0x25d8) == lVar4)) {
            fVar1 = *(float *)(lVar11 + 0xe08);
            fVar18 = fVar18 - fVar1;
            fVar19 = fVar19 + fVar1;
            if (*(char *)(lVar11 + 0x25e0) == '\x01') {
              local_80 = CONCAT44((int)(*(float *)(lVar11 + 0x25f0) + fVar1),
                                  (int)(*(float *)(lVar11 + 0x25e8) - fVar1));
              local_78 = 1;
              local_76 = 0;
              FUN_140311d76(lVar3 + 0x18);
            }
          }
          iVar7 = *(int *)(lVar3 + 0x18);
          if (iVar7 == *(int *)(lVar3 + 0x1c)) {
            if (iVar7 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar7 / 2 + iVar7;
            }
            iVar12 = iVar7 + 1;
            if (iVar7 + 1 < iVar8) {
              iVar12 = iVar8;
            }
            uVar10 = FUN_14030fcc8((longlong)iVar12 * 0xc);
            if (*(longlong *)(lVar3 + 0x20) != 0) {
              FUN_1404b97c0(uVar10,*(longlong *)(lVar3 + 0x20),
                            (longlong)*(int *)(lVar3 + 0x18) * 0xc);
              FUN_14030fda4(*(undefined8 *)(lVar3 + 0x20));
            }
            *(ulonglong *)(lVar3 + 0x20) = uVar10;
            *(int *)(lVar3 + 0x1c) = iVar12;
            iVar7 = *(int *)(lVar3 + 0x18);
          }
          else {
            uVar10 = *(ulonglong *)(lVar3 + 0x20);
          }
          lVar11 = (longlong)iVar7;
          *(ulonglong *)(uVar10 + lVar11 * 0xc) = CONCAT44((int)fVar19,(int)fVar18);
          *(undefined1 *)(uVar10 + 8 + lVar11 * 0xc) = 1;
          *(char *)(uVar10 + 9 + lVar11 * 0xc) = cVar5;
          *(bool *)(uVar10 + 10 + lVar11 * 0xc) = bVar17;
        }
        iVar7 = *(int *)(lVar3 + 0x18) + 1;
        *(int *)(lVar3 + 0x18) = iVar7;
        dVar2 = DAT_1404efae8;
        if (iVar7 != 0) {
          lVar11 = *(longlong *)(lVar3 + 0x20);
          lVar15 = 0;
          do {
            if (*(char *)(lVar11 + 8 + lVar15) == '\x01') {
              uVar13 = (uint)((((double)*(int *)(lVar11 + 4 + lVar15) -
                               (double)*(float *)(lVar4 + 0x15c)) - (double)*(float *)(lVar3 + 8)) /
                              (double)(float)param_1[4] + dVar2);
              uVar10 = (ulonglong)uVar13;
              iVar8 = FUN_14033d1af(*(char *)(lVar11 + 9 + lVar15) + iVar6 +
                                    (int)((((double)*(int *)(lVar11 + lVar15) -
                                           (double)*(float *)(lVar4 + 0x15c)) -
                                          (double)*(float *)(lVar3 + 8)) / (double)(float)param_1[4]
                                         ),iVar6,param_1[3] + -1);
              *(int *)(lVar11 + lVar15) = iVar8;
              uVar9 = FUN_14033d1af(*(char *)(lVar11 + 10 + lVar15) + iVar6 + uVar13,iVar8 + 1,
                                    param_1[3]);
              *(undefined4 *)(lVar11 + 4 + lVar15) = uVar9;
              *(undefined1 *)(lVar11 + 8 + lVar15) = 0;
            }
            lVar15 = lVar15 + 0xc;
          } while ((longlong)iVar7 * 0xc != lVar15);
        }
        FUN_14033d1be(lVar3 + 0x18,*(undefined4 *)(lVar3 + 0xc));
      }
      else {
        if (*(int *)(lVar3 + 0xc) == 0) goto LAB_1403120ca;
        if ((float)param_1[4] <= 0.0) {
          dVar2 = *(double *)(param_1 + 6);
          if ((_DAT_1404efae0 <= (float)((uint)(float)dVar2 & _DAT_1404bda20)) ||
             (_DAT_1404efae0 <= (float)(_DAT_1404bda20 & (uint)*(float *)(lVar4 + 0x15c)))) {
            fVar18 = *(float *)(lVar4 + 0x18c) + *(float *)(lVar11 + 0xe08);
            param_1[4] = (int)fVar18;
            *(float *)(lVar4 + 0x15c) = (float)(dVar2 + (double)fVar18);
            fVar18 = (float)param_1[4];
          }
          else {
            fVar18 = (float)((double)*(float *)(lVar4 + 0x15c) - dVar2) /
                     (float)(param_1[1] - *param_1);
            param_1[4] = (int)fVar18;
          }
          if (((fVar18 == 0.0) && (!NAN(fVar18))) && (param_1[3] == 0x7fffffff)) goto LAB_140312040;
          if (fVar18 <= 0.0) {
            FUN_140312b68(" be deleted.\nThis operation cannot be undone!");
            goto LAB_140312040;
          }
          goto LAB_1403120e5;
        }
        iVar6 = param_1[1];
      }
      iVar7 = *(int *)(lVar3 + 0xc);
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar7) {
          if (param_1[3] != 0x7fffffff) {
            FUN_140311c92(param_1);
          }
          goto LAB_140312040;
        }
        iVar7 = FUN_1403118b9(*(undefined4 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar7 * 0xc),
                              iVar6);
        *param_1 = iVar7;
        iVar7 = FUN_1403101d0(*(undefined4 *)
                               (*(longlong *)(lVar3 + 0x20) + 4 +
                               (longlong)*(int *)(lVar3 + 0xc) * 0xc),param_1[3]);
        param_1[1] = iVar7;
        iVar7 = *(int *)(lVar3 + 0xc) + 1;
        *(int *)(lVar3 + 0xc) = iVar7;
      } while (param_1[1] <= *param_1);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      if (iVar6 < *param_1) {
        FUN_140311c92(param_1);
      }
      goto LAB_140312042;
    }
  }
LAB_140312040:
  uVar10 = 0;
LAB_140312042:
  if (ram0x000140613b10 == (local_70 ^ (ulonglong)auStack_a8)) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_70 ^ (ulonglong)auStack_a8);
}

