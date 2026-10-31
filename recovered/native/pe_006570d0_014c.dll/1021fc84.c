/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021fc84 */

undefined4 __fastcall FUN_1021fc84(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  int local_40;
  undefined4 *local_34;
  int local_30;
  
  iVar2 = param_2[1];
  iVar3 = param_1[1];
  uVar7 = 6;
  if (iVar3 <= iVar2) {
    iVar4 = param_2[2];
    iVar5 = *param_1;
    if ((iVar5 <= iVar4) && (cVar1 = *(char *)((int)param_1 + 0x12), cVar1 != '\0')) {
      iVar8 = (iVar2 - iVar3) / 2;
      iVar9 = (iVar4 - iVar5) / 2;
      local_34 = (undefined4 *)*param_2;
      iVar6 = param_1[3];
      if (cVar1 == '\x01') {
        if (0 < iVar4) {
          local_30 = 0;
          do {
            if (0 < iVar2) {
              uVar12 = local_30 - iVar9;
              uVar13 = -iVar8;
              iVar10 = iVar2;
              puVar14 = local_34;
              do {
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                if (((int)uVar13 < iVar3 && -1 < (int)uVar13) &&
                    ((int)uVar12 < iVar5 && -1 < (int)uVar12)) {
                  uVar11 = uVar12;
                  if (*(char *)((int)param_2 + 0x41) != '\0') {
                    uVar11 = ~uVar12 + iVar5;
                  }
                  *(char *)(puVar14 + 3) =
                       -((*(byte *)((uVar13 >> 3) + uVar11 * param_1[2] + iVar6) >>
                          ((byte)~(byte)uVar13 & 7) & 1) != 0);
                }
                uVar13 = uVar13 + 1;
                puVar14 = puVar14 + 4;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            local_30 = local_30 + 1;
            local_34 = local_34 + iVar2 * 4;
          } while (local_30 != iVar4);
        }
      }
      else {
        if (cVar1 != '\x02') {
          return 7;
        }
        if (0 < iVar4) {
          local_40 = 0;
          do {
            if (0 < iVar2) {
              uVar13 = local_40 - iVar9;
              iVar10 = -iVar8;
              puVar14 = local_34;
              iVar15 = iVar2;
              do {
                *puVar14 = 0;
                puVar14[1] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                if ((iVar10 < iVar3 && -1 < iVar10) && ((int)uVar13 < iVar5 && -1 < (int)uVar13)) {
                  uVar12 = uVar13;
                  if (*(char *)((int)param_2 + 0x41) != '\0') {
                    uVar12 = ~uVar13 + iVar5;
                  }
                  *(undefined1 *)(puVar14 + 3) = *(undefined1 *)(iVar10 + uVar12 * iVar3 + iVar6);
                }
                iVar10 = iVar10 + 1;
                puVar14 = puVar14 + 4;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            local_40 = local_40 + 1;
            local_34 = local_34 + iVar2 * 4;
          } while (local_40 != iVar4);
        }
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}

