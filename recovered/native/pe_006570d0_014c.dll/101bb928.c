/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bb928 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101bb928(char *param_1,undefined4 param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_130 [4];
  char *local_12c;
  float *local_128;
  int local_124;
  int *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  byte local_10e;
  char local_10d;
  uint local_10c;
  int local_108;
  int local_104;
  int *local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  undefined4 local_f0;
  char *local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined4 local_a4;
  int local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  int local_90;
  float local_8c;
  int *local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60 [4];
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_130;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcff0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_128 = (float *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 8);
  local_12c = param_1;
  puVar3 = &stack0xfffffffc;
  puVar4 = auStack_130;
  if (*(float *)(param_1 + 8) <= 0.0) {
    FUN_100fdb2e(&local_d8,&DAT_1033dac5,0,0,0xbf800000);
    *local_128 = (float)local_d8;
    fVar13 = (float)local_d8;
    puVar3 = local_28;
    puVar4 = local_24;
  }
  local_24 = puVar4;
  local_28 = puVar3;
  local_d8 = CONCAT44(fVar13 * _UNK_10302b24,fVar13 * _DAT_10302b20);
  FUN_10107cf6(&local_d8,4);
  cVar5 = FUN_10107d2b();
  if (cVar5 != '\0') {
    FUN_101032c6();
    cVar5 = FUN_1014c8c1();
    if (cVar5 != '\0') {
      cVar5 = FUN_1014db73("File",1);
      if (cVar5 != '\0') {
        cVar5 = FUN_10131d08("Add 10000 items",0,0,1);
        if (cVar5 != '\0') {
          FUN_101bc774();
        }
        cVar5 = FUN_10131d08("Clear items",0,0,1);
        if (cVar5 != '\0') {
          FUN_101bc8c0();
        }
        FUN_10132188();
        cVar5 = FUN_10131d08("Close",0,0,param_3 != (undefined1 *)0x0);
        if (cVar5 != '\0') {
          *param_3 = 0;
        }
        FUN_1014db88();
      }
      cVar5 = FUN_1014db73("Edit",1);
      if (cVar5 != '\0') {
        cVar5 = FUN_10131d08("Delete",&DAT_103369f7,0,0 < *(int *)(local_12c + 0x24));
        if (cVar5 != '\0') {
          local_12c[0x48] = '\x01';
        }
        FUN_1014db88();
      }
      cVar5 = FUN_1014db73("Options",1);
      if (cVar5 != '\0') {
        fVar12 = (float10)FUN_10111f20();
        local_7c = (float)fVar12;
        FUN_1011520a();
        FUN_10132656();
        pcVar1 = local_12c;
        FUN_1012ff1a("Show Type Overlay",local_12c);
        FUN_1012ff1a("Allow Sorting",pcVar1 + 1);
        FUN_10132656();
        FUN_1012ff1a("Allow box-selection",pcVar1 + 2);
        cVar5 = FUN_1012ff1a("Allow box-selection from selected items",pcVar1 + 3);
        if ((cVar5 != '\0') && (pcVar1[3] != '\0')) {
          pcVar1[4] = '\0';
        }
        cVar5 = FUN_1012ff1a("Allow dragging unselected item",pcVar1 + 4);
        if ((cVar5 != '\0') && (pcVar1[4] != '\0')) {
          pcVar1[3] = '\0';
        }
        FUN_10132656();
        FUN_1013d285("Icon Size",local_128,0x41800000,0x43000000,&DAT_10338657,0);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1013d499("Icon Spacing",pcVar1 + 0xc,0,0x20,&DAT_1033b386,0);
        FUN_1013d499("Icon Hit Spacing",pcVar1 + 0x10,0,0x20,&DAT_1033b386,0);
        FUN_1012ff1a("Stretch Spacing",pcVar1 + 0x14);
        FUN_1012ff1a("Use ScrollX",pcVar1 + 0x15);
        FUN_101154f4();
        FUN_1014db88();
      }
      FUN_1014caf3();
    }
    if (local_12c[1] == '\x01') {
      local_d8 = 0;
      FUN_100fd3bc(0xe,&local_d8);
      fVar12 = (float10)FUN_101155f9();
      local_d8 = (ulonglong)(uint)(float)fVar12 << 0x20;
      cVar5 = FUN_1015f834("for_sort_specs_only",2,0x4002788,&local_d8,0);
      if (cVar5 != '\0') {
        FUN_10164e8b("Index",0,0,0);
        FUN_10164e8b("Type",0,0,0);
        FUN_1016601f();
        iVar8 = FUN_10165a3a();
        if ((iVar8 != 0) && ((*(char *)(iVar8 + 8) != '\0' || (local_12c[0x49] != '\0')))) {
          if (1 < *(int *)(local_12c + 0x18)) {
            DAT_103a3a78 = iVar8;
            FUN_1026fb00(*(undefined4 *)(local_12c + 0x20),*(int *)(local_12c + 0x18),8,
                         &LAB_101bcc90);
          }
          DAT_103a3a78 = 0;
          local_12c[0x49] = '\0';
          *(undefined1 *)(iVar8 + 8) = 0;
        }
        FUN_1016304e();
      }
      FUN_100fd4c4();
    }
    local_104 = FUN_1010330d();
    pcVar1 = local_12c;
    local_d8 = (ulonglong)
               (uint)((*(float *)(local_12c + 0x54) + *(float *)(local_12c + 0x60)) *
                      (float)*(int *)(local_12c + 0x70) + *(float *)(local_12c + 0x68)) << 0x20;
    FUN_10111df6();
    fVar12 = (float10)FUN_101155d9();
    local_80 = (float)fVar12;
    local_d8 = (ulonglong)((uint)local_80 ^ _DAT_1028f620) << 0x20;
    cVar5 = FUN_1010c081("Assets",&local_d8,1,0x804);
    if (cVar5 != '\0') {
      local_f0 = FUN_10111ef5();
      FUN_1010c3e4();
      local_a4 = (float)local_d8;
      FUN_101bc8ec();
      FUN_10114f9f();
      local_70 = CONCAT44(*(float *)(pcVar1 + 0x68) + (float)((ulonglong)local_70 >> 0x20),
                          *(float *)(pcVar1 + 0x68) + (float)local_70);
      FUN_10114fbc();
      local_100 = (int *)(pcVar1 + 0x18);
      uVar9 = FUN_1014a0eb();
      *(char **)(pcVar1 + 0x2c) = pcVar1;
      *(undefined1 **)(pcVar1 + 0x30) = &LAB_101bccf4;
      local_120 = (int *)(pcVar1 + 0x24);
      FUN_1014b266();
      bVar6 = FUN_10110653(0x20a,1);
      bVar6 = 0 < *(int *)(pcVar1 + 0x24) & bVar6;
      local_10e = bVar6 | pcVar1[0x48];
      local_128 = (float *)uVar9;
      if (bVar6 == 0 && (pcVar1[0x48] & 1U) == 0) {
        local_108 = -1;
      }
      else {
        local_108 = FUN_101b62ec(uVar9,*local_100);
      }
      pcVar1 = local_12c;
      local_12c[0x48] = '\0';
      local_d8 = CONCAT44(*(undefined4 *)(local_12c + 100),*(undefined4 *)(local_12c + 100));
      FUN_100fd3bc(0xe,&local_d8);
      local_94 = FUN_100fcc12(0xdc232323,0x3f800000);
      local_98 = *(float *)(pcVar1 + 0x50);
      FUN_100fdb2e(&local_d8,&DAT_1033dac7,0,0,0xbf800000);
      local_9c = (float)local_d8;
      local_fc = *(int *)(pcVar1 + 0x6c);
      FUN_100fbc78();
      local_18 = 0;
      FUN_100fbd22(*(undefined4 *)(local_12c + 0x70),*(undefined4 *)(local_12c + 0x5c));
      if (local_108 != -1) {
        FUN_100fc09e(local_108 / local_fc,local_108 / local_fc + 1);
      }
      if ((*(uint *)((int)local_128 + 0x14) & *(uint *)((int)local_128 + 0x10)) != 0xffffffff) {
        iVar8 = (int)*(uint *)((int)local_128 + 0x10) / local_fc;
        FUN_100fc09e(iVar8,iVar8 + 1);
      }
      local_ec = local_12c + 0x50;
      while( true ) {
        local_18 = 0;
        cVar5 = FUN_100fc2ca();
        if (cVar5 == '\0') break;
        iVar8 = (int)(float)local_d8;
        while (iVar8 < local_d8._4_4_) {
          iVar10 = iVar8 * local_fc;
          local_a0 = iVar8 + 1;
          local_90 = local_a0 * local_fc;
          if (*local_100 <= local_a0 * local_fc) {
            local_90 = *local_100;
          }
          local_40 = (float)iVar8;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          while (iVar8 = local_a0, iVar10 < local_90) {
            local_f8 = *(int *)(local_12c + 0x20);
            local_18 = 0;
            local_124 = iVar10;
            FUN_10113358();
            local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_12c + 0x58) >> 0x20) *
                                local_40 + (float)((ulonglong)local_70 >> 0x20),
                                (float)*(undefined8 *)(local_12c + 0x58) *
                                (float)(local_124 % local_fc) + (float)local_70);
            FUN_10114fbc();
            FUN_1014ae21(local_124);
            uVar7 = FUN_1014b156();
            local_10c = CONCAT31(local_10c._1_3_,uVar7);
            local_10d = FUN_10112b76();
            FUN_10133727(&DAT_10356101,local_10c & 0xff,0);
            uVar7 = FUN_1010bfaa();
            local_128 = (float *)CONCAT31(local_128._1_3_,uVar7);
            if (local_108 == local_124) {
              FUN_10112577();
            }
            cVar5 = FUN_101179e3();
            local_10c = CONCAT31(local_10c._1_3_,(byte)local_10c ^ (byte)local_128);
            if (cVar5 != '\0') {
              iVar8 = FUN_101182bb();
              if (iVar8 == 0) {
                local_18 = 1;
                local_60[0] = local_60[0] & 0xffffffff00000000;
                local_e8 = local_e8 & 0xffffffff00000000;
                if ((byte)local_10c == '\0') {
                  local_114 = (undefined4 *)0x0;
                  local_11c = (undefined4 *)FUN_100fa1fa();
                  *local_11c = *(undefined4 *)(local_f8 + local_124 * 8);
                  iVar8 = 4;
                }
                else {
                  puVar11 = (undefined4 *)0x0;
                  local_118 = (undefined4 *)0x0;
                  local_128 = (float *)0x0;
                  while (local_11c = puVar11, local_114 = puVar11,
                        cVar5 = FUN_1014b16c(local_60,&local_e8), cVar5 != '\0') {
                    puVar11 = local_11c;
                    local_118 = local_118;
                    if (local_128 == (float *)local_118) {
                      local_f4 = ((uint)local_118 >> 1) + (int)local_118;
                      if (local_118 == (undefined4 *)0x0) {
                        local_f4 = 8;
                      }
                      if ((int)local_f4 <= (int)((int)local_118 + 1U)) {
                        local_f4 = (int)local_118 + 1U;
                      }
                      local_114 = local_11c;
                      puVar11 = (undefined4 *)FUN_100fa1fa();
                      puVar2 = local_11c;
                      local_118 = (undefined4 *)local_f4;
                      if (local_11c != (undefined4 *)0x0) {
                        local_118 = puVar11;
                        FUN_1025b2d0();
                        local_114 = puVar2;
                        FUN_100fa2cb();
                        puVar11 = local_118;
                        local_118 = (undefined4 *)local_f4;
                      }
                    }
                    puVar11[(int)local_128] = (float)local_e8;
                    local_128 = (float *)((int)local_128 + 1);
                  }
                  iVar8 = (int)local_128 << 2;
                }
                local_114 = local_11c;
                FUN_10117c4b("ASSETS_BROWSER_ITEMS",local_11c,iVar8);
                local_114 = local_11c;
                local_18 = 0xffffffff;
                if (local_11c != (undefined4 *)0x0) {
                  FUN_100fa2cb();
                }
              }
              local_18 = 0;
              FUN_101182bb();
              FUN_1012d08c("%d assets");
              FUN_10117c1f();
            }
            if (local_10d != '\0') {
              fVar13 = (float)local_68 + (float)DAT_102b89a0;
              fVar14 = (float)((ulonglong)local_68 >> 0x20) + DAT_102b89a0._4_4_;
              local_e8 = CONCAT44(fVar14,fVar13);
              local_78 = CONCAT44((float)((ulonglong)*(undefined8 *)local_ec >> 0x20) + fVar14 +
                                  _UNK_102b8ab4,
                                  (float)*(undefined8 *)local_ec + fVar13 + _DAT_102b8ab0);
              FUN_1018b85a(&local_e8,&local_78,local_94,0,0);
              if ((*local_12c == '\x01') &&
                 (iVar8 = *(int *)(local_f8 + 4 + local_124 * 8), iVar8 != 0)) {
                local_dc = local_e8._4_4_ + DAT_102b8ac0;
                local_60[0] = CONCAT44(local_dc + _UNK_10302b34,(float)local_78 + _DAT_10302b30);
                local_e0 = (float)local_78 + _DAT_10302b30 + _DAT_102b9550;
                FUN_1018b85a(&local_e0,local_60,*(undefined4 *)(&DAT_10302550 + (iVar8 % 3) * 4),0,0
                            );
              }
              if (local_9c <= local_98) {
                local_128 = (float *)FUN_100fcb39((byte)local_10c ^ 1);
                FUN_101b5fc7();
                local_11c = local_78._4_4_;
                fVar12 = (float10)FUN_10111f20();
                local_8c = (float)fVar12;
                local_dc = (float)local_11c - local_8c;
                local_e0 = (float)local_e8;
                FUN_1018d05c(&local_e0,local_128,local_60,0);
              }
            }
            FUN_10113568();
            iVar10 = local_124 + 1;
          }
        }
      }
      FUN_100fbc90();
      if (*local_100 == 0) {
        local_60[0] = 0;
        FUN_10131d8e();
      }
      FUN_100fd4c4();
      cVar5 = FUN_10116a7b(0,0);
      if (cVar5 != '\0') {
        FUN_1012d08c("Selection: %d items",*local_120);
        FUN_10132188();
        cVar5 = FUN_10131d08("Delete",&DAT_103369f7,0,0 < *local_120);
        if (cVar5 != '\0') {
          local_12c[0x48] = '\x01';
        }
        FUN_101165cb();
      }
      local_128 = (float *)FUN_1014a9f9();
      FUN_1014b266();
      if ((local_10e & 1) != 0) {
        FUN_101bca74();
      }
      cVar5 = FUN_10111d44();
      if (cVar5 != '\0') {
        local_12c[0x4c] = '\0';
        local_12c[0x4d] = '\0';
        local_12c[0x4e] = '\0';
        local_12c[0x4f] = '\0';
      }
      cVar5 = FUN_10111b70();
      if ((cVar5 != '\0') &&
         ((((*(float *)(local_104 + 0xc4) != 0.0 || (NAN(*(float *)(local_104 + 0xc4)))) &&
           (cVar5 = FUN_10113c70(), cVar5 != '\0')) &&
          (cVar5 = FUN_1010bfd8(), pcVar1 = local_12c, cVar5 == '\0')))) {
        fVar13 = *(float *)(local_104 + 0xc4) + *(float *)(local_12c + 0x4c);
        *(float *)(local_12c + 0x4c) = fVar13;
        if (DAT_1028b430 <= (float)(_DAT_1028b410 & (uint)fVar13)) {
          local_11c = (undefined4 *)
                      (((*(float *)(local_104 + 0xb4) - (float)local_70) +
                       *(float *)(local_12c + 0x60) * DAT_102b70e0) / *(float *)(local_12c + 0x58));
          local_128 = (float *)(((*(float *)(local_104 + 0xb8) - local_70._4_4_) +
                                *(float *)(local_12c + 0x60) * DAT_102b70e0) /
                               *(float *)(local_12c + 0x5c));
          local_118 = (undefined4 *)((int)(float)local_128 * *(int *)(local_12c + 0x6c));
          fVar12 = (float10)FUN_1026fab0(0xa0000000,0x3ff19999,(double)(int)fVar13);
          local_84 = (float)fVar12;
          fVar14 = *(float *)(pcVar1 + 8) * local_84;
          *(float *)(pcVar1 + 8) = fVar14;
          fVar13 = DAT_102b8c90;
          if ((DAT_102b8c90 <= fVar14) && (fVar13 = DAT_10301410, fVar14 <= DAT_10301410)) {
            fVar13 = fVar14;
          }
          *(float *)(local_12c + 8) = fVar13;
          *(float *)(local_12c + 0x4c) =
               *(float *)(local_12c + 0x4c) - (float)(int)*(float *)(local_12c + 0x4c);
          FUN_101bc8ec();
          pcVar1 = local_12c;
          local_124 = *(int *)(local_12c + 0x6c);
          fVar12 = (float10)FUN_1026dec0((double)(float)local_128,0,0x3ff00000);
          local_120 = (int *)(float)fVar12;
          local_128 = *(float **)(pcVar1 + 0x5c);
          local_88 = local_120;
          iVar8 = FUN_100fcb2d();
          local_10c = *(undefined4 *)(iVar8 + 0x18);
          local_f4 = *(uint *)(local_104 + 0xb8);
          FUN_10111c87();
          FUN_10115979();
        }
      }
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    FUN_1010c644();
    FUN_1012d08c();
  }
  FUN_1010ad44();
  *unaff_FS_OFFSET = local_20;
  return;
}

