/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004322e3 */

void __fastcall FUN_004322e3(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
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
  uint local_18;
  
  psVar4 = *(short **)(param_1 + 0x48 + param_2 * 0x544);
  if (psVar4 == (short *)0x0) {
    psVar19 = (short *)0x0;
LAB_00432491:
    bVar7 = 0;
    local_24 = 0;
  }
  else {
    iVar10 = *(int *)(param_2 * 0x544 + param_1 + 0x40);
    psVar19 = psVar4 + iVar10 * 0x16;
    if (iVar10 == 0) goto LAB_00432491;
    local_28 = (short *)0x0;
    psVar15 = psVar4;
    do {
      if ((*(byte *)(psVar15 + 6) & 4) == 0) {
        psVar16 = *(short **)(psVar15 + 0xc);
        if (*(int *)(psVar15 + 10) == 0) {
          if ((psVar16 != (short *)0x0) && (*(int *)(psVar16 + 10) != 0)) {
            *(undefined4 *)(psVar16 + 4) = *(undefined4 *)(*(int *)(psVar16 + 10) + 8);
            *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
            psVar8 = psVar16;
            psVar16 = psVar15;
            goto LAB_00432361;
          }
        }
        else {
          *(undefined4 *)(psVar15 + 4) = *(undefined4 *)(*(int *)(psVar15 + 10) + 8);
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
          psVar8 = psVar15;
          if (psVar16 != (short *)0x0) {
LAB_00432361:
            if (*(int *)(psVar16 + 10) == 0) {
              FUN_0043339b(param_1,param_2,(int)psVar8,(int)psVar16);
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
    iVar10 = 0;
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
                ((*(int *)(psVar15 + 4) < iVar10 + 0x40 || (*(int *)(psVar16 + 4) < iVar10 + 0x40)))
                ) {
          local_24 = local_24 + 1;
LAB_004323c7:
          bVar6 = true;
        }
        else if (*(int *)(psVar16 + 10) == 0) {
          if (psVar16 < psVar15) {
            FUN_0043339b(param_1,param_2,(int)psVar16,(int)psVar15);
            *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
            iVar10 = *(int *)(psVar15 + 4);
            goto LAB_004323c7;
          }
          if ((param_2 == 0) && (local_28 == (short *)0x0)) {
            local_18 = FUN_004333bd(param_1,(int)psVar15,(int)psVar16,0,0);
          }
          else {
            FUN_004333bd(param_1,(int)psVar15,(int)psVar16,local_18,param_2);
          }
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
          *(byte *)(psVar16 + 6) = *(byte *)(psVar16 + 6) | 4;
          iVar10 = *(int *)(psVar16 + 4);
          bVar6 = true;
          local_28 = psVar15;
        }
        else {
          FUN_0043339b(param_1,param_2,(int)psVar16,(int)psVar15);
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
        }
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar19);
    bVar7 = 1;
  }
  if (param_2 == 0) {
    iVar10 = (int)psVar19 - (int)psVar4;
    if (iVar10 == 0x108) {
      iVar14 = 0xb0;
      iVar12 = 0x58;
      psVar15 = psVar4;
    }
    else {
      if (iVar10 != 0x210) goto LAB_004324ab;
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
        if (iVar10 == 0x210) {
          *(int *)(psVar4 + 0xb4) = *(int *)(psVar4 + 0xb4) - iVar12;
          *(int *)(psVar4 + 0xf6) = *(int *)(psVar4 + 0xf6) - iVar12;
        }
        pbVar2 = (byte *)((int)psVar4 + iVar14 + 0xc);
        *pbVar2 = *pbVar2 | 4;
        iVar10 = *(int *)((int)psVar4 + iVar14 + 0x18);
        if (iVar10 != 0) {
          pbVar2 = (byte *)(iVar10 + 0xc);
          *pbVar2 = *pbVar2 | 4;
        }
      }
    }
  }
LAB_004324ab:
  psVar15 = psVar4;
  if (local_24 != 0 && !(bool)(bVar7 ^ 1)) {
    do {
      if (((*(byte *)(psVar15 + 6) & 4) == 0) && (*(int *)(psVar15 + 0xe) != 0)) {
        FUN_0043353f(*(int *)(psVar15 + 0xe),(int)psVar15);
        *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
        local_24 = local_24 + -1;
      }
      psVar15 = psVar15 + 0x16;
    } while (psVar15 < psVar19);
    if (local_24 != 0 && !(bool)(bVar7 ^ 1)) {
      psVar15 = psVar4 + -0x16;
      psVar16 = psVar4;
      do {
        psVar8 = psVar15;
        if ((*(byte *)(psVar16 + 6) & 4) == 0) {
          do {
            psVar9 = psVar8;
            psVar11 = psVar16;
            if (psVar9 < psVar4) break;
            psVar8 = psVar9 + -0x16;
          } while ((*(byte *)(psVar9 + 6) & 4) == 0);
          do {
            psVar8 = psVar11;
            psVar11 = psVar8 + 0x16;
            if (psVar19 <= psVar11) {
              psVar11 = psVar9;
              if (psVar9 < psVar4) goto LAB_00432584;
              goto LAB_00432535;
            }
          } while ((*(byte *)(psVar8 + 0x1c) & 4) == 0);
          if (psVar9 < psVar4) {
LAB_00432535:
            FUN_0043353f((int)psVar11,(int)psVar16);
          }
          else {
            sVar3 = *psVar9;
            if (*psVar11 == sVar3) {
              iVar10 = *(int *)(psVar9 + 4);
            }
            else {
              iVar12 = *(int *)(psVar9 + 4);
              iVar10 = FUN_0041dcda((int)*psVar16 - (int)sVar3,*(int *)(psVar8 + 0x1a) - iVar12,
                                    (int)*psVar11 - (int)sVar3);
              iVar10 = iVar10 + iVar12;
            }
            *(int *)(psVar16 + 4) = iVar10;
          }
        }
LAB_00432584:
        psVar16 = psVar16 + 0x16;
        psVar15 = psVar15 + 0x16;
      } while (psVar16 < psVar19);
    }
  }
  return;
}

