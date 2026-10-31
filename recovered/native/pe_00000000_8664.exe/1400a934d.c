/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a934d */

void FUN_1400a934d(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar24;
  float local_108 [4];
  int local_f8 [2];
  longlong lStack_f0;
  int local_e8 [2];
  longlong lStack_e0;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int *local_b8;
  longlong local_b0;
  float local_a4;
  longlong local_a0;
  undefined1 local_91;
  undefined8 local_90;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    lVar15 = *(longlong *)(param_1 + 10);
    bVar7 = *(byte *)(lVar3 + 0xd4);
    if (((bVar7 & 1) != 0) && ((*(byte *)(lVar15 + 0xd4) & 1) != 0)) {
      iVar2 = param_1[0x18];
      uVar19 = (ulonglong)iVar2;
      local_c8 = *(undefined8 *)(lVar3 + 0x48);
      local_c0 = *(undefined8 *)(lVar15 + 0x48);
      *(float *)((longlong)&local_c8 + uVar19 * 4) =
           *(float *)(lVar3 + 0x50 + uVar19 * 4) + *(float *)((longlong)&local_c8 + uVar19 * 4);
      uVar13 = uVar19 ^ 1;
      *(float *)((longlong)&local_c0 + uVar13 * 4) =
           *(float *)(lVar15 + 0x50 + uVar13 * 4) + *(float *)((longlong)&local_c0 + uVar13 * 4);
      uVar9 = *(uint *)(lVar15 + 0x10) | *(uint *)(lVar3 + 0x10);
      if (((uVar9 & 0x20) == 0) && ((uVar9 & (uint)(iVar2 != 0) * 0x10000 + 0x10000) == 0)) {
        local_d0 = DAT_140f2a910;
        local_b0 = lVar15;
        FUN_140091425(*param_1);
        local_f8[0] = 0;
        local_f8[1] = 0;
        lStack_f0 = 0;
        local_e8[0] = 0;
        local_e8[1] = 0;
        lStack_e0 = 0;
        local_91 = 0;
        fVar1 = *(float *)(local_d0 + 0xdd0 + uVar19 * 4);
        fVar21 = *(float *)(*(longlong *)(param_1 + 8) + 0x48 + uVar19 * 4) + fVar1;
        fVar22 = *(float *)(*(longlong *)(param_1 + 10) + 0x48 + uVar19 * 4);
        fVar23 = *(float *)(*(longlong *)(param_1 + 10) + 0x50 + uVar19 * 4);
        local_b8 = local_e8;
        iVar11 = FUN_140091695("##Splitter");
        fVar22 = (fVar22 + fVar23) - fVar1;
        bVar20 = true;
        if (*(int *)(local_d0 + 0x167c) == iVar11) {
          FUN_1400aa68e(lVar3,iVar2,1,local_f8);
          FUN_1400aa68e(local_b0,iVar2,0,local_e8);
          lVar15 = lStack_f0;
          local_a0 = CONCAT44(local_a0._4_4_,local_f8[0]);
          for (uVar9 = 0; lVar5 = lStack_e0, (int)uVar9 < (int)local_a0; uVar9 = uVar9 + 1) {
            lVar5 = *(longlong *)(lVar15 + (ulonglong)uVar9 * 8);
            local_108[0] = *(float *)(lVar5 + 0x48);
            local_108[1] = *(float *)(lVar5 + 0x4c);
            local_108[2] = (float)*(undefined8 *)(lVar5 + 0x50) + *(float *)(lVar5 + 0x48);
            local_108[3] = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x50) >> 0x20) +
                           *(float *)(lVar5 + 0x4c);
            fVar21 = (float)FUN_14007b71f(fVar21,local_108[uVar19] + fVar1);
          }
          iVar11 = local_e8[0];
          for (uVar9 = 0; (int)uVar9 < iVar11; uVar9 = uVar9 + 1) {
            lVar15 = *(longlong *)(lVar5 + (ulonglong)uVar9 * 8);
            local_108[0] = *(float *)(lVar15 + 0x48);
            local_108[1] = *(float *)(lVar15 + 0x4c);
            local_108[2] = (float)*(undefined8 *)(lVar15 + 0x50) + *(float *)(lVar15 + 0x48);
            local_108[3] = (float)((ulonglong)*(undefined8 *)(lVar15 + 0x50) >> 0x20) +
                           *(float *)(lVar15 + 0x4c);
            fVar22 = (float)FUN_14004863e(fVar22,local_108[uVar19 + 2] - fVar1);
          }
          bVar20 = iVar11 < 1 || (int)local_a0 < 1;
        }
        local_108[0] = *(float *)(lVar3 + 0x50 + uVar19 * 4);
        local_a4 = *(float *)(local_b0 + 0x50 + uVar19 * 4);
        fVar1 = *(float *)(lVar3 + 0x48 + uVar19 * 4);
        fVar23 = local_a4 + *(float *)(local_b0 + 0x48 + uVar19 * 4);
        uVar12 = FUN_14007a557(2,DAT_1401c86c8);
        uVar24 = *(undefined4 *)(local_d0 + 0x15fc);
        uVar10 = FUN_140091695("##Splitter");
        cVar8 = FUN_1400b1073(&local_c8,uVar10,iVar2,local_108,&local_a4,fVar21 - fVar1,
                              fVar23 - fVar22,uVar24,0x3d23d70a,uVar12);
        if (!bVar20 && cVar8 == '\x01') {
          *(float *)(lVar3 + 0x58 + uVar19 * 4) = local_108[0];
          *(float *)(lVar3 + 0x50 + uVar19 * 4) = local_108[0];
          *(float *)(local_b0 + 0x48 + uVar19 * 4) =
               *(float *)(local_b0 + 0x48 + uVar19 * 4) -
               (local_a4 - *(float *)(local_b0 + 0x50 + uVar19 * 4));
          *(float *)(local_b0 + 0x58 + uVar19 * 4) = local_a4;
          *(float *)(local_b0 + 0x50 + uVar19 * 4) = local_a4;
          lVar15 = 0;
          piVar16 = local_f8;
          bVar20 = true;
          do {
            bVar14 = bVar20;
            iVar11 = *piVar16;
            if (0 < (longlong)iVar11) {
              lVar5 = *(longlong *)(piVar16 + 2);
              lVar17 = 0;
              do {
                puVar6 = *(undefined4 **)(lVar5 + lVar17 * 8);
                for (puVar18 = *(undefined4 **)(puVar6 + 6); puVar18 != param_1;
                    puVar18 = *(undefined4 **)(puVar18 + 6)) {
                  if (puVar18[0x18] == iVar2) {
                    *(byte *)(*(longlong *)(puVar18 + lVar15 * 2 + 8) + 0xd4) =
                         *(byte *)(*(longlong *)(puVar18 + lVar15 * 2 + 8) + 0xd4) | 0x80;
                    puVar18 = *(undefined4 **)(puVar6 + 6);
                  }
                  puVar6 = puVar18;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != iVar11);
            }
            lVar15 = 1;
            piVar16 = local_e8;
            bVar20 = false;
          } while (bVar14);
          FUN_1400a8e2b(lVar3,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50),0);
          FUN_1400a8e2b(local_b0,*(undefined8 *)(local_b0 + 0x48),*(undefined8 *)(local_b0 + 0x50),0
                       );
          FUN_14009678b();
        }
        FUN_140091667();
        lVar15 = local_b0;
        local_a0 = 0x10;
        do {
          if (*(longlong *)((longlong)&lStack_f0 + local_a0) != 0) {
            FUN_140077b90();
          }
          local_a0 = local_a0 + -0x10;
        } while (local_a0 != -0x10);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 800);
        uVar12 = *(undefined4 *)(DAT_140f2a910 + 0xdfc);
        uVar10 = FUN_14007a557(0x1c,DAT_1401c86c8);
        FUN_1400de294(uVar4,&local_c8,&local_c0,uVar10,CONCAT44(uVar24,uVar12),0);
      }
      bVar7 = *(byte *)(lVar3 + 0xd4);
    }
    if ((bVar7 & 1) != 0) {
      FUN_1400a934d(lVar3);
    }
    if ((*(byte *)(lVar15 + 0xd4) & 1) != 0) {
      FUN_1400a934d(lVar15);
    }
  }
  return;
}

