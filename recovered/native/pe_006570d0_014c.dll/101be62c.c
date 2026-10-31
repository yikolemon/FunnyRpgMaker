/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be62c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101be62c(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 **ppuVar23;
  int *piVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 *puStack_1034;
  int *piStack_1030;
  undefined1 *puStack_102c;
  undefined1 *puStack_1028;
  undefined1 *puStack_1024;
  int *piStack_1020;
  int iStack_101c;
  int iStack_1018;
  undefined8 uStack_1014;
  undefined1 *puStack_100c;
  undefined1 *puStack_1008;
  undefined4 *puStack_1004;
  int *piStack_1000;
  undefined1 *puStack_ffc;
  undefined1 *puStack_ff8;
  undefined4 *puStack_ff4;
  int *piStack_ff0;
  undefined4 uStack_fec;
  undefined4 uStack_fe8;
  undefined4 *puStack_fe4;
  int *piStack_fe0;
  undefined4 uStack_fdc;
  undefined4 uStack_fd8;
  undefined1 *puStack_fd4;
  int *piStack_fd0;
  undefined1 *puStack_fcc;
  undefined1 *puStack_fc8;
  int *piStack_fc4;
  undefined4 *puStack_fc0;
  undefined1 *puStack_fbc;
  undefined1 *puStack_fb8;
  int *piStack_fb4;
  undefined1 *puStack_fb0;
  int *piStack_fac;
  undefined4 *puStack_fa8;
  undefined1 *puStack_fa4;
  int *local_f7c;
  undefined8 *local_f78;
  int iStack_f5c;
  undefined4 uStack_f4c;
  undefined4 uStack_f1c;
  undefined4 uStack_f18;
  undefined1 auStack_f14 [16];
  int local_f04;
  undefined4 local_f00;
  undefined4 uStack_efc;
  undefined4 uStack_ef8;
  undefined4 uStack_ef4;
  undefined4 local_ef0;
  undefined1 auStack_e20 [80];
  int *piStack_dd0;
  uint uStack_dc8;
  undefined4 uStack_dc0;
  int *piStack_db4;
  int *piStack_da8;
  undefined4 uStack_da4;
  int *piStack_d9c;
  undefined4 uStack_d98;
  int *piStack_d94;
  int *apiStack_d90 [4];
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  undefined4 uStack_d78;
  undefined4 uStack_d70;
  undefined1 auStack_cec [12];
  undefined1 auStack_ce0 [16];
  undefined1 auStack_cd0 [12];
  undefined1 auStack_cc4 [12];
  undefined4 uStack_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined1 auStack_cac [4];
  undefined1 auStack_ca8 [4];
  undefined1 auStack_ca4 [8];
  undefined1 auStack_c9c [732];
  int aiStack_9c0 [12];
  undefined1 auStack_990 [212];
  undefined1 auStack_8bc [780];
  undefined1 auStack_5b0 [212];
  undefined1 auStack_4dc [756];
  int *piStack_1e8;
  int *piStack_1d4;
  undefined4 auStack_1d0 [3];
  undefined4 uStack_1c4;
  undefined4 auStack_1c0 [2];
  undefined4 uStack_1b8;
  undefined4 uStack_1ac;
  int *piStack_1a4;
  undefined1 auStack_194 [152];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  int iStack_e8;
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [168];
  int *piStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_f7c;
  if ((*(float *)(param_1 + 0x24) <= 0.0) || (*(float *)(param_1 + 0x28) <= 0.0)) goto LAB_101bedfe;
  puVar5 = (undefined8 *)FUN_101bd5e3();
  local_f7c = *(int **)((int)puVar5 + 4);
  piVar11 = *(int **)(param_1 + 0x38);
  local_f78 = puVar5;
  if ((piVar11 != (int *)0x0) && (iVar6 = *piVar11, iVar6 != 0)) {
    iVar7 = piVar11[2];
    iVar12 = 0;
    do {
      if (*(int *)(*(int *)(iVar7 + iVar12) + 4) != 0) {
        FUN_101bee2a();
      }
      iVar12 = iVar12 + 4;
    } while (iVar6 << 2 != iVar12);
  }
  puVar4 = local_f78;
  if (*(int **)((int)local_f78 + 0xc) == (int *)0x0) {
LAB_101be6ca:
    iVar6 = *(int *)(param_1 + 0xc);
    *(int *)(puVar4 + 7) = iVar6 + 5000;
    local_ef0 = 0;
    local_f04 = (iVar6 * 4 + 20000) * 5;
    local_f00 = _DAT_10302cf0;
    uStack_efc = _UNK_10302cf4;
    uStack_ef8 = _UNK_10302cf8;
    uStack_ef4 = _UNK_10302cfc;
    iVar6 = (**(code **)(**(int **)puVar4 + 0xc))();
    if (iVar6 < 0) goto LAB_101bedfe;
  }
  else if (*(int *)(local_f78 + 7) < *(int *)(param_1 + 0xc)) {
    (**(code **)(**(int **)((int)local_f78 + 0xc) + 8))();
    *(undefined4 *)((int)puVar5 + 0xc) = 0;
    goto LAB_101be6ca;
  }
  puVar4 = local_f78;
  if (*(int **)(local_f78 + 2) == (int *)0x0) {
LAB_101be72b:
    iVar6 = *(int *)(param_1 + 8);
    *(int *)((int)puVar4 + 0x3c) = iVar6 + 10000;
    local_ef0 = 0;
    local_f00 = _DAT_10302d00;
    uStack_efc = _UNK_10302d04;
    uStack_ef8 = _UNK_10302d08;
    uStack_ef4 = _UNK_10302d0c;
    local_f04 = iVar6 * 2 + 20000;
    iVar6 = (**(code **)(**(int **)puVar4 + 0xc))();
    if (iVar6 < 0) goto LAB_101bedfe;
  }
  else if (*(int *)((int)local_f78 + 0x3c) < *(int *)(param_1 + 8)) {
    (**(code **)(**(int **)(local_f78 + 2) + 8))();
    *(undefined4 *)(puVar5 + 2) = 0;
    goto LAB_101be72b;
  }
  piVar11 = local_f7c;
  iVar6 = (**(code **)(*local_f7c + 0x38))();
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*piVar11 + 0x38))();
    if (iVar6 == 0) {
      iStack_f5c = *(int *)(param_1 + 0x10);
      if (iStack_f5c != 0) {
        uStack_f4c = *(undefined4 *)(param_1 + 0x18);
        iStack_f5c = iStack_f5c << 2;
        iVar6 = 0;
        do {
          FUN_1025b2d0();
          FUN_1025b2d0();
          iVar6 = iVar6 + 4;
        } while (iStack_f5c != iVar6);
      }
      puVar5 = local_f78;
      piVar11 = local_f7c;
      (**(code **)(*local_f7c + 0x3c))();
      (**(code **)(*piVar11 + 0x3c))();
      puStack_fa4 = (undefined1 *)0x101be842;
      _memset(auStack_f14,0,0xee8);
      uStack_f18 = 0x10;
      uStack_f1c = 0x10;
      puStack_fa4 = (undefined1 *)0x101be862;
      (**(code **)(*piVar11 + 0x180))();
      puStack_fa4 = auStack_e20;
      piStack_fac = piVar11;
      puStack_fb0 = (undefined1 *)0x101be874;
      puStack_fa8 = &uStack_f18;
      (**(code **)(*piVar11 + 0x17c))();
      puStack_fb0 = auStack_cac;
      piStack_fb4 = piVar11;
      puStack_fb8 = (undefined1 *)0x101be885;
      (**(code **)(*piVar11 + 0x178))();
      puStack_fb8 = auStack_c9c;
      puStack_fbc = auStack_cac;
      puStack_fc0 = &uStack_cb0;
      piStack_fc4 = piVar11;
      puStack_fc8 = (undefined1 *)0x101be8a6;
      (**(code **)(*piVar11 + 0x16c))();
      puStack_fc8 = auStack_ca8;
      puStack_fcc = auStack_ca4;
      piStack_fd0 = piVar11;
      puStack_fd4 = (undefined1 *)0x101be8bf;
      (**(code **)(*piVar11 + 0x170))();
      puStack_fd4 = auStack_cac;
      uStack_fd8 = 1;
      uStack_fdc = 0;
      piStack_fe0 = piVar11;
      puStack_fe4 = (undefined4 *)0x101be8d7;
      (**(code **)(*piVar11 + 0x124))();
      puStack_fe4 = &uStack_cb8;
      uStack_fe8 = 1;
      uStack_fec = 0;
      piStack_ff0 = piVar11;
      puStack_ff4 = (undefined4 *)0x101be8ea;
      (**(code **)(*piVar11 + 300))();
      uStack_cb0 = 0x100;
      uStack_cb4 = 0x100;
      puStack_ff4 = &uStack_cb8;
      uStack_cb8 = 0x100;
      puStack_ff8 = auStack_cac;
      puStack_ffc = auStack_cc4;
      piStack_1000 = piVar11;
      puStack_1004 = (undefined4 *)0x101be924;
      (**(code **)(*piVar11 + 0x128))();
      puStack_1008 = auStack_8bc;
      puStack_100c = auStack_cd0;
      uStack_1014._4_4_ = piVar11;
      uStack_1014._0_4_ = 0x101be93e;
      puStack_1004 = &uStack_cb4;
      (**(code **)(*piVar11 + 0x130))();
      uStack_1014 = CONCAT44(uStack_1014._4_4_,auStack_c0);
      iStack_1018 = 1;
      iStack_101c = 0;
      piStack_1020 = piVar11;
      puStack_1024 = (undefined1 *)0x101be958;
      (**(code **)(*piVar11 + 0x120))();
      puStack_1028 = auStack_4dc;
      puStack_102c = auStack_cec;
      puStack_1024 = auStack_ce0;
      piStack_1030 = piVar11;
      puStack_1034 = (undefined1 *)0x101be979;
      (**(code **)(*piVar11 + 0x148))();
      puStack_1034 = auStack_ec;
      (**(code **)(*piVar11 + 0x14c))(piVar11);
      (**(code **)(*piVar11 + 0x140))(piVar11,auStack_f0,auStack_d8,auStack_e4);
      iVar12 = 0;
      (**(code **)(*piVar11 + 0x13c))(piVar11,0,1,auStack_fc,auStack_f0,auStack_ec);
      puVar25 = auStack_fc;
      (**(code **)(*piVar11 + 0x138))();
      iVar6 = iStack_e8;
      FUN_101befd6();
      iVar7 = FUN_1010331e();
      uStack_1014 = *puVar5;
      puStack_100c = *(undefined1 **)((int)puVar5 + 0x1c);
      *(undefined8 **)(puVar5 + 8) = &uStack_1014;
      *(undefined8 **)(iVar7 + 0x28) = &uStack_1014;
      if (*(int *)(iVar6 + 0x10) != 0) {
        fVar27 = *(float *)(iStack_e8 + 0x1c);
        fVar28 = *(float *)(iStack_e8 + 0x20);
        piVar8 = *(int **)(iStack_e8 + 0x2c);
        puStack_1034 = *(undefined1 **)(iStack_e8 + 0x30);
        puVar10 = *(undefined4 **)(iStack_e8 + 0x18);
        puVar26 = puVar10 + *(int *)(iVar6 + 0x10);
        iVar6 = 0;
        fVar29 = fVar27;
        fVar30 = fVar28;
        piStack_1030 = piVar8;
        puStack_102c = puStack_1034;
        do {
          piVar14 = (int *)*puVar10;
          if (0 < *piVar14) {
            iVar13 = 0;
            iVar16 = 0x18;
            piVar24 = piVar11;
            do {
              iVar1 = piVar14[2];
              iVar17 = iVar16 + iVar1;
              pcVar2 = *(code **)(iVar17 + 0x14);
              if (pcVar2 == (code *)0x0) {
                fVar19 = (*(float *)(iVar17 + -0x18) - fVar27) * (float)piVar8;
                fVar20 = (*(float *)(iVar17 + -0x14) - fVar28) * (float)puStack_1034;
                fVar21 = (*(float *)(iVar17 + -0x10) - fVar29) * (float)piStack_1030;
                fVar22 = (*(float *)(iVar17 + -0xc) - fVar30) * (float)puStack_102c;
                iVar17 = -(uint)(fVar19 < fVar21);
                iVar18 = -(uint)(fVar20 < fVar22);
                auVar3._4_4_ = iVar17;
                auVar3._0_4_ = iVar17;
                auVar3._8_4_ = iVar18;
                auVar3._12_4_ = iVar18;
                iVar17 = movmskpd(0,auVar3);
                piVar11 = piVar24;
                if (iVar17 == 3) {
                  puStack_1024 = (undefined1 *)(int)fVar19;
                  piStack_1020 = (int *)(int)fVar20;
                  iStack_101c = (int)fVar21;
                  iStack_1018 = (int)fVar22;
                  piVar14 = piVar24;
                  (**(code **)(*piVar24 + 0xb4))
                            (piVar24,1,&puStack_1024,piVar24,puVar25,iVar6,iVar12);
                  iVar17 = *(int *)(iVar1 + -8 + iVar16);
                  piVar11 = (int *)(iVar17 + 0x10);
                  if (iVar17 == 0) {
                    piVar11 = (int *)(iVar16 + iVar1);
                  }
                  puStack_1034 = (undefined1 *)*piVar11;
                  ppuVar23 = &puStack_1034;
                  iVar17 = 1;
                  (**(code **)(*piVar24 + 0x20))(piVar24,0,1,ppuVar23);
                  piVar11 = piVar14;
                  (**(code **)(*piVar24 + 0x30))
                            (piVar24,*(undefined4 *)(iVar1 + 0x10 + iVar16),
                             *(int *)(iVar1 + 0xc + iVar16) + (int)ppuVar23,
                             *(int *)(iVar1 + 8 + iVar16) + iVar17);
                }
              }
              else if (pcVar2 == FUN_10041162) {
                FUN_101befd6();
                piVar11 = piVar24;
              }
              else {
                (*pcVar2)(piVar14,(float *)(iVar17 + -0x18));
                piVar11 = piVar24;
              }
              iVar13 = iVar13 + 1;
              iVar16 = iVar16 + 0x40;
              piVar24 = piVar11;
            } while (iVar13 < *piVar14);
          }
          iVar12 = iVar12 + piVar14[3];
          iVar6 = iVar6 + piVar14[6];
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar26);
      }
      *(undefined4 *)(puVar25 + 0x40) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0;
      (**(code **)(*piVar11 + 0xb4))(piVar11,piStack_ff0,&uStack_fe8);
      (**(code **)(*piVar11 + 0xb0))(piVar11,puStack_ff8,&uStack_ef4);
      (**(code **)(*piVar11 + 0xac))(piVar11,uStack_d80);
      if (apiStack_d90[2] != (int *)0x0) {
        (**(code **)(*apiStack_d90[2] + 8))(apiStack_d90[2]);
      }
      (**(code **)(*piVar11 + 0x8c))(piVar11,apiStack_d90[3],&uStack_d80,uStack_d70);
      if (piStack_d94 != (int *)0x0) {
        (**(code **)(*piStack_d94 + 8))(piStack_d94);
      }
      (**(code **)(*piVar11 + 0x90))(piVar11,uStack_d78,uStack_d7c);
      if (apiStack_d90[3] != (int *)0x0) {
        (**(code **)(*apiStack_d90[3] + 8))(apiStack_d90[3]);
      }
      (**(code **)(*piVar11 + 0x20))(piVar11,0,1,&uStack_d80);
      if (apiStack_d90[0] != (int *)0x0) {
        (**(code **)(*apiStack_d90[0] + 8))(apiStack_d90[0]);
      }
      (**(code **)(*piVar11 + 0x28))(piVar11,0,1,apiStack_d90 + 1);
      if (piStack_d9c != (int *)0x0) {
        (**(code **)(*piStack_d9c + 8))(piStack_d9c);
      }
      (**(code **)(*piVar11 + 0x24))(piVar11,uStack_d98,&uStack_d80,apiStack_d90[1]);
      if (piStack_da8 != (int *)0x0) {
        (**(code **)(*piStack_da8 + 8))(piStack_da8);
      }
      if (piStack_d9c != (int *)0x0) {
        piVar14 = (int *)0x0;
        piVar8 = piStack_d9c;
        do {
          piVar24 = apiStack_d90[(int)piVar14];
          if (piVar24 != (int *)0x0) {
            (**(code **)(*piVar24 + 8))(piVar24);
            piVar8 = piStack_d9c;
          }
          piVar14 = (int *)((int)piVar14 + 1);
        } while (piVar14 < piVar8);
      }
      (**(code **)(*piVar11 + 0x2c))(piVar11,uStack_da4,auStack_990,uStack_d98);
      if (piStack_db4 != (int *)0x0) {
        (**(code **)(*piStack_db4 + 8))(piStack_db4);
      }
      (**(code **)(*piVar11 + 0x1c))(piVar11,0,1,auStack_194);
      if (piStack_1a4 != (int *)0x0) {
        (**(code **)(*piStack_1a4 + 8))(piStack_1a4);
      }
      (**(code **)(*piVar11 + 0x5c))(piVar11,uStack_dc0,auStack_5b0,piStack_db4);
      if (piStack_dd0 != (int *)0x0) {
        (**(code **)(*piStack_dd0 + 8))(piStack_dd0);
      }
      if (uStack_dc8 != 0) {
        uVar15 = 0;
        uVar9 = uStack_dc8;
        do {
          piVar8 = (int *)aiStack_9c0[uVar15];
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 8))(piVar8);
            uVar9 = uStack_dc8;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar9);
      }
      (**(code **)(*piVar11 + 0x60))(piVar11,auStack_1c0[0]);
      (**(code **)(*piVar11 + 0x4c))(piVar11,uStack_1c4,uStack_1ac,uStack_1b8);
      if (piStack_1d4 != (int *)0x0) {
        (**(code **)(*piStack_1d4 + 8))(piStack_1d4);
      }
      (**(code **)(*piVar11 + 0x48))(piVar11,0,1,auStack_1d0,&uStack_1c4,auStack_1c0);
      if (piStack_1e8 != (int *)0x0) {
        (**(code **)(*piStack_1e8 + 8))(piStack_1e8);
      }
      (**(code **)(*piVar11 + 0x44))(piVar11,auStack_1d0[0]);
      if (piStack_18 != (int *)0x0) {
        (**(code **)(*piStack_18 + 8))();
      }
    }
  }
LAB_101bedfe:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_f7c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

