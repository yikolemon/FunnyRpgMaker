/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d2b24 */

void FUN_1400d2b24(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong **pplVar16;
  longlong lVar17;
  longlong **pplVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_198 [32];
  int local_178;
  longlong **local_170;
  ulonglong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  longlong local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  longlong local_138;
  undefined4 *local_130;
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_198;
  if ((*(float *)(param_1 + 0x28) <= 0.0) || (*(float *)(param_1 + 0x2c) <= 0.0))
  goto LAB_1400d3090;
  puVar10 = (undefined8 *)FUN_1400d30d4();
  plVar4 = (longlong *)*puVar10;
  piVar5 = *(int **)(param_1 + 0x40);
  if ((piVar5 != (int *)0x0) && (iVar9 = *piVar5, (longlong)iVar9 != 0)) {
    lVar14 = *(longlong *)(piVar5 + 2);
    lVar17 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar14 + lVar17) + 4) != 0) {
        FUN_1400d30f7();
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar9 * 8 != lVar17);
  }
  pplVar18 = (longlong **)(puVar10 + 1);
  if ((longlong *)puVar10[1] == (longlong *)0x0) {
LAB_1400d2bd2:
    iVar9 = *(int *)(param_1 + 0xc);
    *(int *)(puVar10 + 3) = iVar9 + 5000;
    local_168 = 0;
    local_178 = 0;
    local_170 = pplVar18;
    iVar9 = (**(code **)(*plVar4 + 0xd0))(plVar4,(iVar9 * 8 + 40000) * 3,0x208,0x142);
    if (iVar9 < 0) goto LAB_1400d3090;
  }
  else if (*(int *)(puVar10 + 3) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)puVar10[1] + 0x10))();
    *pplVar18 = (longlong *)0x0;
    goto LAB_1400d2bd2;
  }
  pplVar16 = (longlong **)(puVar10 + 2);
  if ((longlong *)puVar10[2] == (longlong *)0x0) {
LAB_1400d2c45:
    iVar9 = *(int *)(param_1 + 8);
    *(int *)((longlong)puVar10 + 0x1c) = iVar9 + 10000;
    local_168 = 0;
    local_178 = 0;
    local_170 = pplVar16;
    iVar9 = (**(code **)(*plVar4 + 0xd8))(plVar4,iVar9 * 2 + 20000,0x208,0x65);
    if (iVar9 < 0) goto LAB_1400d3090;
  }
  else if (*(int *)((longlong)puVar10 + 0x1c) < *(int *)(param_1 + 8)) {
    (**(code **)(*(longlong *)puVar10[2] + 0x10))();
    *pplVar16 = (longlong *)0x0;
    goto LAB_1400d2c45;
  }
  local_68 = (longlong *)0x0;
  iVar9 = (**(code **)(*plVar4 + 0x1d8))(plVar4,1);
  if (iVar9 < 0) goto LAB_1400d3090;
  iVar9 = (**(code **)(*local_68 + 0x20))();
  if (-1 < iVar9) {
    (**(code **)(*plVar4 + 0x168))(plVar4,0x100,local_a8);
    (**(code **)(*plVar4 + 0x168))(plVar4,2,local_e8);
    (**(code **)(*plVar4 + 0x168))(plVar4,3,local_128);
    local_178 = 0x2000;
    iVar9 = (**(code **)(**pplVar18 + 0x58))(*pplVar18,0,*(int *)(param_1 + 0xc) * 0x18,&local_130);
    if (-1 < iVar9) {
      local_178 = 0x2000;
      iVar9 = (**(code **)(**pplVar16 + 0x58))(*pplVar16,0,*(int *)(param_1 + 8) * 2,&local_138);
      if (iVar9 < 0) {
        lVar14 = 0x60;
      }
      else {
        local_160 = puVar10;
        if ((longlong)*(int *)(param_1 + 0x10) != 0) {
          plVar13 = *(longlong **)(param_1 + 0x18);
          plVar1 = plVar13 + *(int *)(param_1 + 0x10);
          do {
            lVar14 = *plVar13;
            if (0 < *(int *)(lVar14 + 0x20)) {
              puVar11 = *(undefined4 **)(lVar14 + 0x28);
              iVar9 = 0;
              do {
                *local_130 = *puVar11;
                local_130[1] = puVar11[1];
                local_130[2] = 0;
                uVar3 = puVar11[4];
                local_130[3] = (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff | uVar3 & 0xff00ff00;
                local_130[4] = puVar11[2];
                local_130[5] = puVar11[3];
                local_130 = local_130 + 6;
                puVar11 = puVar11 + 5;
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(lVar14 + 0x20));
            }
            FUN_1401c5180(local_138,*(undefined8 *)(lVar14 + 0x18),
                          (longlong)*(int *)(lVar14 + 0x10) * 2);
            local_138 = local_138 + (longlong)*(int *)(lVar14 + 0x10) * 2;
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar1);
        }
        (**(code **)(**pplVar18 + 0x60))();
        (**(code **)(**pplVar16 + 0x60))();
        local_178 = 0x18;
        iVar9 = 0;
        (**(code **)(*plVar4 + 800))(plVar4,0,*pplVar18,0);
        (**(code **)(*plVar4 + 0x340))(plVar4,*pplVar16);
        (**(code **)(*plVar4 + 0x2c8))(plVar4);
        FUN_1400d3378(param_1);
        if ((longlong)*(int *)(param_1 + 0x10) == 0) {
LAB_1400d2ff3:
          local_168 = local_168 & 0xffffffff00000000;
          local_170 = (longlong **)((ulonglong)local_170 & 0xffffffff00000000);
          local_178 = 0;
          (**(code **)(*(longlong *)*local_160 + 0x290))((longlong *)*local_160,4,0,0);
        }
        else {
          fVar25 = (float)*(undefined8 *)(param_1 + 0x20);
          fVar26 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
          puVar10 = *(undefined8 **)(param_1 + 0x18);
          local_158 = puVar10 + *(int *)(param_1 + 0x10);
          iVar15 = 0;
          local_150 = param_1;
          do {
            piVar5 = (int *)*puVar10;
            if (0 < *piVar5) {
              lVar17 = 0x18;
              lVar14 = 0;
              do {
                lVar6 = *(longlong *)(piVar5 + 2);
                lVar2 = lVar6 + lVar17;
                pcVar7 = *(code **)(lVar2 + 0x18);
                if (pcVar7 == (code *)0x0) {
                  fVar21 = *(float *)(lVar2 + -0x18) - fVar25;
                  fVar22 = *(float *)(lVar2 + -0x14) - fVar26;
                  fVar23 = *(float *)(lVar2 + -0x10) - fVar25;
                  fVar24 = *(float *)(lVar2 + -0xc) - fVar26;
                  iVar19 = -(uint)(fVar21 < fVar23);
                  iVar20 = -(uint)(fVar22 < fVar24);
                  auVar8._4_4_ = iVar19;
                  auVar8._0_4_ = iVar19;
                  auVar8._8_4_ = iVar20;
                  auVar8._12_4_ = iVar20;
                  iVar19 = movmskpd(0,auVar8);
                  if (iVar19 == 3) {
                    local_148 = (int)fVar21;
                    iStack_144 = (int)fVar22;
                    iStack_140 = (int)fVar23;
                    iStack_13c = (int)fVar24;
                    (**(code **)(*plVar4 + 600))(plVar4,&local_148);
                    lVar2 = *(longlong *)(lVar6 + -8 + lVar17);
                    puVar12 = (undefined8 *)(lVar2 + 0x10);
                    if (lVar2 == 0) {
                      puVar12 = (undefined8 *)(lVar6 + lVar17);
                    }
                    (**(code **)(*plVar4 + 0x208))(plVar4,0,*puVar12);
                    local_178 = piVar5[8];
                    local_170 = (longlong **)
                                CONCAT44(local_170._4_4_,*(int *)(lVar6 + 0xc + lVar17) + iVar15);
                    local_168 = CONCAT44(local_168._4_4_,*(uint *)(lVar6 + 0x10 + lVar17) / 3);
                    (**(code **)(*plVar4 + 0x290))(plVar4,4,*(int *)(lVar6 + 8 + lVar17) + iVar9,0);
                  }
                }
                else if (pcVar7 == FUN_1400151ba) {
                  FUN_1400d3378(local_150);
                }
                else {
                  (*pcVar7)(piVar5);
                }
                lVar14 = lVar14 + 1;
                lVar17 = lVar17 + 0x48;
              } while (lVar14 < *piVar5);
            }
            iVar15 = iVar15 + piVar5[4];
            iVar9 = iVar9 + piVar5[8];
            puVar10 = puVar10 + 1;
          } while (puVar10 != local_158);
          if (iVar9 == 0) goto LAB_1400d2ff3;
        }
        (**(code **)(*plVar4 + 0x160))(plVar4,0x100,local_a8);
        (**(code **)(*plVar4 + 0x160))(plVar4,2,local_e8);
        (**(code **)(*plVar4 + 0x160))(plVar4,3,local_128);
        lVar14 = 0x28;
        pplVar18 = &local_68;
      }
      (**(code **)(**pplVar18 + lVar14))();
    }
  }
  (**(code **)(*local_68 + 0x10))();
LAB_1400d3090:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_198)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_198);
}

