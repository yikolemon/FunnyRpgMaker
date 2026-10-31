/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d6890 */

float10 __thiscall FUN_101d6890(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  char cVar4;
  char cVar5;
  double *pdVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 local_970;
  double local_950;
  double *local_850;
  double *local_84c;
  double *local_848;
  undefined1 local_728 [296];
  double local_600;
  int local_5f8;
  char local_5f4;
  double local_5f0 [37];
  double local_4c8 [37];
  undefined1 local_3a0 [100];
  int *local_33c;
  char local_2b0;
  int *local_214;
  char local_188;
  undefined1 local_150 [296];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = &stack0xfffff670;
  local_18 = 0xffffffff;
  local_1c = &LAB_101d7770;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  dVar12 = *(double *)(param_2 + 0x28);
  if (*(char *)(param_1 + 0x120) != '\x01') {
    if (*(int **)(param_1 + 100) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10228590();
    }
    uVar16 = CONCAT44(param_2,0x101d6a24);
    local_28 = &stack0xfffffffc;
    local_24 = &stack0xfffff670;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 100) + 8))();
    local_970 = (double)fVar7;
    if (*(char *)(param_1 + 0x98) == '\x01') {
      if (*(int **)(param_1 + 0x94) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228590(uVar16);
      }
      (**(code **)(**(int **)(param_1 + 0x94) + 8))(&local_850);
      local_18 = 8;
      fVar7 = (float10)FUN_101d6890(param_2);
      dVar11 = (double)fVar7;
      local_18 = 0xffffffff;
      FUN_1019798e();
      if (*(char *)(param_1 + 0xf0) == '\0') {
        FUN_101d7606();
      }
      else {
        fVar7 = (float10)FUN_101d47b2((int)*(undefined8 *)(param_2 + 0x28),
                                      (int)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20));
        dVar1 = (double)fVar7;
        fVar7 = (float10)FUN_10223b84(dVar11,local_970);
        if ((double)fVar7 < dVar1) {
          fVar7 = (float10)FUN_101d611c(dVar11,dVar1);
          local_970 = (double)fVar7;
        }
        if (dVar12 < 0.0) {
          fVar7 = (float10)FUN_101d611c(dVar11,dVar1);
          local_970 = (double)fVar7;
        }
        if (((local_970 < DAT_10301b88) && (DAT_103084f0 <= local_970)) &&
           (*(char *)(param_1 + 0x68) != '\0')) {
          fVar7 = (float10)FUN_10223b84(0,0x40488000,dVar11);
          local_970 = *(double *)(&DAT_10308570 + (uint)((double)fVar7 < dVar1) * 8);
        }
        if (*(char *)(param_1 + 200) != '\x01') goto code_r0x101d72cd;
        if (*(char *)(param_1 + 0x98) != '\0') {
          if (*(int **)(param_1 + 0x94) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x94) + 8))(&local_850,param_2);
            local_18 = 9;
            fVar7 = (float10)FUN_101d6890(param_2);
            dVar12 = (double)fVar7;
            local_18 = 0xffffffff;
            FUN_1019798e();
            if (*(char *)(param_1 + 200) == '\0') {
              FUN_101d7606();
            }
            else if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0xc4) + 8))(&local_850,param_2);
              local_18 = 10;
              fVar7 = (float10)FUN_101d6890(param_2);
              dVar11 = (double)fVar7;
              local_18 = 0xffffffff;
              FUN_1019798e();
              dVar2 = dVar11;
              if (dVar11 <= dVar12) {
                dVar2 = dVar12;
              }
              dVar10 = dVar11;
              if (dVar12 <= dVar11) {
                dVar10 = dVar12;
              }
              uVar14 = (undefined4)((ulonglong)local_970 >> 0x20);
              uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
              fVar7 = (float10)FUN_10223b84(SUB84(dVar2,0),uVar8,SUB84(local_970,0),uVar14);
              uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
              if (((double)fVar7 < dVar1) ||
                 (fVar7 = (float10)FUN_10223b84(SUB84(dVar10,0),uVar9,SUB84(local_970,0),uVar14),
                 (double)fVar7 < dVar1)) {
                uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
                fVar7 = (float10)FUN_10223c13(SUB84(dVar2,0),uVar8,SUB84(dVar1,0),uVar14);
                dVar2 = (double)fVar7;
                local_4c8[0] = dVar2;
                fVar7 = (float10)FUN_10223d29(SUB84(dVar10,0),uVar9,SUB84(dVar1,0),uVar14);
                dVar1 = (double)fVar7;
                local_850 = (double *)0x0;
                local_84c = (double *)0x0;
                local_848 = (double *)0x0;
                local_18 = 0xb;
                local_5f0[0] = dVar1;
                if ((dVar2 != DAT_10303848) || (NAN(dVar2) || NAN(DAT_10303848))) {
                  FUN_100d6cde(0,local_4c8);
                }
                if ((dVar1 != DAT_10303848) || (NAN(dVar1) || NAN(DAT_10303848))) {
                  if (local_84c == local_848) {
                    FUN_100d6cde(local_84c,local_5f0);
                  }
                  else {
                    *local_84c = dVar1;
                    local_84c = local_84c + 1;
                  }
                }
                cVar5 = FUN_101d627a(dVar12);
                if ((cVar5 == '\0') && (cVar5 = FUN_101d627a(dVar11), cVar5 == '\0')) {
                  if ((int)local_84c - (int)local_850 == 8) {
                    local_970 = *local_850;
                  }
                  else {
                    uVar8 = 0;
                    uVar9 = 0;
                    if (0.0 <= local_5f0[0]) {
                      uVar8 = SUB84(local_5f0[0],0);
                      uVar9 = (undefined4)((ulonglong)local_5f0[0] >> 0x20);
                    }
                    local_970 = (double)CONCAT44(uVar9,uVar8);
                  }
                }
                else {
                  local_970 = (double)(~-(ulonglong)(local_4c8[0] < 0.0) & (ulonglong)local_4c8[0] |
                                      (ulonglong)DAT_103037f0 & -(ulonglong)(local_4c8[0] < 0.0));
                }
                local_18 = 0xffffffff;
                FUN_10004eae();
              }
              goto code_r0x101d72cd;
            }
                    /* WARNING: Subroutine does not return */
            FUN_10228590();
          }
          goto LAB_101d73e6;
        }
      }
      FUN_101d7606();
LAB_101d73e6:
                    /* WARNING: Subroutine does not return */
      FUN_10228590();
    }
    goto code_r0x101d72cd;
  }
  if (*(int **)(param_1 + 0x11c) == (int *)0x0) {
    local_28 = &stack0xfffffffc;
    local_24 = &stack0xfffff670;
                    /* WARNING: Subroutine does not return */
    FUN_10228590();
  }
  uVar16 = CONCAT44(&local_850,0x101d6910);
  local_28 = &stack0xfffffffc;
  local_24 = &stack0xfffff670;
  (**(code **)(**(int **)(param_1 + 0x11c) + 8))();
  local_18 = 2;
  FUN_101d3252(&local_850);
  local_18 = 3;
  puVar15 = local_728;
  FUN_101d3252(puVar15);
  local_18 = 4;
  if (*(char *)(param_1 + 0x98) == '\0') {
    FUN_101d7606(puVar15,uVar16);
LAB_101d73be:
                    /* WARNING: Subroutine does not return */
    FUN_10228590();
  }
  if (*(int **)(param_1 + 0x94) == (int *)0x0) goto LAB_101d73be;
  (**(code **)(**(int **)(param_1 + 0x94) + 8))(local_150,param_2);
  local_18 = 5;
  fVar7 = (float10)FUN_101d6890(param_2);
  dVar11 = (double)fVar7;
  if (local_5f8 == 0) {
    pdVar6 = local_5f0;
    pdVar3 = local_4c8;
    if (*(char *)(param_2 + 0x24) != '\0') {
      pdVar6 = local_4c8;
      pdVar3 = local_5f0;
    }
  }
  else if ((local_5f8 == 2) || ((local_5f8 == 1 && (*(char *)(param_2 + 0x24) != '\x01')))) {
    pdVar6 = local_4c8;
    pdVar3 = local_5f0;
  }
  else {
    pdVar6 = local_5f0;
    pdVar3 = local_4c8;
  }
  FUN_101d3252(pdVar6);
  local_18 = 6;
  FUN_101d3252(pdVar3);
  local_18 = 7;
  cVar4 = FUN_1001bb3a(local_3a0);
  cVar5 = *(char *)(param_2 + 0x24);
  if (cVar5 == '\0') {
    uVar8 = SUB84(DAT_10303848,0);
    uVar9 = (undefined4)((ulonglong)DAT_10303848 >> 0x20);
  }
  else {
    uVar8 = (undefined4)DAT_1028b438;
    uVar9 = (undefined4)((ulonglong)DAT_1028b438 >> 0x20);
  }
  dVar1 = (double)CONCAT44(uVar9,uVar8);
  if (local_2b0 == '\0') {
    FUN_101d7606();
  }
  else {
    fVar7 = (float10)FUN_101d47b2((int)*(undefined8 *)(param_2 + 0x28),
                                  (int)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20));
    dVar2 = (double)fVar7;
    if (local_188 != '\0') {
      fVar7 = (float10)FUN_101d47b2((int)*(undefined8 *)(param_2 + 0x28),
                                    (int)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20));
      dVar10 = (double)fVar7;
      if (local_33c == (int *)0x0) goto LAB_101d73cd;
      fVar7 = (float10)(**(code **)(*local_33c + 8))(param_2);
      local_950 = (double)fVar7;
      fVar7 = (float10)FUN_10223b84(dVar11,local_950);
      if ((double)fVar7 < dVar2) {
        fVar7 = (float10)FUN_101d611c(dVar11,dVar2);
        local_950 = (double)fVar7;
      }
      if (local_214 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228590();
      }
      fVar7 = (float10)(**(code **)(*local_214 + 8))(param_2);
      dVar13 = (double)fVar7;
      fVar7 = (float10)FUN_10223b84(dVar11,dVar13);
      if ((double)fVar7 < dVar10) {
        fVar7 = (float10)FUN_101d611c(dVar11,dVar10);
        dVar13 = (double)fVar7;
      }
      if (dVar12 < 0.0) {
        fVar7 = (float10)FUN_101d611c(dVar11,dVar2);
        local_950 = (double)fVar7;
        fVar7 = (float10)FUN_101d611c(dVar11,dVar10);
        dVar13 = (double)fVar7;
      }
      if ((dVar13 - local_950) * dVar1 < local_600) {
        dVar11 = local_600 * dVar1 + local_950;
        dVar12 = 0.0;
        if (0.0 <= dVar11) {
          dVar12 = dVar11;
        }
        dVar13 = (double)(-(ulonglong)(DAT_103037f0 < dVar11) & (ulonglong)DAT_103037f0 |
                         ~-(ulonglong)(DAT_103037f0 < dVar11) & (ulonglong)dVar12);
        if ((dVar13 - local_950) * dVar1 < local_600) {
          dVar11 = dVar13 - local_600 * dVar1;
          dVar12 = 0.0;
          if (0.0 <= dVar11) {
            dVar12 = dVar11;
          }
          local_950 = (double)(-(ulonglong)(DAT_103037f0 < dVar11) & (ulonglong)DAT_103037f0 |
                              ~-(ulonglong)(DAT_103037f0 < dVar11) & (ulonglong)dVar12);
        }
      }
      if ((local_950 < DAT_103084f0) || (DAT_10301b88 <= local_950)) {
        if ((DAT_103084f0 <= dVar13) && (dVar13 < DAT_10301b88)) {
          if (local_5f4 != '\0') goto joined_r0x101d7205;
          dVar13 = DAT_103084f8;
          if (cVar5 != '\0') {
            dVar13 = DAT_10301b88;
          }
        }
        local_970 = local_950;
        dVar12 = dVar13;
      }
      else {
joined_r0x101d7205:
        if (cVar5 == '\0') {
          local_970 = DAT_103084f8;
          dVar12 = DAT_103084f8 - local_600;
          if (dVar13 <= DAT_103084f8 - local_600) {
            dVar12 = dVar13;
          }
        }
        else {
          local_970 = DAT_10301b88;
          dVar12 = local_600 + DAT_10301b88;
          if (local_600 + DAT_10301b88 <= dVar13) {
            dVar12 = dVar13;
          }
        }
      }
      if (cVar4 == '\0') {
        local_970 = dVar12;
      }
      local_18 = 0xffffffff;
      FUN_1019798e();
      FUN_1019798e();
      FUN_1019798e();
      FUN_1019798e();
      FUN_1019798e();
      local_18 = 0xffffffff;
      FUN_1019798e();
      FUN_1019798e();
code_r0x101d72cd:
      *unaff_FS_OFFSET = local_20;
      return (float10)local_970;
    }
  }
  FUN_101d7606();
LAB_101d73cd:
                    /* WARNING: Subroutine does not return */
  FUN_10228590();
}

