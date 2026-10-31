/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bd0cc */

void FUN_101bd0cc(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int **ppiVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int *piVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int *piStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int **ppiStack_120;
  int *local_11c;
  int *piStack_118;
  undefined4 *local_10c;
  undefined1 auStack_104 [12];
  int iStack_f8;
  undefined4 *apuStack_f4 [3];
  undefined1 auStack_e8 [4];
  int aiStack_e4 [15];
  int aiStack_a8 [3];
  undefined1 auStack_9c [64];
  undefined1 auStack_5c [28];
  int iStack_40;
  int aiStack_30 [5];
  int *piStack_1c;
  int *piStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_11c;
  if ((*(float *)(param_1 + 0x24) <= 0.0) || (*(float *)(param_1 + 0x28) <= 0.0)) goto LAB_101bd5b7;
  ppiStack_120 = (int **)0x101bd107;
  puVar6 = (undefined4 *)FUN_101bd5e3();
  local_11c = (int *)*puVar6;
  piVar8 = *(int **)(param_1 + 0x38);
  local_10c = puVar6;
  if ((piVar8 != (int *)0x0) && (iVar7 = *piVar8, iVar7 != 0)) {
    iVar13 = piVar8[2];
    iVar11 = 0;
    do {
      ppiStack_120 = *(int ***)(iVar13 + iVar11);
      if (*(int *)((int)ppiStack_120 + 4) != 0) {
        piStack_124 = (int *)0x101bd136;
        FUN_101bd5fb();
      }
      iVar11 = iVar11 + 4;
    } while (iVar7 << 2 != iVar11);
  }
  puVar9 = local_10c;
  piVar8 = puVar6 + 1;
  ppiStack_120 = (int **)local_10c[1];
  if (ppiStack_120 == (int **)0x0) {
LAB_101bd16b:
    iVar7 = *(int *)(param_1 + 0xc);
    puVar9[3] = iVar7 + 5000;
    piStack_134 = (int *)((iVar7 * 8 + 40000) * 3);
    ppiStack_120 = (int **)0x0;
    piStack_128 = (int *)0x0;
    piStack_12c = (int *)0x142;
    piStack_130 = (int *)0x208;
    piStack_124 = piVar8;
    iVar7 = (**(code **)(*local_11c + 0x68))(local_11c);
    if (iVar7 < 0) goto LAB_101bd5b7;
  }
  else if ((int)local_10c[3] < *(int *)(param_1 + 0xc)) {
    piStack_124 = (int *)0x101bd165;
    (**(code **)((int)*ppiStack_120 + 8))();
    *piVar8 = 0;
    goto LAB_101bd16b;
  }
  piVar12 = puVar6 + 2;
  ppiStack_120 = (int **)puVar9[2];
  if (ppiStack_120 == (int **)0x0) {
LAB_101bd1c8:
    iVar7 = *(int *)(param_1 + 8);
    puVar9[4] = iVar7 + 10000;
    piStack_134 = (int *)(iVar7 * 2 + 20000);
    ppiStack_120 = (int **)0x0;
    piStack_128 = (int *)0x0;
    piStack_12c = (int *)0x65;
    piStack_130 = (int *)0x208;
    piStack_124 = piVar12;
    iVar7 = (**(code **)(*local_11c + 0x6c))(local_11c);
    if (iVar7 < 0) goto LAB_101bd5b7;
  }
  else if ((int)puVar9[4] < *(int *)(param_1 + 8)) {
    piStack_124 = (int *)0x101bd1c1;
    (**(code **)((int)*ppiStack_120 + 8))();
    *piVar12 = 0;
    goto LAB_101bd1c8;
  }
  ppiStack_120 = &piStack_18;
  piStack_18 = (int *)0x0;
  piStack_124 = (int *)0x1;
  piStack_128 = local_11c;
  piStack_12c = (int *)0x101bd21c;
  iVar7 = (**(code **)(*local_11c + 0xec))();
  if (iVar7 < 0) goto LAB_101bd5b7;
  ppiStack_120 = (int **)piStack_18;
  piStack_124 = (int *)0x101bd231;
  iVar7 = (**(code **)(*piStack_18 + 0x10))();
  ppiVar5 = ppiStack_120;
  if (-1 < iVar7) {
    piStack_124 = (int *)auStack_5c;
    piStack_128 = (int *)0x100;
    piStack_12c = (int *)ppiStack_120;
    piStack_130 = (int *)0x101bd254;
    (**(code **)((int)*ppiStack_120 + 0xb4))();
    piStack_130 = aiStack_a8;
    piStack_134 = (int *)0x2;
    (**(code **)((int)*ppiVar5 + 0xb4))(ppiVar5);
    (**(code **)((int)*ppiVar5 + 0xb4))(ppiVar5,3,apuStack_f4);
    iVar7 = (**(code **)(*(int *)*piVar8 + 0x2c))
                      ((int *)*piVar8,0,*(int *)(param_1 + 0xc) * 0x18,auStack_104,0x2000);
    if (-1 < iVar7) {
      piStack_134 = (int *)*piVar12;
      piStack_12c = (int *)(*(int *)(param_1 + 8) * 2);
      piStack_128 = aiStack_e4;
      piStack_124 = (int *)0x2000;
      piStack_130 = (int *)0x0;
      iVar7 = (**(code **)(*piStack_134 + 0x2c))();
      if (iVar7 < 0) {
        iVar7 = 0x30;
      }
      else {
        piStack_130 = piVar12;
        piStack_12c = piVar8;
        if (*(int *)(param_1 + 0x10) != 0) {
          piVar8 = *(int **)(local_14 + 0x18);
          piStack_128 = piVar8 + *(int *)(param_1 + 0x10);
          do {
            iVar7 = *piVar8;
            if (0 < *(int *)(iVar7 + 0x18)) {
              puVar6 = *(undefined4 **)(iVar7 + 0x20);
              iVar13 = 0;
              do {
                *apuStack_f4[0] = *puVar6;
                *(ulonglong *)(apuStack_f4[0] + 1) = (ulonglong)(uint)puVar6[1];
                uVar1 = puVar6[4];
                apuStack_f4[0][3] =
                     (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff | uVar1 & 0xff00ff00;
                apuStack_f4[0][4] = puVar6[2];
                apuStack_f4[0][5] = puVar6[3];
                apuStack_f4[0] = apuStack_f4[0] + 6;
                puVar6 = puVar6 + 5;
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(iVar7 + 0x18));
            }
            piStack_118 = piVar8;
            FUN_1025b2d0(iStack_f8,*(undefined4 *)(iVar7 + 0x14),*(int *)(iVar7 + 0xc) * 2);
            iStack_f8 = iStack_f8 + *(int *)(iVar7 + 0xc) * 2;
            piVar8 = piStack_118 + 1;
          } while (piVar8 != piStack_128);
        }
        piVar21 = piStack_12c;
        (**(code **)(*(int *)*piStack_12c + 0x30))((int *)*piStack_12c);
        piVar12 = piStack_134;
        piVar8 = (int *)*piStack_134;
        (**(code **)(*piVar8 + 0x30))();
        piVar22 = piVar8;
        (**(code **)(*piVar8 + 400))(piVar8,0,*piVar21,0,0x18);
        (**(code **)(*piVar8 + 0x1a0))(piVar8,*piVar12);
        (**(code **)(*piVar8 + 0x164))(piVar8,0x142);
        FUN_101bd82b();
        if (*(int *)(iStack_40 + 0x10) == 0) {
LAB_101bd526:
          (**(code **)(*(int *)*piVar22 + 0x148))((int *)*piVar22,DAT_10294500,0,0,0,0,0);
        }
        else {
          fVar23 = *(float *)(iStack_40 + 0x1c);
          fVar24 = *(float *)(iStack_40 + 0x20);
          puVar9 = *(undefined4 **)(iStack_40 + 0x18);
          puVar6 = puVar9 + *(int *)(iStack_40 + 0x10);
          iVar13 = 0;
          iVar7 = 0;
          fVar25 = fVar23;
          fVar26 = fVar24;
          do {
            piVar12 = (int *)*puVar9;
            if (0 < *piVar12) {
              iVar14 = 0;
              iVar11 = 0x18;
              piVar21 = piVar8;
              do {
                iVar2 = piVar12[2];
                iVar15 = iVar11 + iVar2;
                pcVar3 = *(code **)(iVar15 + 0x14);
                if (pcVar3 == (code *)0x0) {
                  fVar17 = *(float *)(iVar15 + -0x18) - fVar23;
                  fVar18 = *(float *)(iVar15 + -0x14) - fVar24;
                  fVar19 = *(float *)(iVar15 + -0x10) - fVar25;
                  fVar20 = *(float *)(iVar15 + -0xc) - fVar26;
                  iVar15 = -(uint)(fVar17 < fVar19);
                  iVar16 = -(uint)(fVar18 < fVar20);
                  auVar4._4_4_ = iVar15;
                  auVar4._0_4_ = iVar15;
                  auVar4._8_4_ = iVar16;
                  auVar4._12_4_ = iVar16;
                  iVar15 = movmskpd(0,auVar4);
                  piVar8 = piVar21;
                  if (iVar15 == 3) {
                    piStack_134 = (int *)(int)fVar17;
                    piStack_130 = (int *)(int)fVar18;
                    piStack_12c = (int *)(int)fVar19;
                    piStack_128 = (int *)(int)fVar20;
                    (**(code **)(*piVar21 + 300))(piVar21,&piStack_134,piVar21,iVar13,iVar7);
                    iVar15 = *(int *)(iVar2 + -8 + iVar11);
                    piVar10 = (int *)(iVar15 + 0x10);
                    if (iVar15 == 0) {
                      piVar10 = (int *)(iVar11 + iVar2);
                    }
                    iVar15 = *piVar10;
                    iVar16 = 0;
                    (**(code **)(*piVar21 + 0x104))(piVar21,0,iVar15);
                    (**(code **)(*piVar21 + 0x148))
                              (piVar21,4,*(int *)(iVar2 + 8 + iVar11) + iVar16,0,piVar12[6],
                               *(int *)(iVar2 + 0xc + iVar11) + iVar15,
                               *(uint *)(iVar2 + 0x10 + iVar11) / 3);
                  }
                }
                else if (pcVar3 == FUN_10041162) {
                  FUN_101bd82b();
                  piVar8 = piVar21;
                }
                else {
                  (*pcVar3)(piVar12,(float *)(iVar15 + -0x18));
                  piVar8 = piVar21;
                }
                iVar14 = iVar14 + 1;
                iVar11 = iVar11 + 0x40;
                piVar21 = piVar8;
              } while (iVar14 < *piVar12);
            }
            iVar7 = iVar7 + piVar12[3];
            iVar13 = iVar13 + piVar12[6];
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar6);
          if (iVar13 == 0) goto LAB_101bd526;
        }
        (**(code **)(*piVar8 + 0xb0))(piVar8,0x100,auStack_9c);
        (**(code **)(*piVar8 + 0xb0))(piVar8,2,auStack_e8);
        (**(code **)(*piVar8 + 0xb0))(piVar8,3,&piStack_134);
        iVar7 = 0x14;
        piVar8 = aiStack_30;
      }
      (**(code **)(*(int *)*piVar8 + iVar7))((int *)*piVar8);
    }
  }
  piStack_124 = piStack_1c;
  piStack_128 = (int *)0x101bd5b7;
  (**(code **)(*piStack_1c + 8))();
LAB_101bd5b7:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_11c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ppiStack_120 = (int **)FUN_101bd5e3;
  FUN_102283e0();
}

