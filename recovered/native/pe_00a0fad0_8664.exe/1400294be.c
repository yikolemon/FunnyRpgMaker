/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400294be */

void FUN_1400294be(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 *local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  longlong local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    puVar14 = (undefined8 *)param_1[1];
    local_68 = puVar14;
    local_58 = param_1;
    local_50 = param_2;
    if ((ulonglong)(param_1[2] - (longlong)puVar14 >> 5) < param_4) {
      puVar15 = (undefined8 *)*param_1;
      lVar19 = (longlong)puVar14 - (longlong)puVar15 >> 5;
      local_70 = param_3;
      if (0x7ffffffffffffffU - lVar19 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_14000a2c6();
      }
      uVar20 = lVar19 + param_4;
      uVar12 = param_1[2] - (longlong)puVar15 >> 5;
      uVar17 = (uVar12 >> 1) + uVar12;
      if (uVar17 <= uVar20) {
        uVar17 = uVar20;
      }
      if (0x7ffffffffffffff - (uVar12 >> 1) < uVar12) {
        uVar17 = 0x7ffffffffffffff;
      }
      if (uVar17 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400062c7();
      }
      puVar13 = (undefined1 *)FUN_140006280(uVar17 << 5);
      puVar22 = (undefined1 *)((longlong)local_50 + ((longlong)puVar13 - (longlong)puVar15));
      puVar21 = puVar22 + param_4 * 0x20;
      local_b8 = local_58;
      local_b0 = puVar13;
      local_a8 = uVar17;
      local_a0 = puVar21;
      local_98 = puVar21;
      FUN_140021055(local_70,param_4,puVar22);
      if (local_68 == local_50 && param_4 == 1) {
        local_a0 = puVar22;
        if (puVar15 != local_50) {
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar13 + lVar19 + 0x10) = 0;
            *(undefined8 *)((longlong)(puVar13 + lVar19 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar13 + lVar19) = 0;
            *(undefined8 *)((longlong)(puVar13 + lVar19) + 8) = 0;
            puVar14 = (undefined8 *)((longlong)puVar15 + lVar19);
            uVar9 = *puVar14;
            uVar10 = puVar14[1];
            uVar11 = puVar14[3];
            *(undefined8 *)(puVar13 + lVar19 + 0x10) = puVar14[2];
            *(undefined8 *)((longlong)(puVar13 + lVar19 + 0x10) + 8) = uVar11;
            *(undefined8 *)(puVar13 + lVar19) = uVar9;
            *(undefined8 *)((longlong)(puVar13 + lVar19) + 8) = uVar10;
            puVar14[2] = 0;
            puVar14[3] = 0xf;
            *(undefined1 *)puVar14 = 0;
            lVar19 = lVar19 + 0x20;
          } while (puVar14 + 4 != local_50);
        }
      }
      else {
        if (puVar15 != local_50) {
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar13 + lVar19 + 0x10) = 0;
            *(undefined8 *)((longlong)(puVar13 + lVar19 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar13 + lVar19) = 0;
            *(undefined8 *)((longlong)(puVar13 + lVar19) + 8) = 0;
            puVar14 = (undefined8 *)((longlong)puVar15 + lVar19);
            uVar9 = *puVar14;
            uVar10 = puVar14[1];
            uVar11 = puVar14[3];
            *(undefined8 *)(puVar13 + lVar19 + 0x10) = puVar14[2];
            *(undefined8 *)((longlong)(puVar13 + lVar19 + 0x10) + 8) = uVar11;
            *(undefined8 *)(puVar13 + lVar19) = uVar9;
            *(undefined8 *)((longlong)(puVar13 + lVar19) + 8) = uVar10;
            puVar14[2] = 0;
            puVar14[3] = 0xf;
            *(undefined1 *)puVar14 = 0;
            lVar19 = lVar19 + 0x20;
          } while (puVar14 + 4 != local_50);
        }
        local_a0 = puVar13;
        if (local_68 != local_50) {
          lVar19 = 0;
          do {
            *(undefined8 *)(puVar21 + lVar19 + 0x10) = 0;
            *(undefined8 *)((longlong)(puVar21 + lVar19 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar21 + lVar19) = 0;
            *(undefined8 *)((longlong)(puVar21 + lVar19) + 8) = 0;
            puVar14 = (undefined8 *)((longlong)local_50 + lVar19);
            uVar9 = *puVar14;
            uVar10 = puVar14[1];
            uVar11 = puVar14[3];
            *(undefined8 *)(puVar21 + lVar19 + 0x10) = puVar14[2];
            *(undefined8 *)((longlong)(puVar21 + lVar19 + 0x10) + 8) = uVar11;
            *(undefined8 *)(puVar21 + lVar19) = uVar9;
            *(undefined8 *)((longlong)(puVar21 + lVar19) + 8) = uVar10;
            puVar14[2] = 0;
            puVar14[3] = 0xf;
            *(undefined1 *)puVar14 = 0;
            lVar19 = lVar19 + 0x20;
          } while (puVar14 + 4 != local_68);
        }
      }
      local_b0 = (undefined1 *)0x0;
      FUN_14000a2d8(local_58,puVar13,uVar20,uVar17);
      FUN_14000a370(&local_b8);
    }
    else if (param_4 < (ulonglong)((longlong)puVar14 - (longlong)param_2 >> 5)) {
      local_80 = param_4 * 0x20;
      lVar19 = param_4 * -0x20;
      puVar15 = puVar14;
      if (lVar19 != 0) {
        lVar16 = 0;
        do {
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar1 = puVar15 + param_4 * -4;
          uVar2 = *(undefined4 *)puVar1;
          uVar3 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar4 = *(undefined4 *)(puVar1 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          uVar9 = (puVar15 + param_4 * -4 + 2)[1];
          puVar15[2] = puVar15[param_4 * -4 + 2];
          puVar15[3] = uVar9;
          *(undefined4 *)puVar15 = uVar2;
          *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
          *(undefined4 *)(puVar15 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
          puVar15[param_4 * -4 + 2] = 0;
          puVar15[param_4 * -4 + 3] = 0xf;
          *(undefined1 *)(puVar15 + param_4 * -4) = 0;
          puVar15 = puVar15 + 4;
          lVar16 = lVar16 + -0x20;
        } while (-lVar16 != local_80);
      }
      param_1[1] = puVar15;
      local_70 = lVar19;
      local_60 = (undefined8 *)param_4;
      if (puVar14 + param_4 * -4 != param_2) {
        do {
          lVar16 = local_70;
          puVar15 = puVar14 + -4;
          if (lVar19 != 0) {
            puVar18 = (undefined4 *)((longlong)puVar14 + local_70 + -0x20);
            FUN_1400065bc(puVar15);
            uVar2 = *puVar18;
            uVar3 = *(undefined4 *)((longlong)puVar14 + lVar16 + -0x1c);
            uVar4 = *(undefined4 *)((longlong)puVar14 + lVar16 + -0x18);
            uVar5 = *(undefined4 *)((longlong)puVar14 + lVar16 + -0x14);
            uVar6 = *(undefined4 *)((longlong)puVar14 + lVar16 + -0xc);
            uVar7 = *(undefined4 *)((longlong)puVar14 + lVar16 + -8);
            uVar8 = *(undefined4 *)((longlong)puVar14 + lVar16 + -4);
            *(undefined4 *)(puVar14 + -2) = *(undefined4 *)((longlong)puVar14 + lVar16 + -0x10);
            *(undefined4 *)((longlong)puVar14 + -0xc) = uVar6;
            *(undefined4 *)(puVar14 + -1) = uVar7;
            *(undefined4 *)((longlong)puVar14 + -4) = uVar8;
            *(undefined4 *)puVar15 = uVar2;
            *(undefined4 *)((longlong)puVar14 + -0x1c) = uVar3;
            *(undefined4 *)(puVar14 + -3) = uVar4;
            *(undefined4 *)((longlong)puVar14 + -0x14) = uVar5;
            *(undefined8 *)((longlong)puVar14 + lVar16 + -0x10) = 0;
            *(undefined8 *)((longlong)puVar14 + lVar16 + -8) = 0xf;
            *(undefined1 *)puVar18 = 0;
            lVar19 = local_70;
          }
          puVar14 = puVar15;
        } while ((undefined8 *)((longlong)puVar15 + lVar19) != local_50);
      }
      puVar14 = local_50;
      lVar19 = local_80;
      local_78 = (undefined1 *)((longlong)local_50 + local_80);
      lVar16 = 0;
      do {
        FUN_1400017de((undefined1 *)((longlong)puVar14 + lVar16));
        lVar16 = lVar16 + 0x20;
      } while (lVar19 != lVar16);
      FUN_140021055(param_3,local_60,local_50,local_58);
    }
    else {
      local_70 = param_4 * 0x20;
      local_60 = param_2 + param_4 * 4;
      puVar15 = param_2;
      if (puVar14 == param_2) {
        param_1[1] = local_60;
      }
      else {
        do {
          uVar2 = *(undefined4 *)puVar15;
          uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
          uVar4 = *(undefined4 *)(puVar15 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
          uVar9 = puVar15[3];
          puVar15[param_4 * 4 + 2] = puVar15[2];
          (puVar15 + param_4 * 4 + 2)[1] = uVar9;
          puVar1 = puVar15 + param_4 * 4;
          *(undefined4 *)puVar1 = uVar2;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
          *(undefined4 *)(puVar1 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
          puVar15[2] = 0;
          puVar15[3] = 0xf;
          *(undefined1 *)puVar15 = 0;
          puVar15 = puVar15 + 4;
        } while (puVar15 != puVar14);
        param_1[1] = puVar15 + param_4 * 4;
        do {
          FUN_1400017de(param_2);
          param_2 = param_2 + 4;
        } while (param_2 != puVar14);
      }
      FUN_140021055(param_3,param_4,local_50,local_58);
    }
  }
  return;
}

