/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037a886 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14037a886(longlong param_1)

{
  float *pfVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = ram0x000140613b10 ^ (ulonglong)auStack_d8;
  lVar10 = *(longlong *)(param_1 + 0x180);
  if ((*(float *)(param_1 + 0xf4) <= *(float *)(lVar10 + 0x2c4) &&
       *(float *)(lVar10 + 0x2c4) != *(float *)(param_1 + 0xf4)) &&
     (*(float *)(lVar10 + 700) <= *(float *)(param_1 + 0xfc) &&
      *(float *)(param_1 + 0xfc) != *(float *)(lVar10 + 700))) {
    pfVar1 = (float *)(param_1 + 0xf0);
    if ((*pfVar1 <= *(float *)(lVar10 + 0x2c0) && *(float *)(lVar10 + 0x2c0) != *pfVar1) &&
       (*(float *)(lVar10 + 0x2b8) <= *(float *)(param_1 + 0xf8) &&
        *(float *)(param_1 + 0xf8) != *(float *)(lVar10 + 0x2b8))) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 800);
      FUN_1403a6a12(*(undefined8 *)(param_1 + 0x1a0),uVar4,0);
      FUN_1403a0a74(uVar4,param_1 + 0x140,param_1 + 0x148,0);
      if ((longlong)*(short *)(param_1 + 0x78) == 0) {
        lVar10 = param_1 + 0x1a8;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x1c8) + (longlong)*(short *)(param_1 + 0x78) * 0x18 +
                 -0x18;
      }
      fVar14 = (float)FUN_140313933(*(undefined4 *)(param_1 + 0x104),
                                    *(float *)(param_1 + 0x104 +
                                              (ulonglong)(*(short *)(param_1 + 0x22a) < 1) * 0x10) +
                                    *(float *)(param_1 + 0xe8));
      uVar9 = *(uint *)(param_1 + 4);
      fVar15 = 0.0;
      if ((uVar9 >> 8 & 1) != 0) {
        fVar15 = DAT_1404bda40;
      }
      fVar14 = fVar14 + fVar15;
      fVar15 = *(float *)(param_1 + 0x10c);
      fVar16 = fVar14;
      if (*(char *)(param_1 + 0x23d) == '\x01') {
        fVar16 = (float)FUN_1403000b2(fVar15,*(float *)(param_1 + 0x104 +
                                                       (ulonglong)(*(short *)(param_1 + 0x22a) < 1)
                                                       * 0x10) + *(float *)(lVar10 + 8));
        uVar9 = *(uint *)(param_1 + 4);
      }
      if ((uVar9 >> 9 & 1) != 0) {
        iVar8 = *(int *)(param_1 + 0x6c);
        if (0 < iVar8) {
          uVar11 = 0;
          do {
            if ((*(uint *)(*(longlong *)(param_1 + 0x48) + (uVar11 >> 5 & 0x7ffffff) * 4) >>
                 ((uint)uVar11 & 0x1f) & 1) != 0) {
              sVar2 = *(short *)(*(longlong *)(param_1 + 0x28) + uVar11 * 2);
              if (*(short *)(param_1 + 0x212) == sVar2) {
                bVar13 = *(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78);
              }
              else {
                bVar13 = false;
              }
              puVar12 = (uint *)((longlong)(int)sVar2 * 0x74 + *(longlong *)(param_1 + 0x18));
              fVar17 = (float)puVar12[3];
              if ((bool)((fVar17 < *(float *)(param_1 + 0x128) ||
                         fVar17 == *(float *)(param_1 + 0x128)) | bVar13)) {
                if (((((short)puVar12[0x17] != -1) || ((*puVar12 & 0x40000020) == 0)) ||
                    ((*(uint *)(param_1 + 4) & 0x1e000) == 0x4000)) && ((float)puVar12[9] < fVar17))
                {
                  fVar17 = fVar15;
                  if (uVar11 + 1 != (longlong)*(short *)(param_1 + 0x22e)) {
                    if ((((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) ||
                        (*(short *)(param_1 + 0x20c) != sVar2 && !bVar13)) &&
                       (fVar17 = fVar16, (*(uint *)(param_1 + 4) & 0x1800) == 0)) {
                      fVar17 = fVar15;
                    }
                  }
                  if (fVar14 < fVar17) {
                    local_b8 = FUN_14037c2bc(param_1,uVar11 & 0xffffffff);
                    local_b0 = 0x3f800000;
                    FUN_1403a3f56(uVar4,puVar12[3],fVar14,fVar17);
                    iVar8 = *(int *)(param_1 + 0x6c);
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while ((longlong)uVar11 < (longlong)iVar8);
          uVar9 = *(uint *)(param_1 + 4);
        }
      }
      if ((uVar9 & 0x500) != 0) {
        fVar15 = *pfVar1;
        uVar5 = *(undefined4 *)(param_1 + 0xf4);
        uVar6 = *(undefined4 *)(param_1 + 0xf8);
        uVar7 = *(undefined4 *)(param_1 + 0xfc);
        uVar3 = *(undefined4 *)(param_1 + 0xa4);
        local_98 = fVar15;
        uStack_94 = uVar5;
        uStack_90 = uVar6;
        uStack_8c = uVar7;
        if ((uVar9 & 0x500) == 0x500) {
          local_a8 = 0;
          local_b8 = 0;
          local_b0 = 0x3f800000;
          FUN_1403a40da(uVar4,&local_98,&uStack_90,uVar3);
        }
        else if ((uVar9 >> 10 & 1) == 0) {
          if ((uVar9 >> 8 & 1) != 0) {
            local_b0 = 0x3f800000;
            local_b8 = uVar3;
            FUN_1403a3dce(uVar4,fVar15,uVar6,uVar5);
            local_b0 = 0x3f800000;
            local_b8 = uVar3;
            FUN_1403a3dce(uVar4,fVar15,uVar6,uStack_8c);
          }
        }
        else {
          local_b0 = 0x3f800000;
          local_b8 = uVar3;
          FUN_1403a3f56(uVar4,fVar15,uVar5,uVar7);
          local_b0 = 0x3f800000;
          local_b8 = uVar3;
          FUN_1403a3f56(uVar4,uStack_90,uVar5,uVar7);
        }
        uVar9 = *(uint *)(param_1 + 4);
      }
      if ((char)uVar9 < '\0') {
        fVar15 = *(float *)(param_1 + 0x80);
        if (((fVar15 < *(float *)(param_1 + 0xfc)) && (*(float *)(param_1 + 0x134) <= fVar15)) &&
           (fVar15 < *(float *)(param_1 + 0x13c))) {
          local_b8 = *(undefined4 *)(param_1 + 0xa8);
          local_b0 = 0x3f800000;
          FUN_1403a3dce(uVar4,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
        }
      }
      FUN_1403a0c20(uVar4);
    }
  }
  if (ram0x000140613b10 == (local_80 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_80 ^ (ulonglong)auStack_d8);
}

