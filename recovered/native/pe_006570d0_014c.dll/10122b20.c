/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10122b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122b20(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  double dVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int *piVar5;
  float fVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  float fVar12;
  undefined8 *puVar13;
  float fVar14;
  float *pfVar15;
  int *unaff_FS_OFFSET;
  float fVar16;
  undefined1 auStack_200 [8];
  int local_1f8;
  uint local_1f4;
  float *local_1f0;
  int local_1ec;
  float local_1e8;
  int local_1e4;
  int local_1e0;
  float local_1dc;
  undefined8 *local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1c0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined1 local_172 [30];
  undefined8 local_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_200;
  local_18 = 0xffffffff;
  local_1c = &LAB_1012ca00;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_1ec = *param_3;
  if (0 < local_1ec) {
    if (*(int *)(param_3[2] + -0x18 + local_1ec * 0x40) == 0) {
      local_1ec = local_1ec - (uint)(*(int *)(param_3[2] + local_1ec * 0x40 + -0x14) == 0);
    }
  }
  local_1e0 = DAT_1039d74c;
  puVar10 = &DAT_10356101;
  if ((undefined1 *)param_3[0x2b] != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)param_3[0x2b];
  }
  cVar2 = FUN_10147c9d(param_3,"%s: \'%s\' %d vtx, %d indices, %d cmds",param_4,puVar10,param_3[6],
                       param_3[3],local_1ec);
  piVar5 = (int *)FUN_10111ef5();
  if (param_3 == piVar5) {
    FUN_10114a0e(0,0xbf800000);
    local_154 = CONCAT44(_UNK_102b8fc4,_DAT_102b8fc0);
    uStack_14c = _UNK_102b8fc8;
    uStack_148 = _UNK_102b8fcc;
    FUN_1012d147(&local_154,"CURRENTLY APPENDING");
    if (cVar2 == '\0') goto code_r0x1012312a;
  }
  else {
    if (param_2 == 0) {
      local_1f8 = 0;
    }
    else {
      local_1f8 = FUN_100fe900(param_2);
    }
    if (param_1 == 0) {
      if (cVar2 == '\0') goto code_r0x1012312a;
    }
    else {
      cVar3 = FUN_10102a1a(0);
      if (local_1f8 != 0 && cVar3 == '\x01') {
        local_154 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
                             (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                             (float)*(undefined8 *)(param_1 + 0x58) +
                             (float)*(undefined8 *)(param_1 + 0x50));
        FUN_1018b762(param_1 + 0x50,&local_154,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,
                     _UNK_102b8bcc);
      }
      if (cVar2 == '\0') goto code_r0x1012312a;
      if (*(char *)(param_1 + 0xfa) == '\0') {
        FUN_1012d1be("Warning: owning Window is inactive. This DrawList is not being rendered!");
      }
    }
    if (0 < local_1ec) {
      pfVar15 = (float *)param_3[2];
      do {
        if (pfVar15[0xb] == 0.0) {
          FUN_1011f4be(pfVar15[4],pfVar15[5],pfVar15[6],pfVar15[7]);
          FUN_100fa4b1(&local_154,300,
                       "DrawCmd:%5d tris, Tex %s, ClipRect (%4.0f,%4.0f)-(%4.0f,%4.0f)",
                       (uint)pfVar15[10] / 3,local_172,(double)*pfVar15,(double)pfVar15[1],
                       (double)pfVar15[2],(double)pfVar15[3]);
          local_1f0 = pfVar15;
          cVar2 = FUN_10147c9d((int)pfVar15 - param_3[2] >> 6,"%s",&local_154);
          cVar3 = FUN_10102a1a(0);
          if (cVar3 != '\0') {
            if (*(char *)(local_1e0 + 0x2805) == '\0') {
              if ((local_1f8 != 0) && (uVar8 = 1, *(char *)(local_1e0 + 0x2806) != '\0'))
              goto LAB_10122db6;
            }
            else if (local_1f8 != 0) {
              uVar8 = *(undefined1 *)(local_1e0 + 0x2806);
LAB_10122db6:
              FUN_10124e75(local_1f8,param_3,local_1f0,*(char *)(local_1e0 + 0x2805),uVar8);
            }
          }
          pfVar15 = local_1f0;
          if (cVar2 != '\0') {
            if (param_3[3] < 1) {
              local_1e4 = 0;
            }
            else {
              local_1e4 = param_3[5];
            }
            puVar13 = (undefined8 *)local_1f0[8];
            fVar14 = local_1f0[9];
            local_1d4 = (int)puVar13 * 0x14 + param_3[8];
            local_1e8 = local_1f0[10];
            dVar1 = 0.0;
            fVar6 = (float)((int)local_1e8 + (int)fVar14);
            if ((uint)fVar14 < (uint)fVar6) {
              fVar16 = 0.0;
              fVar12 = fVar14;
              do {
                local_1c0 = 0;
                local_1d0 = 0;
                fStack_1c8 = 0.0;
                fStack_1c4 = 0.0;
                iVar7 = 0;
                do {
                  if (local_1e4 == 0) {
                    uVar9 = (int)fVar12 + iVar7;
                  }
                  else {
                    uVar9 = (uint)*(ushort *)(local_1e4 + (int)fVar12 * 2 + iVar7 * 2);
                  }
                  (&local_1d0)[iVar7] = *(undefined8 *)(local_1d4 + uVar9 * 0x14);
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 3);
                fVar16 = fVar16 + (float)((uint)((local_1d0._4_4_ - fStack_1c4) * (float)local_1c0 +
                                                (fStack_1c4 - local_1c0._4_4_) * (float)local_1d0 +
                                                (local_1c0._4_4_ - local_1d0._4_4_) * fStack_1c8) &
                                         _DAT_1028b410) * DAT_102b70e0;
                fVar12 = (float)((int)fVar12 + 3);
              } while ((uint)fVar12 < (uint)fVar6);
              dVar1 = (double)fVar16;
              local_18 = 0xffffffff;
              local_1dc = fVar14;
              local_1d8 = puVar13;
            }
            local_1f4 = CONCAT31((int3)((uint)fVar6 >> 8),local_1f8 != 0);
            FUN_100fa4b1(&local_154,300,
                         "Mesh: ElemCount: %d, VtxOffset: +%d, IdxOffset: +%d, Area: ~%0.f px",
                         local_1e8,puVar13,fVar14,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
            local_1d0 = 0;
            FUN_10133727(&local_154,0,0,&local_1d0);
            bVar4 = FUN_10102a1a(0);
            if (((byte)local_1f4 & bVar4) != 0) {
              FUN_10124e75(local_1f8,param_3,local_1f0,1,0);
            }
            FUN_100fbc78();
            local_18 = 0;
            FUN_100fbd22((uint)local_1f0[10] / 3,0xbf800000);
            while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
              local_1f4 = (int)(float)local_1d0 * 3 + (int)local_1f0[9];
              for (local_1dc = (float)local_1d0; (int)local_1dc < (int)local_1d0._4_4_;
                  local_1dc = (float)((int)local_1dc + 1)) {
                local_180 = 0;
                local_190._0_4_ = 0;
                local_190._4_4_ = 0;
                uStack_188 = 0;
                uStack_184 = 0;
                puVar13 = &local_154;
                fVar14 = 0.0;
                while ((uint)fVar14 < 3) {
                  uVar9 = local_1f4;
                  if (local_1e4 != 0) {
                    uVar9 = (uint)*(ushort *)(local_1e4 + local_1f4 * 2);
                  }
                  (&local_190)[(int)fVar14] = *(undefined8 *)(local_1d4 + uVar9 * 0x14);
                  pcVar11 = "     ";
                  if (fVar14 == 0.0) {
                    pcVar11 = "Vert:";
                  }
                  local_1e8 = fVar14;
                  local_1d8 = puVar13;
                  iVar7 = FUN_100fa4b1(puVar13,(int)&local_28 - (int)puVar13,
                                       "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n",
                                       pcVar11,local_1f4,
                                       (double)*(float *)(local_1d4 + uVar9 * 0x14),
                                       (double)*(float *)(local_1d4 + 4 + uVar9 * 0x14),
                                       (double)*(float *)(local_1d4 + 8 + uVar9 * 0x14),
                                       (double)*(float *)(local_1d4 + 0xc + uVar9 * 0x14),
                                       *(undefined4 *)(local_1d4 + 0x10 + uVar9 * 0x14));
                  puVar13 = (undefined8 *)((int)local_1d8 + iVar7);
                  local_1f4 = local_1f4 + 1;
                  fVar14 = (float)((int)local_1e8 + 1);
                }
                local_198 = 0;
                FUN_10133727(&local_154,0,0,&local_198);
                if ((local_1f8 != 0) && (cVar2 = FUN_10102a1a(0), cVar2 != '\0')) {
                  local_1e8 = *(float *)(local_1f8 + 0x24);
                  *(uint *)(local_1f8 + 0x24) = (uint)local_1e8 & 0xfffffffe;
                  FUN_101888a4(&local_190,_DAT_102b8fb0,_UNK_102b8fb4,_UNK_102b8fb8,_UNK_102b8fbc);
                  *(float *)(local_1f8 + 0x24) = local_1e8;
                }
              }
            }
            FUN_10149387();
            local_18 = 0xffffffff;
            thunk_FUN_100fbc90();
            pfVar15 = local_1f0;
          }
        }
        else {
          FUN_1012d551("Callback %p, user_data %p",pfVar15[0xb],pfVar15[0xc]);
        }
        pfVar15 = pfVar15 + 0x10;
      } while (pfVar15 < (float *)(local_1ec * 0x40 + param_3[2]));
    }
  }
  FUN_10149387();
code_r0x1012312a:
  *unaff_FS_OFFSET = local_20;
  return;
}

