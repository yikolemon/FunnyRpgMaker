/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017c6ce */

undefined8 FUN_18017c6ce(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  
  piVar2 = (int *)*param_1;
  uVar4 = FUN_180177505(piVar2);
  if (uVar4 < 0xb) {
LAB_18017c6f6:
    pcVar11 = "bad SOF len";
  }
  else {
    pcVar11 = *(char **)(piVar2 + 0x30);
    if (pcVar11 < *(char **)(piVar2 + 0x32)) {
LAB_18017c729:
      *(char **)(piVar2 + 0x30) = pcVar11 + 1;
      if (*pcVar11 == '\b') {
        iVar5 = FUN_180177505(piVar2);
        piVar2[1] = iVar5;
        if (iVar5 == 0) {
          pcVar11 = "no header height";
          goto LAB_18017c94e;
        }
        iVar5 = FUN_180177505(piVar2);
        *piVar2 = iVar5;
        if (iVar5 == 0) {
          pcVar11 = "0 width";
          goto LAB_18017c94e;
        }
        if (0x1000000 < (uint)piVar2[1]) {
          pcVar11 = "too large";
          goto LAB_18017c94e;
        }
        pbVar9 = *(byte **)(piVar2 + 0x30);
        if (pbVar9 < *(byte **)(piVar2 + 0x32)) {
LAB_18017c7b8:
          *(byte **)(piVar2 + 0x30) = pbVar9 + 1;
          bVar3 = *pbVar9;
          if ((bVar3 < 5) && ((0x1aU >> (bVar3 & 0x1f) & 1) != 0)) {
            piVar2[2] = (uint)bVar3;
            uVar8 = (ulonglong)(uint)bVar3;
            puVar12 = param_1 + 0x8da;
            do {
              *puVar12 = 0;
              puVar12[3] = 0;
              puVar12 = puVar12 + 0xc;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            if (uVar4 == piVar2[2] * 3 + 8U) {
              *(undefined4 *)(param_1 + 0x90a) = 0;
              uVar8 = (ulonglong)(uint)piVar2[2];
              if (0 < piVar2[2]) {
                puVar13 = (uint *)((longlong)param_1 + 0x46ac);
                lVar18 = 0;
                do {
                  pbVar9 = *(byte **)(piVar2 + 0x30);
                  if (pbVar9 < *(byte **)(piVar2 + 0x32)) {
LAB_18017c85d:
                    *(byte **)(piVar2 + 0x30) = pbVar9 + 1;
                    bVar3 = *pbVar9;
                  }
                  else {
                    if (piVar2[0xc] != 0) {
                      FUN_180176673(piVar2);
                      pbVar9 = *(byte **)(piVar2 + 0x30);
                      goto LAB_18017c85d;
                    }
                    bVar3 = 0;
                  }
                  puVar13[-3] = (uint)bVar3;
                  if ((piVar2[2] == 3) && (bVar3 == (&DAT_1802e0d5a)[lVar18])) {
                    *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
                  }
                  pbVar9 = *(byte **)(piVar2 + 0x30);
                  if (*(byte **)(piVar2 + 0x32) <= pbVar9) {
                    if (piVar2[0xc] == 0) {
                      puVar13[-2] = 0;
                      goto LAB_18017cbb7;
                    }
                    FUN_180176673(piVar2);
                    pbVar9 = *(byte **)(piVar2 + 0x30);
                  }
                  *(byte **)(piVar2 + 0x30) = pbVar9 + 1;
                  bVar3 = *pbVar9;
                  puVar13[-2] = (uint)(bVar3 >> 4);
                  if ((0x4f < bVar3) || (bVar3 >> 4 == 0)) goto LAB_18017cbb7;
                  puVar13[-1] = bVar3 & 0xf;
                  if ((bVar3 & 0xf) - 5 < 0xfffffffc) goto LAB_18017cb87;
                  pbVar9 = *(byte **)(piVar2 + 0x30);
                  if (pbVar9 < *(byte **)(piVar2 + 0x32)) {
LAB_18017c909:
                    *(byte **)(piVar2 + 0x30) = pbVar9 + 1;
                    bVar3 = *pbVar9;
                    *puVar13 = (uint)bVar3;
                    if (3 < bVar3) {
                      pcVar11 = "bad TQ";
                      goto LAB_18017c94e;
                    }
                  }
                  else {
                    if (piVar2[0xc] != 0) {
                      FUN_180176673(piVar2);
                      pbVar9 = *(byte **)(piVar2 + 0x30);
                      goto LAB_18017c909;
                    }
                    *puVar13 = 0;
                  }
                  lVar18 = lVar18 + 1;
                  uVar8 = (ulonglong)piVar2[2];
                  puVar13 = puVar13 + 0x18;
                } while (lVar18 < (longlong)uVar8);
              }
              iVar5 = FUN_180178f1f(*piVar2,piVar2[1],uVar8 & 0xffffffff,0);
              if (iVar5 == 0) {
                FUN_1801765d0("too large");
                return 0;
              }
              uVar17 = 1;
              uVar4 = 1;
              if (0 < (int)uVar8) {
                lVar18 = (uVar8 & 0xffffffff) * 0x60;
                uVar17 = 1;
                lVar10 = 0;
                uVar4 = 1;
                do {
                  uVar6 = *(uint *)((longlong)param_1 + lVar10 + 0x46a4);
                  uVar7 = *(uint *)((longlong)param_1 + lVar10 + 0x46a8);
                  if ((int)uVar4 < (int)uVar6) {
                    uVar4 = uVar6;
                  }
                  if ((int)uVar17 < (int)uVar7) {
                    uVar17 = uVar7;
                  }
                  lVar10 = lVar10 + 0x60;
                } while (lVar18 != lVar10);
                lVar10 = 0;
                do {
                  if ((int)uVar4 % *(int *)((longlong)param_1 + lVar10 + 0x46a4) != 0)
                  goto LAB_18017cbb7;
                  if ((int)uVar17 % *(int *)((longlong)param_1 + lVar10 + 0x46a8) != 0)
                  goto LAB_18017cb87;
                  lVar10 = lVar10 + 0x60;
                } while (lVar18 != lVar10);
              }
              *(uint *)(param_1 + 0x8d1) = uVar4;
              *(uint *)((longlong)param_1 + 0x468c) = uVar17;
              *(uint *)(param_1 + 0x8d3) = uVar4 * 8;
              *(uint *)((longlong)param_1 + 0x469c) = uVar17 * 8;
              uVar6 = ((*piVar2 + uVar4 * 8) - 1) / (uVar4 * 8);
              *(uint *)(param_1 + 0x8d2) = uVar6;
              uVar7 = ((piVar2[1] + uVar17 * 8) - 1) / (uVar17 * 8);
              *(uint *)((longlong)param_1 + 0x4694) = uVar7;
              if (piVar2[2] < 1) {
                return 1;
              }
              piVar15 = (int *)((longlong)param_1 + 0x46fc);
              lVar18 = 0;
              while( true ) {
                piVar15[-0x10] = (*piVar2 * piVar15[-0x16] + (uVar4 - 1)) / uVar4;
                piVar15[-0xf] = (piVar2[1] * piVar15[-0x15] + (uVar17 - 1)) / uVar17;
                iVar14 = piVar15[-0x16] * uVar6;
                iVar5 = iVar14 * 8;
                piVar15[-0xe] = iVar5;
                iVar16 = piVar15[-0x15] * uVar7;
                iVar1 = iVar16 * 8;
                piVar15[-0xd] = iVar1;
                lVar10 = FUN_180178f9d(iVar5,iVar1,0xf);
                piVar15[-7] = 0;
                piVar15[-6] = 0;
                piVar15[-5] = 0;
                piVar15[-4] = 0;
                piVar15[-3] = 0;
                piVar15[-2] = 0;
                *(longlong *)(piVar15 + -9) = lVar10;
                if (lVar10 == 0) break;
                *(ulonglong *)(piVar15 + -0xb) = lVar10 + 0xfU & 0xfffffffffffffff0;
                if (*(int *)(param_1 + 0x906) != 0) {
                  piVar15[-1] = iVar14;
                  *piVar15 = iVar16;
                  lVar10 = FUN_180178ee1(iVar5,iVar1,2,0xf);
                  *(longlong *)(piVar15 + -7) = lVar10;
                  if (lVar10 == 0) break;
                  *(ulonglong *)(piVar15 + -3) = lVar10 + 0xfU & 0xfffffffffffffff0;
                }
                lVar18 = lVar18 + 1;
                piVar15 = piVar15 + 0x18;
                if (piVar2[2] <= lVar18) {
                  return 1;
                }
              }
              FUN_1801765d0("outofmem");
              FUN_18017ce05(param_1,(int)lVar18 + 1);
              return 0;
            }
            goto LAB_18017c6f6;
          }
        }
        else if (piVar2[0xc] != 0) {
          FUN_180176673(piVar2);
          pbVar9 = *(byte **)(piVar2 + 0x30);
          goto LAB_18017c7b8;
        }
        pcVar11 = "bad component count";
        goto LAB_18017c94e;
      }
    }
    else if (piVar2[0xc] != 0) {
      FUN_180176673(piVar2);
      pcVar11 = *(char **)(piVar2 + 0x30);
      goto LAB_18017c729;
    }
    pcVar11 = "only 8-bit";
  }
  goto LAB_18017c94e;
LAB_18017cbb7:
  pcVar11 = "bad H";
  goto LAB_18017c94e;
LAB_18017cb87:
  pcVar11 = "bad V";
LAB_18017c94e:
  FUN_1801765d0(pcVar11);
  return 0;
}

