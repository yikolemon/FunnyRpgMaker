/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180062860 */

undefined8 * FUN_180062860(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 local_128;
  ulonglong local_120;
  int local_118 [8];
  longlong local_f8;
  ulonglong *puStack_f0;
  ulonglong *local_e8;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong *local_98;
  ulonglong *puStack_90;
  ulonglong *local_88;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_2;
  if (param_3[2] == 0) {
    FUN_18006352a(param_2,param_3);
  }
  else {
    local_d8 = (undefined8 ****)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 3;
    local_50 = param_3;
    if (3 < (ulonglong)param_3[2]) {
      FUN_1800649a8(&local_d8);
    }
    local_c8 = 0;
    local_f8 = 0;
    puStack_f0 = (ulonglong *)0x0;
    local_e8 = (ulonglong *)0x0;
    FUN_18006451c(&local_f8,local_50[2]);
    for (local_b8 = 0; local_b8 < (ulonglong)local_50[2]; local_b8 = local_b8 + 1) {
      puVar9 = local_50;
      if (3 < (ulonglong)local_50[3]) {
        puVar9 = (undefined8 *)*local_50;
      }
      iVar2 = *(int *)((longlong)puVar9 + local_b8 * 4);
      if ((iVar2 != 10) && (iVar2 != 0xd)) {
        FUN_1800643b6(&local_d8);
        if (puStack_f0 == local_e8) {
          FUN_180052bde(&local_f8,puStack_f0,&local_b8);
        }
        else {
          *puStack_f0 = local_b8;
          puStack_f0 = puStack_f0 + 1;
        }
      }
    }
    if (local_c8 == 0) {
      FUN_18006352a(local_58,local_50);
    }
    else {
      local_98 = (ulonglong *)0x0;
      puStack_90 = (ulonglong *)0x0;
      local_88 = (ulonglong *)0x0;
      uVar16 = 0;
      lVar14 = 0;
      while (uVar16 < local_c8) {
        ppppuVar6 = &local_d8;
        if (3 < local_c0) {
          ppppuVar6 = (undefined8 ****)local_d8;
        }
        local_118[0] = *(int *)((longlong)ppppuVar6 + uVar16 * 4);
        if (lVar14 != 0) {
          lVar12 = *param_1;
          do {
            lVar15 = lVar14 * 0x60;
            uVar7 = FUN_1800611df(local_118);
            lVar11 = *(longlong *)(lVar12 + 0x18 + lVar15);
            lVar8 = (uVar7 & *(ulonglong *)(lVar12 + 0x30 + lVar15)) * 0x10;
            lVar10 = *(longlong *)(lVar11 + 8 + lVar8);
            if (lVar10 != *(longlong *)(lVar12 + 8 + lVar15)) {
              if (local_118[0] == *(int *)(lVar10 + 0x10)) goto code_r0x000180062a20;
              while (lVar10 != *(longlong *)(lVar11 + lVar8)) {
                lVar10 = *(longlong *)(lVar10 + 8);
                if (local_118[0] == *(int *)(lVar10 + 0x10)) goto code_r0x000180062a20;
              }
            }
            lVar12 = *param_1;
            lVar14 = *(longlong *)(lVar12 + 0x40 + lVar15);
          } while (lVar14 != 0);
        }
        lVar14 = 0;
code_r0x000180062a20:
        lVar12 = *param_1;
        lVar14 = lVar14 * 0x60;
        uVar7 = FUN_1800611df(local_118);
        lVar11 = *(longlong *)(lVar12 + 8 + lVar14);
        lVar10 = *(longlong *)(lVar12 + 0x18 + lVar14);
        lVar8 = (uVar7 & *(ulonglong *)(lVar12 + 0x30 + lVar14)) * 0x10;
        lVar12 = *(longlong *)(lVar10 + 8 + lVar8);
        if (lVar12 == lVar11) {
LAB_180062a72:
          lVar12 = 0;
        }
        else if (local_118[0] != *(int *)(lVar12 + 0x10)) {
          do {
            if (lVar12 == *(longlong *)(lVar10 + lVar8)) goto LAB_180062a72;
            lVar12 = *(longlong *)(lVar12 + 8);
          } while (local_118[0] != *(int *)(lVar12 + 0x10));
        }
        if (lVar12 != 0) {
          lVar11 = lVar12;
        }
        lVar12 = *param_1;
        if (lVar11 == *(longlong *)(lVar12 + 8 + lVar14)) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar11 + 0x18);
        }
        puVar18 = *(ulonglong **)(lVar12 + 0x50 + lVar14 * 0x60);
        uVar16 = uVar16 + 1;
        for (puVar17 = *(ulonglong **)(lVar12 + 0x48 + lVar14 * 0x60); puVar17 != puVar18;
            puVar17 = puVar17 + 1) {
          local_a8 = *puVar17;
          local_b8 = uVar16 - *(longlong *)(param_1[3] + local_a8 * 0x28);
          uStack_b0 = uVar16;
          if (puStack_90 == local_88) {
            FUN_180064b72(&local_98,puStack_90,&local_b8);
          }
          else {
            puStack_90[2] = local_a8;
            *puStack_90 = local_b8;
            puStack_90[1] = uVar16;
            puStack_90 = puStack_90 + 3;
          }
        }
      }
      if (local_98 == puStack_90) {
        FUN_18006352a(local_58,local_50);
      }
      else {
        FUN_180064cfc(local_98,puStack_90,
                      ((longlong)puStack_90 - (longlong)local_98 >> 3) * -0x5555555555555555);
        local_138 = 0;
        FUN_180064580(&local_b8,local_c8,&local_138,local_118);
        puVar17 = puStack_90;
        local_78 = (longlong *)0x0;
        plStack_70 = (longlong *)0x0;
        local_68 = (longlong *)0x0;
        for (puVar18 = local_98; puVar18 != puVar17; puVar18 = puVar18 + 3) {
          uVar16 = *puVar18;
          if (uVar16 < puVar18[1]) {
            do {
              if ((*(uint *)(local_b8 + (uVar16 >> 5) * 4) >> ((uint)uVar16 & 0x1f) & 1) != 0)
              goto LAB_180062c00;
              uVar16 = uVar16 + 1;
            } while (puVar18[1] != uVar16);
          }
          if (plStack_70 == local_68) {
            FUN_180064b72(&local_78,plStack_70,puVar18);
          }
          else {
            plStack_70[2] = puVar18[2];
            uVar3 = *(undefined4 *)((longlong)puVar18 + 4);
            uVar16 = puVar18[1];
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0xc);
            *(int *)plStack_70 = (int)*puVar18;
            *(undefined4 *)((longlong)plStack_70 + 4) = uVar3;
            *(int *)(plStack_70 + 1) = (int)uVar16;
            *(undefined4 *)((longlong)plStack_70 + 0xc) = uVar4;
            plStack_70 = plStack_70 + 3;
          }
          uVar16 = *puVar18;
          if (uVar16 < puVar18[1]) {
            do {
              puVar1 = (uint *)(local_b8 + (uVar16 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar16 & 0x1f);
              uVar16 = uVar16 + 1;
            } while (uVar16 < puVar18[1]);
          }
LAB_180062c00:
        }
        FUN_1800658c6(local_78,plStack_70,
                      ((longlong)plStack_70 - (longlong)local_78 >> 3) * -0x5555555555555555);
        plVar5 = plStack_70;
        *local_58 = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        local_58[3] = 3;
        uVar16 = 0;
        for (plVar19 = local_78; plVar19 != plVar5; plVar19 = plVar19 + 3) {
          uVar7 = *(ulonglong *)(local_f8 + *plVar19 * 8);
          lVar14 = *(longlong *)(local_f8 + -8 + plVar19[1] * 8);
          if (uVar16 < uVar7) {
            puVar9 = local_50;
            if (3 < (ulonglong)local_50[3]) {
              puVar9 = (undefined8 *)*local_50;
            }
            FUN_18006380c(local_58,(longlong)puVar9 + uVar16 * 4);
          }
          puVar9 = local_50;
          if (3 < (ulonglong)local_50[3]) {
            puVar9 = (undefined8 *)*local_50;
          }
          FUN_1800645dc(local_118,(longlong)puVar9 + uVar7 * 4,(longlong)puVar9 + lVar14 * 4 + 4,
                        &local_138);
          FUN_180064640(&local_138,local_118,param_1[3] + plVar19[2] * 0x28 + 8);
          puVar13 = &local_138;
          if (3 < local_120) {
            puVar13 = (undefined1 *)CONCAT71(uStack_137,local_138);
          }
          FUN_18006380c(local_58,puVar13,local_128);
          FUN_180061ab8(&local_138);
          uVar16 = lVar14 + 1;
          FUN_180061ab8(local_118);
        }
        if (uVar16 < (ulonglong)local_50[2]) {
          puVar9 = local_50;
          if (3 < (ulonglong)local_50[3]) {
            puVar9 = (undefined8 *)*local_50;
          }
          FUN_18006380c(local_58,(longlong)puVar9 + uVar16 * 4);
        }
        FUN_180004cea(&local_78);
        FUN_18001cd6c(&local_b8);
      }
      FUN_180004cea(&local_98);
    }
    FUN_180004cea(&local_f8);
    FUN_180061ab8(&local_d8);
  }
  return local_58;
}

