/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dab73 */

void __fastcall FUN_101dab73(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  bool bVar6;
  short *psVar7;
  byte bVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  short *local_28;
  int local_24;
  undefined4 local_18;
  
  psVar4 = *(short **)(param_1 + 0x48 + param_2 * 0x544);
  if (psVar4 == (short *)0x0) {
    psVar19 = (short *)0x0;
LAB_101dad21:
    bVar8 = 0;
    local_24 = 0;
  }
  else {
    iVar11 = *(int *)(param_2 * 0x544 + param_1 + 0x40);
    psVar19 = psVar4 + iVar11 * 0x16;
    if (iVar11 == 0) goto LAB_101dad21;
    local_28 = (short *)0x0;
    psVar15 = psVar4;
    do {
      if ((*(byte *)(psVar15 + 6) & 4) == 0) {
        psVar16 = *(short **)(psVar15 + 0xc);
        if (*(int *)(psVar15 + 10) == 0) {
          if ((psVar16 != (short *)0x0) && (*(int *)(psVar16 + 10) != 0)) {
            *(undefined4 *)(psVar16 + 4) = *(undefined4 *)(*(int *)(psVar16 + 10) + 8);
            *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
            psVar9 = psVar16;
            psVar16 = psVar15;
            goto LAB_101dabf1;
          }
        }
        else {
          *(undefined4 *)(psVar15 + 4) = *(undefined4 *)(*(int *)(psVar15 + 10) + 8);
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
          psVar9 = psVar15;
          if (psVar16 != (short *)0x0) {
LAB_101dabf1:
            if (*(int *)(psVar16 + 10) == 0) {
              FUN_101dbc2b(psVar9,psVar16);
              *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
            }
          }
          if (local_28 == (short *)0x0) {
            local_28 = psVar15;
          }
        }
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar19);
    local_18 = 0;
    iVar11 = 0;
    bVar6 = false;
    local_24 = 0;
    psVar15 = psVar4;
    do {
      if ((*(byte *)(psVar15 + 6) & 4) == 0) {
        psVar16 = *(short **)(psVar15 + 0xc);
        if (psVar16 == (short *)0x0) {
          local_24 = local_24 + 1;
        }
        else if ((bVar6) &&
                ((*(int *)(psVar15 + 4) < iVar11 + 0x40 || (*(int *)(psVar16 + 4) < iVar11 + 0x40)))
                ) {
          local_24 = local_24 + 1;
LAB_101dac57:
          bVar6 = true;
        }
        else if (*(int *)(psVar16 + 10) == 0) {
          if (psVar16 < psVar15) {
            FUN_101dbc2b(psVar16,psVar15);
            *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
            iVar11 = *(int *)(psVar15 + 4);
            goto LAB_101dac57;
          }
          if ((param_2 == 0) && (local_28 == (short *)0x0)) {
            local_18 = FUN_101dbc4d(psVar16,0,0);
          }
          else {
            FUN_101dbc4d(psVar16,local_18,param_2);
          }
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
          *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
          iVar11 = *(int *)(psVar16 + 4);
          bVar6 = true;
          local_28 = psVar15;
        }
        else {
          FUN_101dbc2b(psVar16,psVar15);
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
        }
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar19);
    bVar8 = 1;
  }
  if (param_2 == 0) {
    iVar11 = (int)psVar19 - (int)psVar4;
    if (iVar11 == 0x108) {
      iVar14 = 0xb0;
      iVar12 = 0x58;
      psVar15 = psVar4;
    }
    else {
      if (iVar11 != 0x210) goto LAB_101dad3b;
      iVar14 = 0x18c;
      iVar12 = 0xdc;
      psVar15 = psVar4 + 0x16;
    }
    uVar13 = *(int *)((int)psVar4 + iVar12 + 4) * 2 -
             (*(int *)(psVar15 + 2) + *(int *)((int)psVar4 + iVar14 + 4));
    uVar17 = -uVar13;
    if ((int)uVar17 < 0) {
      uVar17 = uVar13;
    }
    if ((*(short **)(psVar15 + 0xc) == psVar15 + 0x16) &&
       (*(int *)((int)psVar4 + iVar12 + 0x18) == (int)psVar4 + iVar12 + 0x2c)) {
      iVar5 = *(int *)((int)psVar4 + iVar14 + 0x18);
      if ((iVar5 == (int)psVar4 + iVar14 + 0x2c) && (uVar17 < 8)) {
        iVar18 = *(int *)((int)psVar4 + iVar12 + 8) * 2 - *(int *)(psVar15 + 4);
        iVar12 = *(int *)((int)psVar4 + iVar14 + 8) - iVar18;
        *(int *)((int)psVar4 + iVar14 + 8) = iVar18;
        piVar1 = (int *)(iVar5 + 8);
        *piVar1 = *piVar1 - iVar12;
        if (iVar11 == 0x210) {
          *(int *)(psVar4 + 0xb4) = *(int *)(psVar4 + 0xb4) - iVar12;
          *(int *)(psVar4 + 0xf6) = *(int *)(psVar4 + 0xf6) - iVar12;
        }
        pbVar2 = (byte *)((int)psVar4 + iVar14 + 0xc);
        *pbVar2 = *pbVar2 | 4;
        iVar11 = *(int *)((int)psVar4 + iVar14 + 0x18);
        if (iVar11 != 0) {
          pbVar2 = (byte *)(iVar11 + 0xc);
          *pbVar2 = *pbVar2 | 4;
        }
      }
    }
  }
LAB_101dad3b:
  psVar15 = psVar4;
  if (local_24 != 0 && !(bool)(bVar8 ^ 1)) {
    do {
      if (((*(byte *)(psVar15 + 6) & 4) == 0) && (*(int *)(psVar15 + 0xe) != 0)) {
        FUN_101dbdcf();
        *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
        local_24 = local_24 + -1;
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar19);
    if (local_24 != 0 && !(bool)(bVar8 ^ 1)) {
      psVar15 = psVar4 + -0x16;
      psVar16 = psVar4;
      do {
        psVar9 = psVar15;
        if ((*(byte *)(psVar16 + 6) & 4) == 0) {
          do {
            psVar10 = psVar9;
            psVar7 = psVar16;
            if (psVar10 < psVar4) break;
            psVar9 = psVar10 + -0x16;
          } while ((*(byte *)(psVar10 + 6) & 4) == 0);
          do {
            psVar9 = psVar7;
            psVar7 = psVar9 + 0x16;
            if (psVar19 <= psVar7) {
              if (psVar10 < psVar4) goto LAB_101dae14;
              goto LAB_101dadc5;
            }
          } while ((*(byte *)(psVar9 + 0x1c) & 4) == 0);
          if (psVar10 < psVar4) {
LAB_101dadc5:
            FUN_101dbdcf();
          }
          else {
            sVar3 = *psVar10;
            if (*psVar7 == sVar3) {
              iVar11 = *(int *)(psVar10 + 4);
            }
            else {
              iVar12 = *(int *)(psVar10 + 4);
              iVar11 = FUN_101c16ea((int)*psVar16 - (int)sVar3,*(int *)(psVar9 + 0x1a) - iVar12,
                                    (int)*psVar7 - (int)sVar3);
              iVar11 = iVar11 + iVar12;
            }
            *(int *)(psVar16 + 4) = iVar11;
          }
        }
LAB_101dae14:
        psVar16 = psVar16 + 0x16;
        psVar15 = psVar15 + 0x16;
      } while (psVar16 < psVar19);
    }
  }
  return;
}

