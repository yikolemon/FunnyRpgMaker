/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101765db */

undefined4 __fastcall FUN_101765db(int *param_1)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_38;
  
  piVar1 = (int *)*param_1;
  uVar4 = FUN_10171b39();
  if (10 < uVar4) {
    pcVar5 = (char *)piVar1[0x2b];
    if ((char *)piVar1[0x2c] <= pcVar5) {
      if (piVar1[8] == 0) goto LAB_10176808;
      FUN_10170e8c();
      pcVar5 = (char *)piVar1[0x2b];
    }
    piVar1[0x2b] = (int)(pcVar5 + 1);
    if (*pcVar5 == '\b') {
      iVar6 = FUN_10171b39();
      piVar1[1] = iVar6;
      if (iVar6 != 0) {
        iVar6 = FUN_10171b39();
        *piVar1 = iVar6;
        if ((iVar6 != 0) && ((uint)piVar1[1] < 0x1000001)) {
          pbVar8 = (byte *)piVar1[0x2b];
          if ((byte *)piVar1[0x2c] <= pbVar8) {
            if (piVar1[8] == 0) goto LAB_10176808;
            FUN_10170e8c();
            pbVar8 = (byte *)piVar1[0x2b];
          }
          piVar1[0x2b] = (int)(pbVar8 + 1);
          uVar7 = (uint)*pbVar8;
          if ((uVar7 < 5) && ((0x1aU >> (uVar7 & 0x1f) & 1) != 0)) {
            piVar1[2] = uVar7;
            piVar14 = param_1 + 0x11b2;
            do {
              *piVar14 = 0;
              piVar14[3] = 0;
              piVar14 = piVar14 + 0x12;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (uVar4 == piVar1[2] * 3 + 8U) {
              param_1[0x11fb] = 0;
              local_38 = piVar1[2];
              if (0 < local_38) {
                puVar9 = (uint *)(param_1 + 0x11aa);
                iVar6 = 0;
                do {
                  pbVar8 = (byte *)piVar1[0x2b];
                  if (pbVar8 < (byte *)piVar1[0x2c]) {
LAB_1017672a:
                    piVar1[0x2b] = (int)(pbVar8 + 1);
                    bVar3 = *pbVar8;
                  }
                  else {
                    if (piVar1[8] != 0) {
                      FUN_10170e8c();
                      pbVar8 = (byte *)piVar1[0x2b];
                      goto LAB_1017672a;
                    }
                    bVar3 = 0;
                  }
                  puVar9[-3] = (uint)bVar3;
                  if ((piVar1[2] == 3) && (bVar3 == (&DAT_102bb04e)[iVar6])) {
                    param_1[0x11fb] = param_1[0x11fb] + 1;
                  }
                  pbVar8 = (byte *)piVar1[0x2b];
                  if ((byte *)piVar1[0x2c] <= pbVar8) {
                    if (piVar1[8] == 0) {
                      puVar9[-2] = 0;
                      goto LAB_10176808;
                    }
                    FUN_10170e8c();
                    pbVar8 = (byte *)piVar1[0x2b];
                  }
                  piVar1[0x2b] = (int)(pbVar8 + 1);
                  bVar3 = *pbVar8;
                  puVar9[-2] = (uint)(bVar3 >> 4);
                  if (((0x4f < bVar3) || (bVar3 >> 4 == 0)) ||
                     (uVar4 = bVar3 & 0xf, puVar9[-1] = uVar4, uVar4 - 5 < 0xfffffffc))
                  goto LAB_10176808;
                  pbVar8 = (byte *)piVar1[0x2b];
                  if (pbVar8 < (byte *)piVar1[0x2c]) {
LAB_101767cc:
                    piVar1[0x2b] = (int)(pbVar8 + 1);
                    bVar3 = *pbVar8;
                    *puVar9 = (uint)bVar3;
                    if (3 < bVar3) goto LAB_10176808;
                  }
                  else {
                    if (piVar1[8] != 0) {
                      FUN_10170e8c();
                      pbVar8 = (byte *)piVar1[0x2b];
                      goto LAB_101767cc;
                    }
                    *puVar9 = 0;
                  }
                  iVar6 = iVar6 + 1;
                  local_38 = piVar1[2];
                  puVar9 = puVar9 + 0x12;
                } while (iVar6 < local_38);
              }
              iVar6 = FUN_1017315f(local_38,0);
              if (iVar6 != 0) {
                uVar7 = 1;
                uVar4 = uVar7;
                if (0 < local_38) {
                  puVar9 = (uint *)(param_1 + 0x11a9);
                  uVar4 = 1;
                  iVar6 = local_38;
                  uVar7 = uVar4;
                  do {
                    if ((int)uVar4 < (int)puVar9[-1]) {
                      uVar4 = puVar9[-1];
                    }
                    if ((int)uVar7 < (int)*puVar9) {
                      uVar7 = *puVar9;
                    }
                    puVar9 = puVar9 + 0x12;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  piVar14 = param_1 + 0x11a9;
                  do {
                    if (((int)uVar4 % piVar14[-1] != 0) || ((int)uVar7 % *piVar14 != 0))
                    goto LAB_10176808;
                    piVar14 = piVar14 + 0x12;
                    local_38 = local_38 + -1;
                  } while (local_38 != 0);
                }
                param_1[0x11a1] = uVar4;
                param_1[0x11a2] = uVar7;
                param_1[0x11a5] = uVar4 * 8;
                param_1[0x11a6] = uVar7 * 8;
                uVar10 = ((*piVar1 + uVar4 * 8) - 1) / (uVar4 * 8);
                param_1[0x11a3] = uVar10;
                uVar11 = ((piVar1[1] + uVar7 * 8) - 1) / (uVar7 * 8);
                param_1[0x11a4] = uVar11;
                if (piVar1[2] < 1) {
                  return 1;
                }
                piVar14 = param_1 + 0x11b8;
                iVar6 = 1;
                while( true ) {
                  piVar14[-10] = (*piVar1 * piVar14[-0x10] + (uVar4 - 1)) / uVar4;
                  piVar14[-9] = (piVar1[1] * piVar14[-0xf] + (uVar7 - 1)) / uVar7;
                  iVar15 = piVar14[-0x10] * uVar10;
                  piVar14[-8] = iVar15 * 8;
                  iVar12 = piVar14[-0xf] * uVar11;
                  piVar14[-7] = iVar12 * 8;
                  piVar14[-2] = 0;
                  piVar14[-4] = 0;
                  piVar14[-3] = 0;
                  iVar13 = FUN_101731c8(0xf);
                  piVar14[-5] = iVar13;
                  if (iVar13 == 0) break;
                  piVar14[-6] = iVar13 + 0xfU & 0xfffffff0;
                  if (param_1[0x11f3] != 0) {
                    piVar14[-1] = iVar15;
                    *piVar14 = iVar12;
                    iVar12 = FUN_10173127(2,0xf);
                    piVar14[-4] = iVar12;
                    if (iVar12 == 0) break;
                    piVar14[-2] = iVar12 + 0xfU & 0xfffffff0;
                  }
                  piVar14 = piVar14 + 0x12;
                  bVar2 = piVar1[2] <= iVar6;
                  iVar6 = iVar6 + 1;
                  if (bVar2) {
                    return 1;
                  }
                }
                FUN_10170e07();
                FUN_10176c42();
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_10176808:
  FUN_10170e07();
  return 0;
}

