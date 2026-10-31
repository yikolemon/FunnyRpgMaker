/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c0440 */

void FUN_1401c0440(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar13 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar13;
    uVar8 = puVar13[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar7;
    param_1[1] = uVar8;
    return;
  }
  puVar13 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar13 = param_1;
  }
  if (puVar13 <= param_1) {
    if (param_3 < 0x800) {
      uVar6 = *param_2;
      if (0x80 < param_3) {
        lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
        param_1 = (undefined8 *)((longlong)param_1 - lVar15);
        param_2 = (undefined8 *)((longlong)param_2 - lVar15);
        param_3 = param_3 + lVar15;
        if (0x80 < param_3) {
          do {
            uVar7 = param_2[1];
            uVar8 = param_2[2];
            uVar9 = param_2[3];
            uVar17 = param_2[4];
            uVar18 = param_2[5];
            uVar10 = param_2[6];
            uVar11 = param_2[7];
            *param_1 = *param_2;
            param_1[1] = uVar7;
            param_1[2] = uVar8;
            param_1[3] = uVar9;
            param_1[4] = uVar17;
            param_1[5] = uVar18;
            param_1[6] = uVar10;
            param_1[7] = uVar11;
            uVar7 = param_2[9];
            uVar8 = param_2[10];
            uVar9 = param_2[0xb];
            uVar17 = param_2[0xc];
            uVar18 = param_2[0xd];
            uVar10 = param_2[0xe];
            uVar11 = param_2[0xf];
            param_1[8] = param_2[8];
            param_1[9] = uVar7;
            param_1[10] = uVar8;
            param_1[0xb] = uVar9;
            param_1[0xc] = uVar17;
            param_1[0xd] = uVar18;
            param_1[0xe] = uVar10;
            param_1[0xf] = uVar11;
            param_1 = param_1 + 0x10;
            param_2 = param_2 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001401c0666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_140f51420 + (param_3 + 0xf >> 4) * 4)))(uVar6);
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = (longlong)param_2 - (longlong)param_1;
  puVar13 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
  uVar8 = *puVar13;
  uVar9 = puVar13[1];
  puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar14 = param_3 - 0x10;
  puVar13 = puVar12;
  uVar17 = uVar8;
  uVar18 = uVar9;
  if (((ulonglong)puVar12 & 0xf) != 0) {
    puVar13 = (undefined8 *)((ulonglong)puVar12 & 0xfffffffffffffff0);
    uVar17 = *(undefined8 *)((longlong)puVar13 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar13 + lVar15))[1];
    *puVar12 = uVar8;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
    uVar14 = (longlong)puVar13 - (longlong)param_1;
  }
  uVar16 = uVar14 >> 7;
  if (uVar16 != 0) {
    *puVar13 = uVar17;
    puVar13[1] = uVar18;
    puVar12 = puVar13;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x10);
      uVar8 = puVar1[1];
      puVar13 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x20);
      uVar9 = *puVar13;
      uVar17 = puVar13[1];
      puVar13 = puVar12 + -0x10;
      puVar12[-2] = *puVar1;
      puVar12[-1] = uVar8;
      puVar12[-4] = uVar9;
      puVar12[-3] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x40);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = uVar16 - 1;
      puVar12[-6] = *puVar1;
      puVar12[-5] = uVar8;
      puVar12[-8] = uVar9;
      puVar12[-7] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x50);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x60);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      puVar12[-10] = *puVar1;
      puVar12[-9] = uVar8;
      puVar12[-0xc] = uVar9;
      puVar12[-0xb] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar12 + lVar15 + -0x70);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar17 = *(undefined8 *)((longlong)puVar13 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar13 + lVar15))[1];
      if (uVar16 == 0) break;
      puVar12[-0xe] = uVar8;
      puVar12[-0xd] = uVar9;
      *puVar13 = uVar17;
      puVar12[-0xf] = uVar18;
      puVar12 = puVar13;
    }
    puVar12[-0xe] = uVar8;
    puVar12[-0xd] = uVar9;
    uVar14 = uVar14 & 0x7f;
  }
  for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar13 = uVar17;
    puVar13[1] = uVar18;
    puVar13 = puVar13 + -2;
    uVar17 = *(undefined8 *)((longlong)puVar13 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar13 + lVar15))[1];
  }
  if ((uVar14 & 0xf) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  *puVar13 = uVar17;
  puVar13[1] = uVar18;
  return;
}

