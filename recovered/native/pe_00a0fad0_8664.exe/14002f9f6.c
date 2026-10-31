/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002f9f6 */

undefined8 * FUN_14002f9f6(longlong *param_1,undefined8 *param_2,int *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 *local_68;
  longlong local_60;
  int *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar15 = *param_1;
  uVar12 = (param_1[1] - lVar15 >> 5) + 1;
  uVar9 = param_1[2] - lVar15 >> 5;
  uVar14 = (uVar9 >> 1) + uVar9;
  if (uVar14 <= uVar12) {
    uVar14 = uVar12;
  }
  if (0x7ffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar14 = 0x7ffffffffffffff;
  }
  local_58 = param_3;
  local_50 = param_4;
  if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar15 = (longlong)param_2 - lVar15;
  puVar8 = (undefined8 *)FUN_140006280(uVar14 << 5);
  lVar13 = (longlong)puVar8 + lVar15 + 0x20;
  puVar16 = (undefined8 *)(lVar15 + (longlong)puVar8);
  uVar2 = *local_50;
  iVar3 = *local_58;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  local_80 = param_1;
  local_78 = puVar8;
  local_70 = uVar14;
  local_68 = (undefined8 *)lVar13;
  local_60 = lVar13;
  FUN_14002298c(puVar16,uVar2,(longlong)iVar3);
  puVar4 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  if (param_2 == puVar11) {
    local_68 = puVar16;
    if (puVar4 != param_2) {
      lVar15 = 0;
      do {
        puVar11 = (undefined8 *)((longlong)puVar8 + lVar15 + 0x10);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined8 *)((longlong)puVar8 + lVar15) = 0;
        ((undefined8 *)((longlong)puVar8 + lVar15))[1] = 0;
        puVar11 = (undefined8 *)((longlong)puVar4 + lVar15);
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        uVar7 = puVar11[3];
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar15 + 0x10);
        *puVar1 = puVar11[2];
        puVar1[1] = uVar7;
        *(undefined8 *)((longlong)puVar8 + lVar15) = uVar5;
        ((undefined8 *)((longlong)puVar8 + lVar15))[1] = uVar6;
        puVar11[2] = 0;
        puVar11[3] = 0xf;
        *(undefined1 *)puVar11 = 0;
        lVar15 = lVar15 + 0x20;
      } while (puVar11 + 4 != param_2);
    }
  }
  else {
    if (puVar4 != param_2) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)((longlong)puVar8 + lVar10 + 0x10);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined8 *)((longlong)puVar8 + lVar10) = 0;
        ((undefined8 *)((longlong)puVar8 + lVar10))[1] = 0;
        puVar11 = (undefined8 *)((longlong)puVar4 + lVar10);
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        uVar7 = puVar11[3];
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar10 + 0x10);
        *puVar1 = puVar11[2];
        puVar1[1] = uVar7;
        *(undefined8 *)((longlong)puVar8 + lVar10) = uVar5;
        ((undefined8 *)((longlong)puVar8 + lVar10))[1] = uVar6;
        puVar11[2] = 0;
        puVar11[3] = 0xf;
        *(undefined1 *)puVar11 = 0;
        lVar10 = lVar10 + 0x20;
      } while (puVar11 + 4 != param_2);
      puVar11 = (undefined8 *)param_1[1];
    }
    local_68 = puVar8;
    if (param_2 != puVar11) {
      lVar10 = 0;
      do {
        puVar4 = (undefined8 *)((longlong)puVar8 + lVar10 + lVar15 + 0x30);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 *)(lVar13 + lVar10) = 0;
        ((undefined8 *)(lVar13 + lVar10))[1] = 0;
        puVar4 = (undefined8 *)((longlong)param_2 + lVar10);
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uVar7 = puVar4[3];
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar10 + lVar15 + 0x30);
        *puVar1 = puVar4[2];
        puVar1[1] = uVar7;
        *(undefined8 *)(lVar13 + lVar10) = uVar5;
        ((undefined8 *)(lVar13 + lVar10))[1] = uVar6;
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        *(undefined1 *)puVar4 = 0;
        lVar10 = lVar10 + 0x20;
      } while (puVar4 + 4 != puVar11);
    }
  }
  local_78 = (undefined8 *)0x0;
  FUN_14000a2d8(param_1,puVar8,uVar12,uVar14);
  FUN_14000a370(&local_80);
  return puVar16;
}

