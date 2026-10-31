/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d24f0 */

void FUN_100d24f0(void)

{
  int ****ppppiVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int ****ppppiVar9;
  float10 fVar10;
  int ***pppiVar11;
  float fVar12;
  longlong lVar13;
  undefined8 uVar14;
  int ***local_120;
  int ***local_11c;
  int ***local_118;
  int ***local_114;
  int ***local_110;
  int ***pppiStack_10c;
  int ***pppiStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  uint uStack_fc;
  undefined8 local_f8;
  int ***local_f0;
  int ***local_ec;
  int ***local_e8;
  char local_e1;
  int ***local_e0;
  int ***local_dc;
  int **local_d8;
  int ***local_d4;
  undefined8 local_d0;
  int ***pppiStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [4];
  uint uStack_bc;
  int ***local_94 [2];
  int ***local_8c [2];
  int ***local_84;
  int ***local_80;
  float local_7c;
  int ***local_78;
  float local_74;
  float local_70;
  float local_6c;
  int ***local_68;
  int ***local_64;
  float local_60;
  float local_5c;
  float local_58;
  int ***local_54;
  int ***local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_120;
  local_18 = 0xffffffff;
  local_1c = &LAB_100dde00;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  cVar2 = FUN_1014fafc(&DAT_1032f638,0,0);
  if (cVar2 != '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cfd8)
       && (FUN_1022c0d0(&DAT_1039cfd8), DAT_1039cfd8 == -1)) {
      local_18 = 0;
      FUN_1022c3a0(&LAB_100d5adf);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039cfd8);
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d040)
       && (FUN_1022c0d0(&DAT_1039d040), DAT_1039d040 == -1)) {
      local_120 = (int ***)0x0;
      do {
        local_18 = 2;
        FUN_1014b032();
        local_18 = 0xffffffff;
        local_120 = local_120 + 8;
      } while ((int ****)local_120 != (int ****)0x60);
      FUN_1022c3a0(&LAB_100d5b9a);
      FUN_1022c180(&DAT_1039d040);
    }
    FUN_100446d6();
    local_18 = 3;
    local_120 = (int ***)0x0;
    ppppiVar9 = (int ****)0x0;
    while (ppppiVar9 != (int ****)0xc) {
      local_11c = (int ***)ppppiVar9;
      FUN_100fdb2e(&local_d0,ppppiVar9[0x40e23a8],0,0,0xbf800000);
      pppiVar11 = (int ***)(int ****)local_d0;
      if ((float)(int ****)local_d0 <= (float)local_120) {
        pppiVar11 = local_120;
      }
      local_120 = pppiVar11;
      ppppiVar9 = (int ****)(local_11c + 1);
    }
    fVar10 = (float10)FUN_10111f20();
    local_11c = (int ***)(float)fVar10;
    local_38 = (float)local_11c;
    iVar4 = FUN_100fcb2d();
    local_114 = *(int ****)(iVar4 + 0x4c);
    fVar10 = (float10)FUN_101572bf(0x42c80000);
    local_3c = (float)fVar10;
    fVar12 = (float)local_114 * DAT_102b6c58 + (float)local_120 + (float)local_11c;
    if (fVar12 <= local_3c) {
      fVar12 = local_3c;
    }
    FUN_100fb68f(fVar12);
    FUN_10133e14("##combo",&DAT_1039cfd0,&PTR_DAT_10388ea0,3,0xffffffff);
    local_d4 = (int ***)DAT_1039cfd0;
    local_120 = (int ***)(&PTR_DAT_10388eb8)[(int)DAT_1039cfd0];
    FUN_10131ed3();
    FUN_10114a0e(0,0xbf800000);
    FUN_1012d079(&DAT_1032f288,0);
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f417,&DAT_1039cfd4,0x3f000000,0x3f4ccccd);
    if (cVar2 != '\0') {
      *(char *)(local_120 + 0x13) = '\x01';
    }
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f525,&DAT_1039cfd5,0x3f000000,0x3f4ccccd);
    if (cVar2 != '\0') {
      *(char *)(local_120 + 0x13) = '\x01';
    }
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f2d3,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1010c3e4(&local_d0);
    local_11c = (int ***)(int ****)local_d0;
    fVar10 = (float10)FUN_10111f20();
    local_114 = (int ***)(float)fVar10;
    local_40 = (float)local_114;
    FUN_100fdb2e(&local_110,&DAT_1032f4c1,0,0,0xbf800000);
    local_118 = local_110;
    iVar4 = FUN_100fcb2d();
    local_dc = *(int ****)(iVar4 + 0x4c);
    iVar4 = FUN_100fcb2d();
    local_e0 = *(int ****)(iVar4 + 100);
    iVar4 = FUN_100fcb2d();
    FUN_100fb68f((((((float)local_11c - (float)local_114) - (float)local_118) - (float)local_dc) -
                 (float)local_e0) - *(float *)(iVar4 + 0x5c));
    cVar2 = FUN_1015f7b4("##search",&DAT_1032ef34,&DAT_10388e88,0,0,0);
    if (cVar2 != '\0') {
      *(char *)(local_120 + 0x13) = '\x01';
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d044)
       && (FUN_1022c0d0(&DAT_1039d044), DAT_1039d044 == -1)) {
      local_18 = 10;
      FUN_1022c3a0(&LAB_100d5c87);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d044);
    }
    local_18 = 3;
    if ((DAT_10388ed4 != 0) && (cVar2 = FUN_10102a1a(0), cVar2 != '\0')) {
      puVar5 = &DAT_10388ec4;
      if (0xf < DAT_10388ed8) {
        puVar5 = DAT_10388ec4;
      }
      FUN_10103022("Error: %s",puVar5);
    }
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f4c1,&DAT_1039cfdc,0x3f000000,0x3f4ccccd);
    local_114 = (int ***)(&DAT_1039cfe0 + (int)local_d4 * 0x20);
    if (cVar2 == '\0') {
      if (*(char *)(local_120 + 0x13) == '\x01') goto code_r0x100d28c6;
    }
    else {
      *(char *)(local_120 + 0x13) = '\x01';
code_r0x100d28c6:
      DAT_10388ed4 = 0;
      puVar5 = &DAT_10388ec4;
      if (0xf < DAT_10388ed8) {
        puVar5 = DAT_10388ec4;
      }
      *(undefined1 *)puVar5 = 0;
      _local_c0 = (uint5)(uint)local_c0;
      if ((DAT_10388e98 != 0) && (DAT_1039cfdc != '\0')) {
        local_18 = 7;
        FUN_100d5c92(&DAT_10388e88);
      }
      local_110 = (int ***)0x0;
      pppiStack_10c = (int ***)0x0;
      pppiStack_108 = (int ***)0x0;
      local_18 = 9;
      local_11c = (int ***)local_120[1];
      local_118 = local_11c;
code_r0x100d2959:
      local_11c = (int ***)*local_11c;
      if (local_11c != local_118) {
        if (((DAT_1039cfd4 != '\x01') || (local_11c[10] != (int **)0x0)) &&
           ((DAT_1039cfd5 != '\x01' ||
            (local_11c[0x12] != (int **)0x0 || local_11c[0x13] != (int **)0x0)))) {
          if (DAT_10388e98 != 0) {
            if (DAT_1039cfdc == '\0') {
              iVar4 = FUN_100d5cc0(&DAT_10388e88,0);
              if (iVar4 == -1) {
                iVar4 = FUN_100d5cc0(&DAT_10388e88,0);
                if (iVar4 == -1) goto code_r0x100d2959;
              }
            }
            else {
              local_18 = 9;
              cVar2 = FUN_100d5d24(local_11c + 6,&local_d0,0);
              if (cVar2 == '\0') {
                cVar2 = FUN_100d5d24(local_11c + 0xc,&local_d0,0);
                if (cVar2 == '\0') goto code_r0x100d2959;
              }
            }
          }
          if (pppiStack_10c == pppiStack_108) {
            local_18 = 9;
            FUN_100d6cde(pppiStack_10c,local_11c + 2);
          }
          else {
            *(undefined8 *)pppiStack_10c = *(undefined8 *)(local_11c + 2);
            pppiStack_10c = pppiStack_10c + 2;
          }
        }
        goto code_r0x100d2959;
      }
      local_18 = 9;
      FUN_100d6e40(local_110,pppiStack_10c,(int)pppiStack_10c - (int)local_110 >> 3,
                   (uint)local_f0 & 0xff,(undefined1)local_f8);
      pppiVar11 = local_110;
      local_11c = pppiStack_10c;
      ppppiVar9 = (int ****)local_120[0x10];
      local_118 = (int ***)local_120[0x11];
      if (((int)pppiStack_10c - (int)local_110 != (int)local_118 - (int)ppppiVar9) ||
         (iVar4 = FUN_102595e0(local_110,ppppiVar9,(int)pppiStack_10c - (int)local_110), iVar4 != 0)
         ) {
        if ((int ****)(local_120 + 0x10) != &local_110) {
          local_120[0x10] = (int **)pppiVar11;
          local_120[0x11] = (int **)local_11c;
          pppiStack_10c = local_118;
          ppppiVar1 = (int ****)local_120[0x12];
          local_120[0x12] = (int **)pppiStack_108;
          local_110 = (int ***)ppppiVar9;
          pppiStack_108 = (int ***)ppppiVar1;
        }
        FUN_1014b0b0();
      }
      *(char *)(local_120 + 0x13) = '\0';
      local_18 = 0xffffffff;
      FUN_10004eae();
      if ((char)uStack_bc == '\x01') {
        FUN_10018a12();
      }
    }
    local_d0 = 0;
    local_18 = 3;
    cVar2 = FUN_1015f834(&DAT_1032f632,4,0x2000747,&local_d0,0);
    if (cVar2 != '\0') {
      FUN_10165094(0,1);
      fVar10 = (float10)FUN_101572bf(0x41f00000);
      local_44 = (float)fVar10;
      FUN_10164e8b(&DAT_1032f478,0x10,local_44,0);
      fVar10 = (float10)FUN_101572bf(0x42480000);
      local_48 = (float)fVar10;
      FUN_10164e8b(&DAT_1033cb72,0x10,local_48,0);
      FUN_10164e8b("Name",8,0,0);
      fVar10 = (float10)FUN_101572bf(0x42f00000);
      local_4c = (float)fVar10;
      FUN_10164e8b("Count",0x10,local_4c,0);
      FUN_1016601f();
      uVar6 = FUN_1014a0eb(0,*local_114,(int)local_120[0x11] - (int)local_120[0x10] >> 3);
      FUN_1014b266(uVar6);
      FUN_100fbc78();
      local_18 = 4;
      fVar10 = (float10)FUN_10111f20();
      local_11c = (int ***)(float)fVar10;
      local_50 = local_11c;
      iVar4 = FUN_100fcb2d();
      local_118 = *(int ****)(iVar4 + 0x50);
      iVar4 = FUN_100fcb2d();
      FUN_100fbd22((int)local_120[0x11] - (int)local_120[0x10] >> 3,
                   *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x70) +
                   (float)local_118 + (float)local_118 + (float)local_11c);
      local_e0 = local_120 + 8;
      while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
        uVar7 = (uint)(int ****)local_d0;
        while ((int)uVar7 < local_d0._4_4_) {
          local_e8 = (int ***)uVar7;
          FUN_100d773c(&local_110,local_120[0x10] + uVar7 * 2);
          local_11c = local_110;
          FUN_10165364(0,0);
          FUN_10113358(local_e8);
          FUN_10165606(0);
          FUN_1014ae21(local_e8,(int)local_e8 >> 0x1f);
          fVar10 = (float10)FUN_101155f9();
          pppiStack_10c = (int ***)(float)fVar10;
          local_110 = (int ***)0x0;
          local_84 = pppiStack_10c;
          uVar3 = FUN_1014b156(local_e8);
          FUN_10133727("##multiselectable",uVar3,0x12,&local_110);
          cVar2 = FUN_10102a1a(0);
          if ((cVar2 != '\0') && ((int ***)local_11c[0x10] != (int ***)0x0)) {
            if (local_11c[0x11] < (int ***)0x10) {
              ppppiVar9 = (int ****)(local_11c + 0xc);
            }
            else {
              ppppiVar9 = (int ****)local_11c[0xc];
            }
            FUN_10103022("%s",ppppiVar9);
          }
          FUN_10114a0e(0,0);
          ppppiVar9 = (int ****)(local_11c + 4);
          uVar6 = FUN_100d7b05(ppppiVar9);
          local_118 = (int ***)ppppiVar9;
          FUN_100d78b0(&local_110,ppppiVar9,uVar6);
          local_94[0] = (int ***)CONCAT31(local_94[0]._1_3_,(int ****)pppiStack_10c != (int ****)0x0
                                         );
          cVar2 = FUN_1015650c("##freeze",local_94,0x3ecccccd,0x3f4ccccd);
          if (cVar2 != '\0') {
            if ((char)local_94[0] == '\x01') {
              FUN_100d5d54(&local_110,local_118);
              cVar2 = FUN_1014b156(local_e8);
              if (cVar2 != '\0') {
                local_f8 = local_f8 & 0xffffffff00000000;
                local_f0 = (int ***)0x0;
                while (cVar2 = FUN_1014b16c(&local_f8,&local_f0), cVar2 != '\0') {
                  FUN_100d5d54(&local_110,local_120[0x10] + (int)local_f0 * 2);
                }
              }
            }
            else {
              FUN_100d8312(local_118);
              cVar2 = FUN_1014b156(local_e8);
              if (cVar2 != '\0') {
                local_110 = (int ***)0x0;
                local_f8 = local_f8 & 0xffffffff00000000;
                while (cVar2 = FUN_1014b16c(&local_110,&local_f8), cVar2 != '\0') {
                  FUN_100d8312(local_120[0x10] + (int)local_f8 * 2);
                }
              }
            }
          }
          FUN_10165606(1);
          FUN_10131ed3();
          FUN_100d2010(&local_110,*local_118,local_118[1]);
          local_18 = 5;
          ppppiVar9 = &local_110;
          if (0xf < uStack_fc) {
            ppppiVar9 = (int ****)local_110;
          }
          FUN_1012d079(ppppiVar9,0);
          local_18 = 0xffffffff;
          FUN_10001fee();
          local_18 = 4;
          FUN_10165606(2);
          if (local_11c[0xb] < (int ***)0x10) {
            ppppiVar9 = (int ****)(local_11c + 6);
          }
          else {
            ppppiVar9 = (int ****)local_11c[6];
          }
          FUN_1012d079(ppppiVar9,0);
          FUN_10165606(3);
          FUN_1010c3e4(&local_110);
          FUN_100fb68f(local_110);
          local_11c = local_11c + 0x12;
          cVar2 = FUN_101412ec("##value",6,local_11c,0,0,0,0);
          if (cVar2 != '\0') {
            FUN_100d1565(local_118[1],*local_11c,local_11c[1]);
            cVar2 = FUN_1014b156(local_e8);
            if (cVar2 != '\0') {
              local_f8 = local_f8 & 0xffffffff00000000;
              local_f0 = (int ***)0x0;
              while (cVar2 = FUN_1014b16c(&local_f8,&local_f0), cVar2 != '\0') {
                local_118 = (int ***)*local_11c;
                local_dc = (int ***)local_11c[1];
                FUN_100d773c(&local_110,local_120[0x10] + (int)local_f0 * 2);
                local_110[0x12] = (int **)local_118;
                local_110[0x13] = (int **)local_dc;
                FUN_100d1565(local_120[0x10][(int)local_f0 * 2 + 1],*local_11c,local_11c[1]);
              }
            }
          }
          FUN_10113568();
          uVar7 = (int)local_e8 + 1;
        }
      }
      uVar6 = FUN_1014a9f9();
      FUN_1014b266(uVar6);
      FUN_1016304e();
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    local_18 = 3;
    FUN_10150ac8();
    local_18 = 0xffffffff;
    FUN_1022c200(&DAT_10388dd4);
  }
  cVar2 = FUN_1014fafc(&DAT_1032efc8,0,0);
  if (cVar2 != '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d04c)
       && (FUN_1022c0d0(&DAT_1039d04c), DAT_1039d04c == -1)) {
      local_18 = 0xb;
      FUN_1022c3a0(&LAB_100d5eba);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d04c);
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d074)
       && (FUN_1022c0d0(&DAT_1039d074), DAT_1039d074 == -1)) {
      local_18 = 0xc;
      FUN_1014b032();
      FUN_1022c3a0(&LAB_100d5ec4);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d074);
    }
    FUN_100446d6();
    local_18 = 0xd;
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f288,0);
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f417,&DAT_1039d048,0x3f000000,0x3f4ccccd);
    if (cVar2 != '\0') {
      DAT_1039cf64 = '\x01';
    }
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f2d3,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1010c3e4(&local_d0);
    local_120 = (int ***)(int ****)local_d0;
    fVar10 = (float10)FUN_10111f20();
    local_11c = (int ***)(float)fVar10;
    local_54 = local_11c;
    FUN_100fdb2e(&local_110,&DAT_1032f4c1,0,0,0xbf800000);
    local_114 = local_110;
    iVar4 = FUN_100fcb2d();
    local_118 = *(int ****)(iVar4 + 0x4c);
    iVar4 = FUN_100fcb2d();
    local_dc = *(int ****)(iVar4 + 100);
    iVar4 = FUN_100fcb2d();
    FUN_100fb68f((((((float)local_120 - (float)local_11c) - (float)local_114) - (float)local_118) -
                 (float)local_dc) - *(float *)(iVar4 + 0x5c));
    cVar2 = FUN_1015f7b4("##search",&DAT_1032f41a,&DAT_10388edc,0,0,0);
    if (cVar2 != '\0') {
      DAT_1039cf64 = '\x01';
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d078)
       && (FUN_1022c0d0(&DAT_1039d078), DAT_1039d078 == -1)) {
      local_18 = 0xe;
      FUN_1022c3a0(&LAB_100d5f6c);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d078);
    }
    local_18 = 0xd;
    if ((DAT_10388f04 != 0) && (cVar2 = FUN_10102a1a(0), cVar2 != '\0')) {
      puVar5 = &DAT_10388ef4;
      if (0xf < DAT_10388f08) {
        puVar5 = DAT_10388ef4;
      }
      FUN_10103022("Error: %s",puVar5);
    }
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f4c1,&DAT_1039d050,0x3f000000,0x3f4ccccd);
    if (cVar2 != '\0') {
      DAT_1039cf64 = '\x01';
code_r0x100d3351:
      DAT_10388f04 = 0;
      puVar5 = &DAT_10388ef4;
      if (0xf < DAT_10388f08) {
        puVar5 = DAT_10388ef4;
      }
      *(undefined1 *)puVar5 = 0;
      _local_c0 = (uint5)(uint)local_c0;
      if ((DAT_10388eec != 0) && (DAT_1039d050 != '\0')) {
        local_18 = 0x10;
        FUN_100d5c92(&DAT_10388edc);
      }
      local_110 = (int ***)0x0;
      pppiStack_10c = (int ***)0x0;
      pppiStack_108 = (int ***)0x0;
      local_18 = 0x12;
      local_11c = DAT_1039cf1c;
      local_120 = DAT_1039cf1c;
code_r0x100d33e3:
      do {
        local_120 = (int ***)*local_120;
        if (local_120 == local_11c) goto code_r0x100d348b;
        if ((DAT_1039d048 != '\x01') || (local_120[10] != (int **)0x0)) {
          if (DAT_10388eec != 0) {
            if (DAT_1039d050 == '\0') {
              iVar4 = FUN_100d5cc0(&DAT_10388edc,0);
              if (iVar4 == -1) goto code_r0x100d33e3;
            }
            else {
              local_18 = 0x12;
              cVar2 = FUN_100d5d24(local_120 + 6,&local_d0,0);
              if (cVar2 == '\0') goto code_r0x100d33e3;
            }
          }
          if (pppiStack_10c == pppiStack_108) {
            local_18 = 0x12;
            FUN_100d6cde(pppiStack_10c,local_120 + 2);
          }
          else {
            *(undefined8 *)pppiStack_10c = *(undefined8 *)(local_120 + 2);
            pppiStack_10c = pppiStack_10c + 2;
          }
        }
      } while( true );
    }
    if (DAT_1039cf64 == '\x01') goto code_r0x100d3351;
    goto LAB_100d3552;
  }
  goto LAB_100d3ae3;
code_r0x100d3e80:
  local_18 = 0x1c;
  FUN_100d6e40(local_110,pppiStack_10c,(int)pppiStack_10c - (int)local_110 >> 3,
               (uint)local_f0 & 0xff,(undefined1)local_f8);
  pppiVar11 = local_110;
  ppppiVar9 = DAT_1039cfa8;
  local_120 = pppiStack_10c;
  local_11c = (int ***)DAT_1039cfac;
  if (((int)pppiStack_10c - (int)local_110 != (int)DAT_1039cfac - (int)DAT_1039cfa8) ||
     (iVar4 = FUN_102595e0(local_110,DAT_1039cfa8,(int)pppiStack_10c - (int)local_110), iVar4 != 0))
  {
    ppppiVar1 = DAT_1039cfb0;
    DAT_1039cfa8 = (int ****)pppiVar11;
    local_110 = (int ***)ppppiVar9;
    DAT_1039cfac = (int ****)local_120;
    pppiStack_10c = local_11c;
    DAT_1039cfb0 = (int ****)pppiStack_108;
    pppiStack_108 = (int ***)ppppiVar1;
    FUN_1014b0b0();
  }
  DAT_1039cfb4 = '\0';
  local_18 = 0xffffffff;
  FUN_10004eae();
  if ((char)uStack_bc == '\x01') {
    FUN_10018a12();
  }
  goto LAB_100d3f47;
code_r0x100d348b:
  local_18 = 0x12;
  FUN_100d6e40(local_110,pppiStack_10c,(int)pppiStack_10c - (int)local_110 >> 3,
               (uint)local_f0 & 0xff,(undefined1)local_f8);
  pppiVar11 = local_110;
  ppppiVar9 = DAT_1039cf58;
  local_120 = pppiStack_10c;
  local_11c = (int ***)DAT_1039cf5c;
  if (((int)pppiStack_10c - (int)local_110 != (int)DAT_1039cf5c - (int)DAT_1039cf58) ||
     (iVar4 = FUN_102595e0(local_110,DAT_1039cf58,(int)pppiStack_10c - (int)local_110), iVar4 != 0))
  {
    ppppiVar1 = DAT_1039cf60;
    DAT_1039cf58 = (int ****)pppiVar11;
    local_110 = (int ***)ppppiVar9;
    DAT_1039cf5c = (int ****)local_120;
    pppiStack_10c = local_11c;
    DAT_1039cf60 = (int ****)pppiStack_108;
    pppiStack_108 = (int ***)ppppiVar1;
    FUN_1014b0b0();
  }
  DAT_1039cf64 = '\0';
  local_18 = 0xffffffff;
  FUN_10004eae();
  if ((char)uStack_bc == '\x01') {
    FUN_10018a12();
  }
LAB_100d3552:
  local_d0 = 0;
  local_18 = 0xd;
  cVar2 = FUN_1015f834(&DAT_1032efc2,4,0x2000747,&local_d0,0);
  if (cVar2 != '\0') {
    FUN_10165094(0,1);
    fVar10 = (float10)FUN_101572bf(0x41f00000);
    local_58 = (float)fVar10;
    FUN_10164e8b(&DAT_1032f478,0x10,local_58,0);
    fVar10 = (float10)FUN_101572bf(0x42480000);
    local_5c = (float)fVar10;
    FUN_10164e8b(&DAT_1033cb72,0x10,local_5c,0);
    FUN_10164e8b("Name",8,0,0);
    fVar10 = (float10)FUN_101572bf(0x42480000);
    local_60 = (float)fVar10;
    FUN_10164e8b("On/Off",0x10,local_60,0);
    FUN_1016601f();
    uVar6 = FUN_1014a0eb(0,DAT_1039d054,(int)DAT_1039cf5c - (int)DAT_1039cf58 >> 3);
    FUN_1014b266(uVar6);
    FUN_100fbc78();
    local_18 = 0x13;
    fVar10 = (float10)FUN_10111f20();
    local_120 = (int ***)(float)fVar10;
    local_64 = local_120;
    iVar4 = FUN_100fcb2d();
    local_11c = *(int ****)(iVar4 + 0x50);
    iVar4 = FUN_100fcb2d();
    FUN_100fbd22((int)DAT_1039cf5c - (int)DAT_1039cf58 >> 3,
                 *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x70) +
                 (float)local_11c + (float)local_11c + (float)local_120);
    while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
      ppppiVar9 = (int ****)local_d0;
      while ((int)ppppiVar9 < local_d0._4_4_) {
        local_118 = (int ***)ppppiVar9;
        FUN_100d773c(&local_110,DAT_1039cf58 + (int)ppppiVar9 * 2);
        local_120 = local_110;
        FUN_10165364(0,0);
        FUN_10113358(local_118);
        FUN_10165606(0);
        FUN_1014ae21(local_118,(int)local_118 >> 0x1f);
        fVar10 = (float10)FUN_101155f9();
        pppiStack_10c = (int ***)(float)fVar10;
        local_110 = (int ***)0x0;
        local_80 = pppiStack_10c;
        uVar3 = FUN_1014b156(local_118);
        FUN_10133727("##multiselectable",uVar3,0x12,&local_110);
        FUN_10114a0e(0,0);
        ppppiVar9 = (int ****)(local_120 + 4);
        uVar6 = FUN_100d7b05(ppppiVar9);
        local_11c = (int ***)ppppiVar9;
        FUN_100d78b0(&local_110,ppppiVar9,uVar6);
        local_94[0] = (int ***)CONCAT31(local_94[0]._1_3_,(int ****)pppiStack_10c != (int ****)0x0);
        cVar2 = FUN_1015650c("##freeze",local_94,0x3ecccccd,0x3f4ccccd);
        if (cVar2 != '\0') {
          if ((char)local_94[0] == '\x01') {
            FUN_100d5d54(&local_110,local_11c);
            cVar2 = FUN_1014b156(local_118);
            if (cVar2 != '\0') {
              local_f8 = local_f8 & 0xffffffff00000000;
              local_f0 = (int ***)0x0;
              while (cVar2 = FUN_1014b16c(&local_f8,&local_f0), cVar2 != '\0') {
                FUN_100d5d54(&local_110,DAT_1039cf58 + (int)local_f0 * 2);
              }
            }
          }
          else {
            FUN_100d8312(local_11c);
            cVar2 = FUN_1014b156(local_118);
            if (cVar2 != '\0') {
              local_110 = (int ***)0x0;
              local_f8 = local_f8 & 0xffffffff00000000;
              while (cVar2 = FUN_1014b16c(&local_110,&local_f8), cVar2 != '\0') {
                FUN_100d8312(DAT_1039cf58 + (int)local_f8 * 2);
              }
            }
          }
        }
        FUN_10165606(1);
        FUN_10131ed3();
        FUN_100d2010(&local_110,*local_11c,local_11c[1]);
        local_18 = 0x14;
        ppppiVar9 = &local_110;
        if (0xf < uStack_fc) {
          ppppiVar9 = (int ****)local_110;
        }
        FUN_1012d079(ppppiVar9,0);
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0x13;
        FUN_10165606(2);
        if (local_120[0xb] < (int ***)0x10) {
          ppppiVar9 = (int ****)(local_120 + 6);
        }
        else {
          ppppiVar9 = (int ****)local_120[6];
        }
        FUN_1012d079(ppppiVar9,0);
        FUN_10165606(3);
        local_8c[0] = (int ***)CONCAT31(local_8c[0]._1_3_,
                                        (int ***)local_120[0x12] != (int ***)0x0 ||
                                        (int ***)local_120[0x13] != (int ***)0x0);
        cVar2 = FUN_1015650c("##switch",local_8c,0x3ecccccd,0x3f4ccccd);
        if (cVar2 != '\0') {
          local_120[0x12] = (int **)((uint)local_8c[0] & 0xff);
          local_120[0x13] = (int **)0x0;
          FUN_100d0d9d((int ***)((uint)local_8c[0] & 0xff));
          cVar2 = FUN_1014b156(local_118);
          if (cVar2 != '\0') {
            local_f8 = local_f8 & 0xffffffff00000000;
            local_f0 = (int ***)0x0;
            while (cVar2 = FUN_1014b16c(&local_f8,&local_f0), cVar2 != '\0') {
              local_11c = (int ***)local_120[0x12];
              local_114 = (int ***)local_120[0x13];
              FUN_100d773c(&local_110,DAT_1039cf58 + (int)local_f0 * 2);
              local_110[0x12] = (int **)local_11c;
              local_110[0x13] = (int **)local_114;
              FUN_100d0d9d((int ***)local_120[0x12] != (int ***)0x0 ||
                           (int ***)local_120[0x13] != (int ***)0x0);
            }
          }
        }
        FUN_10113568();
        ppppiVar9 = (int ****)((int)local_118 + 1);
      }
    }
    uVar6 = FUN_1014a9f9();
    FUN_1014b266(uVar6);
    FUN_1016304e();
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
  }
  local_18 = 0xd;
  FUN_10150ac8();
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_10388d74);
LAB_100d3ae3:
  cVar2 = FUN_1014fafc(&DAT_1032f4fc,0,0);
  if (cVar2 != '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d080)
       && (FUN_1022c0d0(&DAT_1039d080), DAT_1039d080 == -1)) {
      local_18 = 0x15;
      FUN_1022c3a0(&LAB_100d5f76);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d080);
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d0a8)
       && (FUN_1022c0d0(&DAT_1039d0a8), DAT_1039d0a8 == -1)) {
      local_18 = 0x16;
      FUN_1014b032();
      FUN_1022c3a0(&LAB_100d5f80);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d0a8);
    }
    FUN_100446d6();
    local_18 = 0x17;
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f288,0);
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f417,&DAT_1039d07c,0x3f000000,0x3f4ccccd);
    if (cVar2 != '\0') {
      DAT_1039cfb4 = '\x01';
    }
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f2d3,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1010c3e4(&local_d0);
    local_120 = (int ***)(int ****)local_d0;
    fVar10 = (float10)FUN_10111f20();
    local_11c = (int ***)(float)fVar10;
    local_68 = local_11c;
    FUN_100fdb2e(&local_110,&DAT_1032f4c1,0,0,0xbf800000);
    local_114 = local_110;
    iVar4 = FUN_100fcb2d();
    local_118 = *(int ****)(iVar4 + 0x4c);
    iVar4 = FUN_100fcb2d();
    local_dc = *(int ****)(iVar4 + 100);
    iVar4 = FUN_100fcb2d();
    FUN_100fb68f((((((float)local_120 - (float)local_11c) - (float)local_114) - (float)local_118) -
                 (float)local_dc) - *(float *)(iVar4 + 0x5c));
    cVar2 = FUN_1015f7b4("##search",&DAT_1032f41a,&DAT_10388f0c,0,0,0);
    if (cVar2 != '\0') {
      DAT_1039cfb4 = '\x01';
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d0ac)
       && (FUN_1022c0d0(&DAT_1039d0ac), DAT_1039d0ac == -1)) {
      local_18 = 0x18;
      FUN_1022c3a0(&LAB_100d6028);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d0ac);
    }
    local_18 = 0x17;
    if ((DAT_10388f34 != 0) && (cVar2 = FUN_10102a1a(0), cVar2 != '\0')) {
      puVar5 = &DAT_10388f24;
      if (0xf < DAT_10388f38) {
        puVar5 = DAT_10388f24;
      }
      FUN_10103022("Error: %s",puVar5);
    }
    FUN_10114a0e(0,0xbf800000);
    cVar2 = FUN_1015650c(&DAT_1032f4c1,&DAT_1039d084,0x3f000000,0x3f4ccccd);
    if (cVar2 == '\0') {
      if (DAT_1039cfb4 != '\x01') {
LAB_100d3f47:
        local_d0 = 0;
        local_18 = 0x17;
        cVar2 = FUN_1015f834(&DAT_1032f4f6,4,0x2000747,&local_d0,0);
        if (cVar2 != '\0') {
          FUN_10165094(0,1);
          fVar10 = (float10)FUN_101572bf(0x41f00000);
          local_6c = (float)fVar10;
          FUN_10164e8b(&DAT_1032f478,0x10,local_6c,0);
          fVar10 = (float10)FUN_101572bf(0x42480000);
          local_70 = (float)fVar10;
          FUN_10164e8b(&DAT_1033cb72,0x10,local_70,0);
          FUN_10164e8b("Name",8,0,0);
          fVar10 = (float10)FUN_101572bf(0x43200000);
          local_74 = (float)fVar10;
          FUN_10164e8b("Value",0x10,local_74,0);
          FUN_1016601f();
          uVar6 = FUN_1014a0eb(0,DAT_1039d088,(int)DAT_1039cfac - (int)DAT_1039cfa8 >> 3);
          FUN_1014b266(uVar6);
          FUN_100fbc78();
          local_18 = 0x1d;
          fVar10 = (float10)FUN_10111f20();
          local_120 = (int ***)(float)fVar10;
          local_78 = local_120;
          iVar4 = FUN_100fcb2d();
          local_11c = *(int ****)(iVar4 + 0x50);
          iVar4 = FUN_100fcb2d();
          FUN_100fbd22((int)DAT_1039cfac - (int)DAT_1039cfa8 >> 3,
                       *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x70) +
                       (float)local_11c + (float)local_11c + (float)local_120);
          while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
            for (local_d8 = (int **)(int ****)local_d0; (int)local_d8 < local_d0._4_4_;
                local_d8 = (int **)((int)local_d8 + 1)) {
              FUN_100d83bc(&local_110,DAT_1039cfa8 + (int)local_d8 * 2);
              local_120 = local_110;
              FUN_10165364(0,0);
              FUN_10113358(local_d8);
              FUN_10165606(0);
              FUN_1014ae21(local_d8,(int)local_d8 >> 0x1f);
              fVar10 = (float10)FUN_101155f9();
              pppiStack_10c = (int ***)(float)fVar10;
              local_110 = (int ***)0x0;
              local_7c = (float)pppiStack_10c;
              uVar3 = FUN_1014b156(local_d8);
              FUN_10133727("##multiselectable",uVar3,0x12,&local_110);
              FUN_10114a0e(0,0);
              ppppiVar9 = (int ****)(local_120 + 4);
              uVar6 = FUN_100d7b05(ppppiVar9);
              local_11c = (int ***)ppppiVar9;
              FUN_100d78b0(&local_110,ppppiVar9,uVar6);
              local_e1 = pppiStack_10c != (int ***)0x0;
              cVar2 = FUN_1015650c("##freeze",&local_e1,0x3ecccccd,0x3f4ccccd);
              if (cVar2 != '\0') {
                if (local_e1 == '\x01') {
                  FUN_100d5d54(&local_110,local_11c);
                  cVar2 = FUN_1014b156(local_d8);
                  if (cVar2 != '\0') {
                    local_f8 = local_f8 & 0xffffffff00000000;
                    local_f0 = (int ***)0x0;
                    while (cVar2 = FUN_1014b16c(&local_f8,&local_f0), cVar2 != '\0') {
                      FUN_100d5d54(&local_110,DAT_1039cfa8 + (int)local_f0 * 2);
                    }
                  }
                }
                else {
                  FUN_100d8312(local_11c);
                  cVar2 = FUN_1014b156(local_d8);
                  if (cVar2 != '\0') {
                    local_110 = (int ***)0x0;
                    local_f8 = local_f8 & 0xffffffff00000000;
                    while (cVar2 = FUN_1014b16c(&local_110,&local_f8), cVar2 != '\0') {
                      FUN_100d8312(DAT_1039cfa8 + (int)local_f8 * 2);
                    }
                  }
                }
              }
              FUN_10165606(1);
              FUN_10131ed3();
              FUN_100d2010(&local_110,*local_11c,local_11c[1]);
              local_18 = 0x1e;
              ppppiVar9 = &local_110;
              if (0xf < uStack_fc) {
                ppppiVar9 = (int ****)local_110;
              }
              FUN_1012d079(ppppiVar9,0);
              local_18 = 0xffffffff;
              FUN_10001fee();
              local_18 = 0x1d;
              FUN_10165606(2);
              if (local_120[0xb] < (int ***)0x10) {
                ppppiVar9 = (int ****)(local_120 + 6);
              }
              else {
                ppppiVar9 = (int ****)local_120[6];
              }
              FUN_1012d079(ppppiVar9,0);
              FUN_10165606(3);
              if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
                   DAT_1039d0b0) && (FUN_1022c0d0(&DAT_1039d0b0), DAT_1039d0b0 == -1)) {
                local_18 = 0x1f;
                FUN_1022c3a0(&LAB_100d6032);
                local_18 = 0xffffffff;
                FUN_1022c180(&DAT_1039d0b0);
              }
              ppppiVar9 = (int ****)(local_120 + 0xc);
              local_18 = 0x1d;
              if (ppppiVar9 != (int ****)&DAT_10388f3c) {
                if ((int ***)0xf < local_120[0x11]) {
                  ppppiVar9 = (int ****)local_120[0xc];
                }
                FUN_100180a6(ppppiVar9,local_120[0x10]);
              }
              local_110 = local_11c;
              pppiStack_10c = &local_d8;
              FUN_1010c3e4(&local_f8);
              FUN_100fb68f((int)local_f8);
              cVar2 = FUN_1015f67c(&DAT_1033b6dd,&DAT_10388f3c,0,0,0);
              if (cVar2 != '\0') {
                FUN_100d603c();
              }
              FUN_101169c1(&DAT_1033b6df,8);
              local_f8 = DAT_102b6c60;
              FUN_10107cf6(&local_f8,4);
              *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
              uVar6 = FUN_101021d4(&DAT_1033b6df,0);
              cVar2 = FUN_1011653c(uVar6,1);
              if (cVar2 != '\0') {
                FUN_1010c3e4(&local_f0);
                local_120 = local_ec;
                FUN_1010c3e4(local_94);
                local_11c = local_94[0];
                FUN_100fdb2e(local_8c,&DAT_1032f4ba,0,0,0xbf800000);
                local_114 = local_8c[0];
                iVar4 = FUN_100fcb2d();
                local_f8 = CONCAT44(local_120,
                                    ((float)local_11c - (float)local_114) -
                                    (*(float *)(iVar4 + 0x4c) + *(float *)(iVar4 + 0x4c)));
                cVar2 = FUN_1015f736("##multiline",&DAT_10388f3c,&local_f8,0,0,0);
                if (cVar2 != '\0') {
                  FUN_100d603c();
                }
                FUN_10114a0e(0,0xbf800000);
                local_f8 = 0;
                cVar2 = FUN_1012e1b7(&DAT_1032f4ba,&local_f8);
                if (cVar2 != '\0') {
                  FUN_1011648c();
                }
                FUN_101165cb();
              }
              FUN_10113568();
            }
          }
          uVar6 = FUN_1014a9f9();
          FUN_1014b266(uVar6);
          FUN_1016304e();
          local_18 = 0xffffffff;
          thunk_FUN_100fbc90();
        }
        local_18 = 0x17;
        FUN_10150ac8();
        local_18 = 0xffffffff;
        FUN_1022c200(&DAT_10388da4);
        goto code_r0x100d462b;
      }
    }
    else {
      DAT_1039cfb4 = '\x01';
    }
    DAT_10388f34 = 0;
    puVar5 = &DAT_10388f24;
    if (0xf < DAT_10388f38) {
      puVar5 = DAT_10388f24;
    }
    *(undefined1 *)puVar5 = 0;
    _local_c0 = (uint5)(uint)local_c0;
    if ((DAT_10388f1c != 0) && (DAT_1039d084 != '\0')) {
      local_18 = 0x1a;
      FUN_100d5c92(&DAT_10388f0c);
    }
    local_110 = (int ***)0x0;
    pppiStack_10c = (int ***)0x0;
    pppiStack_108 = (int ***)0x0;
    local_18 = 0x1c;
    local_11c = DAT_1039cf6c;
    local_120 = DAT_1039cf6c;
code_r0x100d3dd8:
    do {
      local_120 = (int ***)*local_120;
      if (local_120 == local_11c) goto code_r0x100d3e80;
      if ((DAT_1039d07c != '\x01') || (local_120[10] != (int **)0x0)) {
        if (DAT_10388f1c != 0) {
          if (DAT_1039d084 == '\0') {
            iVar4 = FUN_100d5cc0(&DAT_10388f0c,0);
            if (iVar4 == -1) goto code_r0x100d3dd8;
          }
          else {
            local_18 = 0x1c;
            cVar2 = FUN_100d5d24(local_120 + 6,&local_d0,0);
            if (cVar2 == '\0') goto code_r0x100d3dd8;
          }
        }
        if (pppiStack_10c == pppiStack_108) {
          local_18 = 0x1c;
          FUN_100d6cde(pppiStack_10c,local_120 + 2);
        }
        else {
          *(undefined8 *)pppiStack_10c = *(undefined8 *)(local_120 + 2);
          pppiStack_10c = pppiStack_10c + 2;
        }
      }
    } while( true );
  }
code_r0x100d462b:
  cVar2 = FUN_1014fafc(&DAT_1032efdc,0,0);
  if (cVar2 != '\0') {
    FUN_100446d6();
    local_d0 = 0;
    pppiStack_c8 = (int ***)0x0;
    uStack_c4 = 0;
    _local_c0 = 0xf00000000;
    local_f0 = (int ***)0x0;
    local_114 = (int ***)DAT_1039cfbc;
    for (local_120 = (int ***)DAT_1039cfb8; local_120 != local_114; local_120 = local_120 + 4) {
      if (*(char *)local_120 == '\x01') {
        pppiStack_10c = (int ***)0xffffffff;
        local_110 = (int ***)0xffffffff;
        local_18 = 0x21;
        lVar13 = FUN_100d627a("actorId",&local_110);
        if (lVar13 == CONCAT44(DAT_10388f5c,DAT_10388f58)) {
          FUN_100d63c6(&local_110,"name",&DAT_10356101);
          local_18 = 0x23;
          FUN_10004e60();
          _local_c0 = CONCAT44(uStack_fc,local_100);
          local_d0 = CONCAT44(pppiStack_10c,local_110);
          pppiStack_c8 = pppiStack_108;
          uStack_c4 = uStack_104;
          local_100 = 0;
          uStack_fc = 0xf;
          local_110 = (int ***)((uint)local_110 & 0xffffff00);
          local_18 = 0xffffffff;
          FUN_10001fee();
          local_f0 = local_120;
          break;
        }
      }
    }
    local_18 = 0x21;
    FUN_10131ed3();
    FUN_1012d079(&DAT_1032f005,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1010c3e4(&local_110);
    FUN_100fb68f(local_110);
    if (uStack_bc < 0x10) {
      puVar8 = &local_d0;
    }
    else {
      puVar8 = (undefined8 *)(int ****)local_d0;
    }
    cVar2 = FUN_10132c48("##combo",puVar8,0);
    if (cVar2 != '\0') {
      local_d4 = (int ***)DAT_1039cfbc;
      for (ppppiVar9 = DAT_1039cfb8; ppppiVar9 != (int ****)local_d4; ppppiVar9 = ppppiVar9 + 4) {
        if (*(char *)ppppiVar9 == '\x01') {
          local_18 = 0x21;
          local_dc = (int ***)ppppiVar9;
          FUN_100d63c6(&local_110,"name",&DAT_10356101);
          local_18 = 0x22;
          local_f8 = 0xffffffffffffffff;
          uVar14 = FUN_100d627a("actorId",&local_f8);
          local_e0 = (int ***)((ulonglong)uVar14 >> 0x20);
          local_118 = (int ***)uVar14;
          local_11c = (int ***)DAT_10388f5c;
          local_e8 = (int ***)DAT_10388f58;
          FUN_10113358(local_118);
          local_e8 = (int ***)((uint)local_118 ^ (uint)local_e8);
          local_11c = (int ***)((uint)local_11c ^ (uint)local_e0);
          local_f8 = 0;
          cVar2 = FUN_10133727(&DAT_1033a3f9,
                               local_e8 == (int ***)0x0 && (int ****)local_11c == (int ****)0x0,0,
                               &local_f8);
          if (cVar2 != '\0') {
            DAT_10388f58 = (int ****)local_118;
            DAT_10388f5c = (int ****)local_e0;
          }
          FUN_10114a0e(0,0);
          ppppiVar9 = &local_110;
          if (0xf < uStack_fc) {
            ppppiVar9 = (int ****)local_110;
          }
          FUN_1012d079(ppppiVar9,0);
          FUN_10113568();
          if (local_e8 == (int ***)0x0 && (int ****)local_11c == (int ****)0x0) {
            FUN_1011262c();
          }
          local_18 = 0xffffffff;
          FUN_10001fee();
          ppppiVar9 = (int ****)local_dc;
        }
      }
      local_18 = 0x21;
      FUN_101334a7();
    }
    if (local_120 != local_114) {
      local_110 = (int ***)&local_f0;
      local_f8 = CONCAT44(local_f8._4_4_,local_110);
      FUN_100d6508(0x41a00000,&DAT_1033c312,&DAT_103357a0,&DAT_1033579f);
      FUN_100d6508(0x41a00000,"MP",&DAT_10335708,&DAT_10335707);
      FUN_100d6508(0x3f800000,&DAT_1033c2d7,&DAT_10335178,&DAT_10335177);
      FUN_100d66c8(0x41a00000,&DAT_1033c30f,&DAT_1033579b,0);
      FUN_100d66c8(0x41a00000,"MaxMP",&DAT_103356e6,1);
      FUN_100d66c8(0x40800000,&DAT_1033c461,&DAT_10336bef,2);
      FUN_100d66c8(0x40800000,"DEF","def",3);
      FUN_100d66c8(0x40800000,&DAT_1033c138,"mat",4);
      FUN_100d66c8(0x40800000,&DAT_1033c7a4,&DAT_103381c9,5);
      FUN_100d66c8(0x40800000,&DAT_1033c4e5,&DAT_10336fa8,6);
      FUN_100d66c8(0x40800000,&DAT_1033c45d,&DAT_10336beb,7);
    }
    FUN_10150ac8();
    local_18 = 0xffffffff;
    FUN_10001fee();
    FUN_1022c200(&DAT_10388e14);
  }
  cVar2 = FUN_1014fafc(&DAT_1032ef93,0,0);
  if (cVar2 != '\0') {
    FUN_1016deee();
    FUN_10150ac8();
  }
  cVar2 = FUN_1014fafc(&DAT_1032ef15,0,0);
  if (cVar2 != '\0') {
    FUN_1016b598();
    FUN_10150ac8();
  }
  ExceptionList = local_20;
  return;
}

