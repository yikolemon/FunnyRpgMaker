/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a13dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a13dc(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  undefined *puVar19;
  char *pcVar20;
  longlong lVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  double dVar27;
  undefined8 in_stack_fffffffffffffd58;
  undefined1 *puVar28;
  undefined4 uVar30;
  undefined8 uVar29;
  undefined8 in_stack_fffffffffffffd60;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 in_stack_fffffffffffffd68;
  ulonglong uVar33;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_14c [4];
  undefined1 local_148 [32];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  ulonglong local_118 [5];
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_b0;
  float *local_a8;
  int *local_a0;
  longlong local_98;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  iVar23 = *param_3;
  lVar24 = (longlong)iVar23;
  if ((0 < lVar24) && (*(int *)(*(longlong *)(param_3 + 2) + -0x20 + lVar24 * 0x48) == 0)) {
    iVar23 = iVar23 - (uint)(*(longlong *)(*(longlong *)(param_3 + 2) + lVar24 * 0x48 + -0x18) == 0)
    ;
  }
  local_b0 = DAT_140f2a910;
  puVar19 = &DAT_140edcdbf;
  if (*(undefined **)(param_3 + 0x36) != (undefined *)0x0) {
    puVar19 = *(undefined **)(param_3 + 0x36);
  }
  uVar33 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd68 >> 0x20),iVar23);
  uVar29 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd60 >> 0x20),param_3[4]);
  uVar15 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd58 >> 0x20),param_3[8]);
  cVar6 = FUN_1400c50f1(param_3,"%s: \'%s\' %d vtx, %d indices, %d cmds",param_4,puVar19,uVar15,
                        uVar29,uVar33);
  uVar31 = (undefined4)((ulonglong)uVar29 >> 0x20);
  piVar11 = (int *)FUN_14008feed();
  if (param_3 == piVar11) {
    FUN_140092bab(0,DAT_1401c86a4);
    local_278 = CONCAT44(_UNK_140211754,_DAT_140211750);
    uStack_270 = _UNK_140211758;
    uStack_26c = _UNK_14021175c;
    FUN_1400ac0bb(&local_278,"CURRENTLY APPENDING");
    if (cVar6 == '\0') {
      return;
    }
  }
  else {
    if (param_2 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_14007c4e4(param_2);
    }
    local_a0 = param_3;
    if (param_1 == 0) {
      if (cVar6 == '\0') {
        return;
      }
    }
    else {
      cVar7 = FUN_1400808b4(0);
      if (local_98 != 0 && cVar7 == '\x01') {
        local_278 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
                             (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                             (float)*(undefined8 *)(param_1 + 0x68) +
                             (float)*(undefined8 *)(param_1 + 0x60));
        FUN_1400de17e(local_98,param_1 + 0x60,&local_278,0xff00ffff,uVar15 & 0xffffffff00000000,
                      CONCAT44(uVar31,0x3f800000),uVar33 & 0xffffffff00000000);
      }
      if (cVar6 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x10a) == '\0') {
        FUN_1400ac13f("Warning: owning Window is inactive. This DrawList is not being rendered!");
      }
    }
    uVar5 = _DAT_1401ced40;
    uVar31 = DAT_1401c86a4;
    fVar4 = DAT_1401c86a0;
    if (0 < iVar23) {
      local_f0 = (longlong)iVar23;
      pfVar16 = *(float **)(local_a0 + 2);
      do {
        if (*(longlong *)(pfVar16 + 0xc) == 0) {
          local_128 = pfVar16[4];
          fStack_124 = pfVar16[5];
          fStack_120 = pfVar16[6];
          fStack_11c = pfVar16[7];
          puVar28 = local_148;
          FUN_14009da44(puVar28,&local_128);
          dVar27 = (double)*pfVar16;
          FUN_140077d91(&local_278,300,
                        "DrawCmd:%5d tris, Tex %s, ClipRect (%4.0f,%4.0f)-(%4.0f,%4.0f)",
                        (ulonglong)(uint)pfVar16[10] / 3,puVar28,dVar27,(double)pfVar16[1],
                        (double)pfVar16[2],(double)pfVar16[3]);
          uVar32 = (undefined4)((ulonglong)dVar27 >> 0x20);
          cVar6 = FUN_1400c50f1(((longlong)pfVar16 - *(longlong *)(local_a0 + 2) >> 3) *
                                -0x71c71c71c71c71c7,"%s",&local_278);
          cVar7 = FUN_1400808b4(0);
          uVar30 = (undefined4)((ulonglong)puVar28 >> 0x20);
          if (cVar7 != '\0') {
            if (*(char *)(local_b0 + 0x2b29) == '\0') {
              if ((local_98 != 0) && (uVar8 = 1, *(char *)(local_b0 + 0x2b2a) != '\0'))
              goto code_r0x0001400a1706;
            }
            else if (local_98 != 0) {
              uVar8 = *(undefined1 *)(local_b0 + 0x2b2a);
code_r0x0001400a1706:
              uVar29 = CONCAT71((int7)((ulonglong)puVar28 >> 8),uVar8);
              FUN_1400a3b66(local_98,local_a0,pfVar16,*(char *)(local_b0 + 0x2b29),uVar29);
              uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
            }
          }
          if (cVar6 != '\0') {
            if (local_a0[4] < 1) {
              lVar24 = 0;
            }
            else {
              lVar24 = *(longlong *)(local_a0 + 6);
            }
            fVar1 = pfVar16[8];
            fVar2 = pfVar16[9];
            lVar17 = (ulonglong)(uint)fVar1 * 0x14 + *(longlong *)(local_a0 + 10);
            fVar3 = pfVar16[10];
            fVar13 = (float)((int)fVar3 + (int)fVar2);
            dVar27 = 0.0;
            if ((uint)fVar2 < (uint)fVar13) {
              fVar26 = 0.0;
              fVar18 = fVar2;
              do {
                local_e8 = 0;
                uStack_e0 = 0;
                local_d8 = 0;
                lVar21 = 0;
                do {
                  uVar12 = (uint)((ulonglong)(uint)fVar18 + lVar21);
                  if (lVar24 != 0) {
                    uVar12 = (uint)*(ushort *)
                                    (lVar24 + ((ulonglong)(uint)fVar18 + lVar21 & 0xffffffff) * 2);
                  }
                  (&local_e8)[lVar21] = *(undefined8 *)(lVar17 + (ulonglong)uVar12 * 0x14);
                  lVar21 = lVar21 + 1;
                } while (lVar21 != 3);
                fVar26 = fVar26 + (float)((uint)((local_e8._4_4_ - uStack_e0._4_4_) *
                                                 (float)local_d8 +
                                                (uStack_e0._4_4_ - local_d8._4_4_) * (float)local_e8
                                                + (local_d8._4_4_ - local_e8._4_4_) *
                                                  (float)uStack_e0) & uVar5) * fVar4;
                fVar18 = (float)((int)fVar18 + 3);
              } while ((uint)fVar18 < (uint)fVar13);
              dVar27 = (double)fVar26;
            }
            bVar25 = local_98 != 0;
            uVar15 = CONCAT44(uVar30,fVar1);
            local_a8 = pfVar16;
            FUN_140077d91(&local_278,300,
                          "Mesh: ElemCount: %d, VtxOffset: +%d, IdxOffset: +%d, Area: ~%0.f px",
                          fVar3,uVar15,CONCAT44(uVar32,fVar2),dVar27);
            local_e8 = 0;
            FUN_1400b2126(&local_278,0,0,&local_e8);
            bVar9 = FUN_1400808b4(0);
            if ((bVar25 & bVar9) != 0) {
              FUN_1400a3b66(local_98,local_a0,local_a8,1,uVar15 & 0xffffffffffffff00);
            }
            FUN_1400796ae(&local_e8);
            FUN_140079772(&local_e8,(ulonglong)(uint)local_a8[10] / 3,uVar31);
            while (cVar6 = FUN_140079cee(&local_e8), cVar6 != '\0') {
              uVar14 = (int)(float)local_e8 * 3 + (int)local_a8[9];
              uVar12 = (uint)(float)local_e8;
              while( true ) {
                local_118[4] = (ulonglong)uVar12;
                if ((int)local_e8._4_4_ <= (int)uVar12) break;
                local_118[0] = 0;
                local_118[1] = 0;
                local_118[2] = 0;
                puVar22 = &local_278;
                uVar15 = 0;
                while (uVar12 = (uint)uVar15, uVar12 < 3) {
                  uVar10 = uVar14;
                  if (lVar24 != 0) {
                    uVar10 = (uint)*(ushort *)(lVar24 + (longlong)(int)uVar14 * 2);
                  }
                  lVar21 = (longlong)(int)uVar10;
                  local_118[uVar15] = *(ulonglong *)(lVar17 + lVar21 * 0x14);
                  pcVar20 = "     ";
                  if (uVar12 == 0) {
                    pcVar20 = "Vert:";
                  }
                  iVar23 = FUN_140077d91(puVar22,local_14c + -(longlong)puVar22,
                                         "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n",
                                         pcVar20,uVar14,(double)*(float *)(lVar17 + lVar21 * 0x14),
                                         (double)*(float *)(lVar17 + 4 + lVar21 * 0x14),
                                         (double)*(float *)(lVar17 + 8 + lVar21 * 0x14),
                                         (double)*(float *)(lVar17 + 0xc + lVar21 * 0x14),
                                         *(undefined4 *)(lVar17 + 0x10 + lVar21 * 0x14));
                  puVar22 = (undefined8 *)((longlong)puVar22 + (longlong)iVar23);
                  uVar14 = uVar14 + 1;
                  uVar15 = (ulonglong)(uVar12 + 1);
                }
                local_118[3] = 0;
                FUN_1400b2126(&local_278,0,0,local_118 + 3);
                if ((local_98 != 0) && (cVar6 = FUN_1400808b4(0), cVar6 != '\0')) {
                  uVar12 = *(uint *)(local_98 + 0x30);
                  *(uint *)(local_98 + 0x30) = uVar12 & 0xfffffffe;
                  FUN_1400db1c8(local_98,local_118,3,0xff00ffff,0x3f800000,0x200);
                  *(uint *)(local_98 + 0x30) = uVar12;
                }
                uVar12 = (int)local_118[4] + 1;
              }
            }
            FUN_1400c66d9();
            thunk_FUN_1400796ce(&local_e8);
            pfVar16 = local_a8;
          }
        }
        else {
          FUN_1400ac536("Callback %p, user_data %p",*(longlong *)(pfVar16 + 0xc),
                        *(undefined8 *)(pfVar16 + 0xe));
        }
        pfVar16 = pfVar16 + 0x12;
      } while (pfVar16 < (float *)(local_f0 * 0x48 + *(longlong *)(local_a0 + 2)));
    }
  }
  FUN_1400c66d9();
  return;
}

