/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ba24 */

void FUN_1010ba24(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *local_5c;
  float *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  int local_34;
  float *local_30;
  undefined8 local_2c;
  undefined8 local_24;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar8 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  pfVar4 = (float *)FUN_10115de8();
  local_44 = iVar8;
  pfVar6 = *(float **)(iVar8 + 0x224c);
  if ((0.0 < (float)pfVar6) || (0.0 < *(float *)(iVar8 + 0x222c))) {
    if (*(int *)(iVar8 + 0x2220) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(*(int *)(iVar8 + 0x2220) + 0xf9);
    }
    if ((pfVar4 != (float *)0x0) || (cVar3 != '\0')) {
      local_40 = pfVar6;
      local_3c = pfVar4;
      if (pfVar4 == (float *)0x0) {
        local_38 = (float *)0x0;
        pfVar5 = (float *)0x0;
        if (cVar3 != '\0') {
          local_5c = (float *)0x3d;
          local_58 = pfVar6;
          FUN_100fcb39();
          iVar1 = local_44;
          FUN_101260fa();
          iVar2 = local_44;
          iVar8 = *(int *)(iVar1 + 0x2220);
          iVar1 = *(int *)(iVar1 + 0x2224);
          pfVar5 = *(float **)(iVar8 + 0x3c);
          local_38 = (float *)0x0;
          pfVar6 = pfVar5;
          if ((((iVar1 != 0) && (*(char *)(iVar1 + 0xf9) == '\x01')) &&
              (*(float **)(iVar1 + 0x3c) != (float *)0x0)) && (*(float **)(iVar1 + 0x3c) != pfVar5))
          {
            local_58 = *(float **)(local_44 + 0x224c);
            local_5c = (float *)0x3d;
            FUN_100fcb39();
            FUN_101260fa();
            iVar8 = *(int *)(iVar2 + 0x2220);
            local_38 = *(float **)(*(int *)(iVar2 + 0x2224) + 0x3c);
            pfVar6 = *(float **)(iVar8 + 0x3c);
          }
          fVar11 = *(float *)(local_44 + 0x1228);
          fVar9 = (float)*(undefined8 *)(iVar8 + 0x50);
          fVar10 = (float)((ulonglong)*(undefined8 *)(iVar8 + 0x50) >> 0x20);
          fVar12 = fVar9 - fVar11;
          fVar13 = fVar10 - fVar11;
          fStack_1c = fVar11 + (float)*(undefined8 *)(iVar8 + 0x58) + fVar9;
          fStack_18 = fVar11 + (float)((ulonglong)*(undefined8 *)(iVar8 + 0x58) >> 0x20) + fVar10;
          local_24 = CONCAT44(fVar13,fVar12);
          if ((pfVar6[4] <= fStack_1c - fVar12) && (pfVar6[5] <= fStack_18 - fVar13)) {
            fVar11 = DAT_102b8a50 - fVar11;
            fStack_1c = fVar11 + fStack_1c;
            fStack_18 = fVar11 + fStack_18;
            local_24 = CONCAT44(fVar13 - fVar11,fVar12 - fVar11);
          }
          local_5c = *(float **)(iVar8 + 0x2e8);
          FUN_10187968();
          if (**(int **)(iVar8 + 0x2e8) == 0) {
            FUN_10187d74();
          }
          local_5c = pfVar6 + 2;
          local_58 = (float *)&local_2c;
          local_2c = CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20) +
                              (float)((ulonglong)*(undefined8 *)(pfVar6 + 2) >> 0x20),
                              (float)*(undefined8 *)(pfVar6 + 4) +
                              (float)*(undefined8 *)(pfVar6 + 2));
          local_54 = 0;
          FUN_101881b4();
          local_40 = *(float **)(iVar8 + 0x2e8);
          local_34 = *(int *)(iVar8 + 0x88);
          local_58 = *(float **)(local_44 + 0x222c);
          local_5c = (float *)0x3c;
          local_54 = FUN_100fcb39();
          local_48 = 0;
          local_50 = local_34;
          local_5c = (float *)&local_24;
          local_4c = 0x40400000;
          local_58 = &fStack_1c;
          FUN_1018b762();
          FUN_10188384();
          pfVar4 = local_3c;
        }
      }
      else {
        local_5c = pfVar4;
        FUN_1010a5cf();
        local_5c = (float *)local_3c[0x7e];
        local_58 = local_40;
        FUN_100fcc12();
        pfVar4 = local_3c;
        FUN_101260fa();
        pfVar5 = (float *)pfVar4[0xf];
        local_38 = (float *)0x0;
      }
      local_40 = *(float **)(local_44 + 0x1fe0);
      if (local_40 != (float *)0x0) {
        local_34 = *(int *)(local_44 + 0x1fe8);
        local_40 = (float *)((int)local_40 << 2);
        iVar8 = 0;
        local_30 = pfVar5;
        do {
          pfVar6 = *(float **)(local_34 + iVar8);
          if ((pfVar6 != pfVar5) && (pfVar6 != local_38)) {
            if (pfVar4 == (float *)0x0) {
              pfVar7 = (float *)0x3d;
            }
            else {
              local_5c = (float *)pfVar6[0x16];
              pfVar7 = (float *)0x3e;
              if ((local_5c != (float *)0x0) &&
                 (local_58 = pfVar4, cVar3 = FUN_10104041(), pfVar5 = local_30, cVar3 != '\0'))
              goto LAB_1010bdc3;
            }
            local_5c = pfVar6;
            FUN_100fe900();
            local_58 = *(float **)(local_44 + 0x224c);
            local_5c = pfVar7;
            local_54 = FUN_100fcb39();
            pfVar4 = local_3c;
            local_5c = pfVar6 + 2;
            local_24 = CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20) +
                                (float)((ulonglong)*(undefined8 *)(pfVar6 + 2) >> 0x20),
                                (float)*(undefined8 *)(pfVar6 + 4) +
                                (float)*(undefined8 *)(pfVar6 + 2));
            local_4c = 0;
            local_50 = 0;
            local_58 = (float *)&local_24;
            FUN_1018b85a();
            pfVar5 = local_30;
          }
LAB_1010bdc3:
          iVar8 = iVar8 + 4;
        } while (local_40 != (float *)iVar8);
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

