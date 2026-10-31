/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ce201 */

void FUN_1400ce201(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  
  uVar16 = param_3 - 1;
  uVar14 = (longlong)uVar16 >> 1;
  uVar17 = param_2;
  while (uVar13 = uVar17, (longlong)uVar13 < (longlong)uVar14) {
    lVar12 = param_1 + uVar13 * 0xb0;
    lVar15 = param_1 + uVar13 * 0xb0 + 0x58;
    iVar11 = FUN_1400175e8(lVar12 + 0xb0,lVar15);
    if (iVar11 < 0) {
LAB_1400ce2a8:
      uVar17 = uVar13 * 2 | 1;
    }
    else {
      uVar17 = uVar13 * 2 + 2;
      cVar10 = FUN_1400170b4(lVar12 + 0xb0,lVar15);
      if ((cVar10 != '\0') && (iVar11 = FUN_1400175e8(lVar12 + 0xd0,lVar12 + 0x78), iVar11 < 0))
      goto LAB_1400ce2a8;
    }
    if (uVar13 != uVar17) {
      lVar15 = uVar17 * 0x58;
      lVar12 = uVar13 * 0x58;
      FUN_1400065bc(param_1 + lVar12);
      puVar18 = (undefined4 *)(param_1 + lVar15);
      uVar3 = *puVar18;
      uVar4 = puVar18[1];
      uVar5 = puVar18[2];
      uVar6 = puVar18[3];
      puVar1 = (undefined4 *)(param_1 + 0x10 + lVar15);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar18 = (undefined4 *)(param_1 + lVar12);
      puVar18[4] = *puVar1;
      puVar18[5] = uVar7;
      puVar18[6] = uVar8;
      puVar18[7] = uVar9;
      *puVar18 = uVar3;
      puVar18[1] = uVar4;
      puVar18[2] = uVar5;
      puVar18[3] = uVar6;
      *(undefined8 *)(param_1 + 0x10 + lVar15) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar15) = 0xf;
      *(undefined1 *)(param_1 + lVar15) = 0;
      FUN_1400065bc(puVar18 + 8);
      puVar1 = (undefined4 *)(param_1 + 0x20 + lVar15);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_1 + 0x30 + lVar15);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar18[0xc] = *puVar1;
      puVar18[0xd] = uVar7;
      puVar18[0xe] = uVar8;
      puVar18[0xf] = uVar9;
      puVar18[8] = uVar3;
      puVar18[9] = uVar4;
      puVar18[10] = uVar5;
      puVar18[0xb] = uVar6;
      *(undefined8 *)(param_1 + 0x30 + lVar15) = 0;
      *(undefined8 *)(param_1 + 0x38 + lVar15) = 0xf;
      *(undefined1 *)(param_1 + 0x20 + lVar15) = 0;
      lVar12 = param_1 + lVar12;
      FUN_140016e5c((undefined4 *)(lVar12 + 0x40));
      puVar18 = (undefined4 *)(param_1 + 0x40 + lVar15);
      uVar3 = puVar18[1];
      uVar4 = puVar18[2];
      uVar5 = puVar18[3];
      *(undefined4 *)(lVar12 + 0x40) = *puVar18;
      *(undefined4 *)(lVar12 + 0x44) = uVar3;
      *(undefined4 *)(lVar12 + 0x48) = uVar4;
      *(undefined4 *)(lVar12 + 0x4c) = uVar5;
      *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(param_1 + 0x50 + lVar15);
      *(undefined8 *)(param_1 + 0x50 + lVar15) = 0;
      puVar2 = (undefined8 *)(param_1 + 0x40 + lVar15);
      *puVar2 = 0;
      puVar2[1] = 0;
    }
  }
  if ((((param_3 & 1) == 0) && (uVar13 == uVar14)) && (uVar13 = uVar16, uVar14 != uVar16)) {
    lVar15 = uVar16 * 0x58;
    lVar12 = uVar14 * 0x58;
    FUN_1400065bc(param_1 + lVar12);
    puVar18 = (undefined4 *)(param_1 + lVar15);
    uVar3 = *puVar18;
    uVar4 = puVar18[1];
    uVar5 = puVar18[2];
    uVar6 = puVar18[3];
    puVar1 = (undefined4 *)(param_1 + 0x10 + lVar15);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar18 = (undefined4 *)(param_1 + lVar12);
    puVar18[4] = *puVar1;
    puVar18[5] = uVar7;
    puVar18[6] = uVar8;
    puVar18[7] = uVar9;
    *puVar18 = uVar3;
    puVar18[1] = uVar4;
    puVar18[2] = uVar5;
    puVar18[3] = uVar6;
    *(undefined8 *)(param_1 + 0x10 + lVar15) = 0;
    *(undefined8 *)(param_1 + 0x18 + lVar15) = 0xf;
    *(undefined1 *)(param_1 + lVar15) = 0;
    FUN_1400065bc(puVar18 + 8);
    puVar1 = (undefined4 *)(param_1 + 0x20 + lVar15);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined4 *)(param_1 + 0x30 + lVar15);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar18[0xc] = *puVar1;
    puVar18[0xd] = uVar7;
    puVar18[0xe] = uVar8;
    puVar18[0xf] = uVar9;
    puVar18[8] = uVar3;
    puVar18[9] = uVar4;
    puVar18[10] = uVar5;
    puVar18[0xb] = uVar6;
    *(undefined8 *)(param_1 + 0x30 + lVar15) = 0;
    *(undefined8 *)(param_1 + 0x38 + lVar15) = 0xf;
    *(undefined1 *)(param_1 + 0x20 + lVar15) = 0;
    lVar12 = param_1 + lVar12;
    FUN_140016e5c((undefined8 *)(lVar12 + 0x40));
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(param_1 + 0x40 + lVar15);
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(param_1 + 0x48 + lVar15);
    *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(param_1 + 0x50 + lVar15);
    *(undefined8 *)(param_1 + 0x50 + lVar15) = 0;
    puVar2 = (undefined8 *)(param_1 + 0x40 + lVar15);
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  if ((longlong)param_2 < (longlong)uVar13) {
    do {
      uVar16 = uVar13 - 1 >> 1;
      puVar18 = (undefined4 *)(uVar16 * 0x58 + param_1);
      iVar11 = FUN_1400175e8(puVar18,param_4);
      if ((-1 < iVar11) &&
         ((cVar10 = FUN_1400170b4(puVar18,param_4), cVar10 == '\0' ||
          (iVar11 = FUN_1400175e8(puVar18 + 8,param_4 + 8), -1 < iVar11)))) break;
      if (uVar13 != uVar16) {
        lVar12 = uVar13 * 0x58;
        FUN_1400065bc(param_1 + lVar12);
        uVar3 = *puVar18;
        uVar4 = puVar18[1];
        uVar5 = puVar18[2];
        uVar6 = puVar18[3];
        uVar7 = puVar18[5];
        uVar8 = puVar18[6];
        uVar9 = puVar18[7];
        puVar1 = (undefined4 *)(param_1 + lVar12);
        puVar1[4] = puVar18[4];
        puVar1[5] = uVar7;
        puVar1[6] = uVar8;
        puVar1[7] = uVar9;
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined8 *)(puVar18 + 4) = 0;
        *(undefined8 *)(puVar18 + 6) = 0xf;
        *(undefined1 *)puVar18 = 0;
        FUN_1400065bc(puVar1 + 8);
        uVar3 = puVar18[8];
        uVar4 = puVar18[9];
        uVar5 = puVar18[10];
        uVar6 = puVar18[0xb];
        uVar7 = puVar18[0xd];
        uVar8 = puVar18[0xe];
        uVar9 = puVar18[0xf];
        puVar1[0xc] = puVar18[0xc];
        puVar1[0xd] = uVar7;
        puVar1[0xe] = uVar8;
        puVar1[0xf] = uVar9;
        puVar1[8] = uVar3;
        puVar1[9] = uVar4;
        puVar1[10] = uVar5;
        puVar1[0xb] = uVar6;
        *(undefined8 *)(puVar18 + 0xc) = 0;
        *(undefined8 *)(puVar18 + 0xe) = 0xf;
        *(undefined1 *)(puVar18 + 8) = 0;
        lVar12 = param_1 + lVar12;
        FUN_140016e5c((undefined4 *)(lVar12 + 0x40));
        uVar3 = puVar18[0x11];
        uVar4 = puVar18[0x12];
        uVar5 = puVar18[0x13];
        *(undefined4 *)(lVar12 + 0x40) = puVar18[0x10];
        *(undefined4 *)(lVar12 + 0x44) = uVar3;
        *(undefined4 *)(lVar12 + 0x48) = uVar4;
        *(undefined4 *)(lVar12 + 0x4c) = uVar5;
        *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(puVar18 + 0x14);
        *(undefined8 *)(puVar18 + 0x14) = 0;
        *(undefined8 *)(puVar18 + 0x10) = 0;
        *(undefined8 *)(puVar18 + 0x12) = 0;
      }
      uVar13 = uVar16;
    } while (param_2 < uVar16);
  }
  puVar18 = (undefined4 *)(param_1 + uVar13 * 0x58);
  if (puVar18 != param_4) {
    FUN_1400065bc(puVar18);
    uVar3 = *param_4;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    uVar7 = param_4[5];
    uVar8 = param_4[6];
    uVar9 = param_4[7];
    puVar18[4] = param_4[4];
    puVar18[5] = uVar7;
    puVar18[6] = uVar8;
    puVar18[7] = uVar9;
    *puVar18 = uVar3;
    puVar18[1] = uVar4;
    puVar18[2] = uVar5;
    puVar18[3] = uVar6;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0xf;
    *(undefined1 *)param_4 = 0;
    FUN_1400065bc(puVar18 + 8);
    uVar3 = param_4[8];
    uVar4 = param_4[9];
    uVar5 = param_4[10];
    uVar6 = param_4[0xb];
    uVar7 = param_4[0xd];
    uVar8 = param_4[0xe];
    uVar9 = param_4[0xf];
    puVar18[0xc] = param_4[0xc];
    puVar18[0xd] = uVar7;
    puVar18[0xe] = uVar8;
    puVar18[0xf] = uVar9;
    puVar18[8] = uVar3;
    puVar18[9] = uVar4;
    puVar18[10] = uVar5;
    puVar18[0xb] = uVar6;
    *(undefined8 *)(param_4 + 0xc) = 0;
    *(undefined8 *)(param_4 + 0xe) = 0xf;
    *(undefined1 *)(param_4 + 8) = 0;
    FUN_140016e5c(puVar18 + 0x10);
    *(undefined8 *)(puVar18 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(puVar18 + 0x12) = *(undefined8 *)(param_4 + 0x12);
    *(undefined8 *)(puVar18 + 0x14) = *(undefined8 *)(param_4 + 0x14);
    *(undefined8 *)(param_4 + 0x14) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined8 *)(param_4 + 0x12) = 0;
  }
  return;
}

