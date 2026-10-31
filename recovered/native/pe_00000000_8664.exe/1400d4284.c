/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d4284 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d4284(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c48 [32];
  undefined1 *local_1c28;
  longlong *local_1c20;
  ulonglong local_1c18;
  undefined8 *local_1c10;
  longlong local_1c08;
  longlong local_1c00;
  undefined8 *local_1bf8;
  undefined8 local_1bf0;
  int local_1be8;
  int iStack_1be4;
  int iStack_1be0;
  int iStack_1bdc;
  undefined4 local_1bd8;
  undefined4 uStack_1bd4;
  undefined4 uStack_1bd0;
  undefined4 uStack_1bcc;
  undefined8 local_1bc8;
  longlong local_1bb8 [2];
  longlong local_1ba8 [2];
  undefined8 local_1b98;
  undefined8 uStack_1b90;
  ulonglong uStack_1b88;
  undefined1 local_1a90 [384];
  longlong *local_1910;
  longlong *local_1908;
  undefined1 local_1900 [16];
  undefined4 local_18f0;
  undefined4 local_18ec;
  longlong *local_18e8;
  longlong *local_18e0;
  longlong *local_18d8;
  longlong *local_18d0;
  longlong *local_18c8;
  longlong *local_18c0;
  undefined8 local_18b8;
  undefined4 local_18b0 [2];
  longlong local_18a8 [256];
  longlong local_10a8 [256];
  undefined1 local_8a8 [2048];
  undefined4 local_a8 [2];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  longlong *local_78;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400d429a;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_1c48;
  if ((*(float *)(param_1 + 0x28) <= 0.0) || (*(float *)(param_1 + 0x2c) <= 0.0))
  goto LAB_1400d4bb7;
  puVar9 = (undefined8 *)FUN_1400d30d4();
  plVar1 = (longlong *)puVar9[1];
  piVar2 = *(int **)(param_1 + 0x40);
  if ((piVar2 != (int *)0x0) && (iVar7 = *piVar2, (longlong)iVar7 != 0)) {
    lVar12 = *(longlong *)(piVar2 + 2);
    lVar15 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar12 + lVar15) + 4) != 0) {
        FUN_1400d4c03();
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar7 * 8 != lVar15);
  }
  puVar10 = puVar9 + 3;
  if ((longlong *)puVar9[3] == (longlong *)0x0) {
LAB_1400d4341:
    iVar7 = *(int *)(param_1 + 0xc);
    *(int *)(puVar9 + 0xe) = iVar7 + 5000;
    local_1b98 = CONCAT44(_DAT_140e82280,(iVar7 * 4 + 20000) * 5);
    uStack_1b90 = CONCAT44(_UNK_140e82288,_UNK_140e82284);
    uStack_1b88 = (ulonglong)_UNK_140e8228c;
    iVar7 = (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,&local_1b98,0,puVar10);
    if (iVar7 < 0) goto LAB_1400d4bb7;
  }
  else if (*(int *)(puVar9 + 0xe) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)puVar9[3] + 0x10))();
    *puVar10 = 0;
    goto LAB_1400d4341;
  }
  puVar11 = puVar9 + 4;
  if ((longlong *)puVar9[4] == (longlong *)0x0) {
LAB_1400d43b2:
    iVar7 = *(int *)(param_1 + 8);
    *(int *)((longlong)puVar9 + 0x74) = iVar7 + 10000;
    uStack_1b88 = 0;
    local_1b98 = CONCAT44(2,iVar7 * 2 + 20000);
    uStack_1b90 = 0x1000000000002;
    iVar7 = (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,&local_1b98,0,puVar11);
    if (iVar7 < 0) goto LAB_1400d4bb7;
  }
  else if (*(int *)((longlong)puVar9 + 0x74) < *(int *)(param_1 + 8)) {
    (**(code **)(*(longlong *)puVar9[4] + 0x10))();
    *puVar11 = 0;
    goto LAB_1400d43b2;
  }
  local_1c20 = local_1ba8;
  local_1c28 = (undefined1 *)((ulonglong)local_1c28 & 0xffffffff00000000);
  iVar7 = (**(code **)(*plVar1 + 0x70))(plVar1,*puVar10,0,4);
  if (iVar7 == 0) {
    local_1c20 = local_1bb8;
    local_1c28 = (undefined1 *)((ulonglong)local_1c28 & 0xffffffff00000000);
    iVar7 = (**(code **)(*plVar1 + 0x70))(plVar1,*puVar11,0,4);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x10);
      local_1c10 = puVar9;
      if ((longlong)iVar7 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar14 = 0;
        lVar15 = local_1bb8[0];
        lVar12 = local_1ba8[0];
        do {
          lVar4 = *(longlong *)(lVar3 + lVar14);
          FUN_1401c5180(lVar12,*(undefined8 *)(lVar4 + 0x28),(longlong)*(int *)(lVar4 + 0x20) * 0x14
                       );
          FUN_1401c5180(lVar15,*(undefined8 *)(lVar4 + 0x18),(longlong)*(int *)(lVar4 + 0x10) * 2);
          lVar12 = lVar12 + (longlong)*(int *)(lVar4 + 0x20) * 0x14;
          lVar15 = lVar15 + (longlong)*(int *)(lVar4 + 0x10) * 2;
          lVar14 = lVar14 + 8;
        } while ((longlong)iVar7 * 8 != lVar14);
      }
      puVar9 = local_1c10;
      local_1c18 = 0;
      (**(code **)(*plVar1 + 0x78))(plVar1,local_1c10[3],0);
      (**(code **)(*plVar1 + 0x78))(plVar1,puVar9[4],0);
      FUN_1401c5830(&uStack_1b90,0,0x1b20);
      local_1b98 = 0x1000000010;
      (**(code **)(*plVar1 + 0x300))(plVar1,&local_1b98,&uStack_1b90);
      (**(code **)(*plVar1 + 0x2f8))(plVar1,(longlong)&local_1b98 + 4,local_1a90);
      (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_1910);
      (**(code **)(*plVar1 + 0x2d8))(plVar1,&local_1908,local_1900,&local_18f0);
      (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_18e8,&local_18ec);
      (**(code **)(*plVar1 + 0x248))(plVar1,0,1,&local_18e0);
      (**(code **)(*plVar1 + 600))(plVar1,0,1,&local_18d8);
      local_18b0[0] = 0x100;
      local_18b8 = 0x10000000100;
      (**(code **)(*plVar1 + 0x250))(plVar1,&local_18d0,local_18a8);
      (**(code **)(*plVar1 + 0x260))(plVar1,&local_18c8,local_10a8,(longlong)&local_18b8 + 4);
      (**(code **)(*plVar1 + 0x240))(plVar1,0,1,&local_90);
      (**(code **)(*plVar1 + 0x290))(plVar1,&local_18c0,local_8a8,local_18b0);
      (**(code **)(*plVar1 + 0x298))(plVar1,local_a8);
      (**(code **)(*plVar1 + 0x280))(plVar1,&local_a0,(longlong)&local_80 + 4,&local_88);
      local_1c20 = &local_80;
      local_1c28 = local_84;
      (**(code **)(*plVar1 + 0x278))(plVar1,0,1,&local_98);
      (**(code **)(*plVar1 + 0x270))(plVar1,&local_78);
      FUN_1400d4dd3(param_1,plVar1);
      local_1c00 = FUN_140081211();
      local_1bd8 = *(undefined4 *)puVar9;
      uStack_1bd4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1bd0 = *(undefined4 *)(puVar9 + 1);
      uStack_1bcc = *(undefined4 *)((longlong)puVar9 + 0xc);
      local_1bc8 = puVar9[7];
      puVar9[0xf] = &local_1bd8;
      *(undefined4 **)(local_1c00 + 0x48) = &local_1bd8;
      local_1c08 = param_1;
      if ((longlong)*(int *)(param_1 + 0x10) != 0) {
        fVar22 = (float)*(undefined8 *)(param_1 + 0x20);
        fVar23 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
        fVar24 = (float)*(undefined8 *)(param_1 + 0x30);
        fVar25 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
        puVar9 = *(undefined8 **)(param_1 + 0x18);
        local_1bf8 = puVar9 + *(int *)(param_1 + 0x10);
        iVar7 = 0;
        do {
          piVar2 = (int *)*puVar9;
          if (0 < *piVar2) {
            lVar12 = 0x18;
            lVar15 = 0;
            do {
              lVar14 = *(longlong *)(piVar2 + 2);
              lVar3 = lVar14 + lVar12;
              pcVar5 = *(code **)(lVar3 + 0x18);
              if (pcVar5 == (code *)0x0) {
                fVar18 = (*(float *)(lVar3 + -0x18) - fVar22) * fVar24;
                fVar19 = (*(float *)(lVar3 + -0x14) - fVar23) * fVar25;
                fVar20 = (*(float *)(lVar3 + -0x10) - fVar22) * fVar24;
                fVar21 = (*(float *)(lVar3 + -0xc) - fVar23) * fVar25;
                iVar16 = -(uint)(fVar18 < fVar20);
                iVar17 = -(uint)(fVar19 < fVar21);
                auVar6._4_4_ = iVar16;
                auVar6._0_4_ = iVar16;
                auVar6._8_4_ = iVar17;
                auVar6._12_4_ = iVar17;
                iVar16 = movmskpd(0,auVar6);
                if (iVar16 == 3) {
                  local_1be8 = (int)fVar18;
                  iStack_1be4 = (int)fVar19;
                  iStack_1be0 = (int)fVar20;
                  iStack_1bdc = (int)fVar21;
                  (**(code **)(*plVar1 + 0x168))(plVar1,1,&local_1be8);
                  lVar3 = *(longlong *)(lVar14 + -8 + lVar12);
                  puVar10 = (undefined8 *)(lVar3 + 0x10);
                  if (lVar3 == 0) {
                    puVar10 = (undefined8 *)(lVar14 + lVar12);
                  }
                  local_1bf0 = *puVar10;
                  (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_1bf0);
                  (**(code **)(*plVar1 + 0x60))
                            (plVar1,*(undefined4 *)(lVar14 + 0x10 + lVar12),
                             *(int *)(lVar14 + 0xc + lVar12) + (int)local_1c18,
                             *(int *)(lVar14 + 8 + lVar12) + iVar7);
                }
              }
              else if (pcVar5 == FUN_1400151ba) {
                FUN_1400d4dd3(local_1c08,plVar1);
              }
              else {
                (*pcVar5)(piVar2);
              }
              lVar15 = lVar15 + 1;
              lVar12 = lVar12 + 0x48;
            } while (lVar15 < *piVar2);
          }
          local_1c18 = (ulonglong)(uint)((int)local_1c18 + piVar2[4]);
          iVar7 = iVar7 + piVar2[8];
          puVar9 = puVar9 + 1;
        } while (puVar9 != local_1bf8);
      }
      local_1c10[0xf] = 0;
      *(undefined8 *)(local_1c00 + 0x48) = 0;
      (**(code **)(*plVar1 + 0x168))(plVar1,local_1b98 & 0xffffffff,&uStack_1b90);
      (**(code **)(*plVar1 + 0x160))(plVar1,local_1b98._4_4_,local_1a90);
      (**(code **)(*plVar1 + 0x158))(plVar1,local_1910);
      if (local_1910 != (longlong *)0x0) {
        (**(code **)(*local_1910 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x118))(plVar1,local_1908,local_1900,local_18f0);
      if (local_1908 != (longlong *)0x0) {
        (**(code **)(*local_1908 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x120))(plVar1,local_18e8,local_18ec);
      if (local_18e8 != (longlong *)0x0) {
        (**(code **)(*local_18e8 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x40))(plVar1,0,1,&local_18e0);
      if (local_18e0 != (longlong *)0x0) {
        (**(code **)(*local_18e0 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x50))(plVar1,0,1,&local_18d8);
      if (local_18d8 != (longlong *)0x0) {
        (**(code **)(*local_18d8 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x48))(plVar1,local_18d0,local_18a8,local_18b8 & 0xffffffff);
      if (local_18d0 != (longlong *)0x0) {
        (**(code **)(*local_18d0 + 0x10))();
      }
      if ((uint)local_18b8 != 0) {
        uVar13 = 0;
        uVar8 = (uint)local_18b8;
        do {
          if ((longlong *)local_18a8[uVar13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_18a8[uVar13] + 0x10))();
            uVar8 = (uint)local_18b8;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar8);
      }
      (**(code **)(*plVar1 + 0x58))(plVar1,local_18c8,local_10a8,local_18b8._4_4_);
      if (local_18c8 != (longlong *)0x0) {
        (**(code **)(*local_18c8 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x38))(plVar1,0,1,&local_90);
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
      (**(code **)(*plVar1 + 0xb8))(plVar1,local_18c0,local_8a8,local_18b0[0]);
      if (local_18c0 != (longlong *)0x0) {
        (**(code **)(*local_18c0 + 0x10))();
      }
      if (local_18b8._4_4_ != 0) {
        uVar13 = 0;
        uVar8 = local_18b8._4_4_;
        do {
          if ((longlong *)local_10a8[uVar13] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_10a8[uVar13] + 0x10))();
            uVar8 = local_18b8._4_4_;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar8);
      }
      (**(code **)(*plVar1 + 0xc0))(plVar1,local_a8[0]);
      (**(code **)(*plVar1 + 0x98))(plVar1,local_a0,local_80._4_4_,local_88);
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      local_1c20 = &local_80;
      local_1c28 = local_84;
      (**(code **)(*plVar1 + 0x90))(plVar1,0,1,&local_98);
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x88))(plVar1,local_78);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
LAB_1400d4bb7:
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_1c48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_1c48);
}

