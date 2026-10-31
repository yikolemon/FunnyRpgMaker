/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cd23b */

void FUN_1400cd23b(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar14 = (longlong)param_2 - (longlong)param_1;
  while (local_68 = param_2, 0xb57 < (longlong)uVar14) {
    uVar15 = (uVar14 >> 3) * 0x2e8ba2e8ba2e8ba3;
    uVar14 = uVar15 >> 1;
    if ((longlong)param_3 < 1) {
      while (puVar9 = local_68, 0 < (longlong)uVar14) {
        uVar14 = uVar14 - 1;
        local_c8 = param_1[uVar14 * 0xb];
        uStack_c0 = (param_1 + uVar14 * 0xb)[1];
        local_b8 = param_1[uVar14 * 0xb + 2];
        uStack_b0 = (param_1 + uVar14 * 0xb + 2)[1];
        param_1[uVar14 * 0xb + 2] = 0;
        param_1[uVar14 * 0xb + 3] = 0xf;
        *(undefined1 *)(param_1 + uVar14 * 0xb) = 0;
        local_a8 = param_1[uVar14 * 0xb + 4];
        uStack_a0 = param_1[uVar14 * 0xb + 5];
        local_98 = param_1[uVar14 * 0xb + 6];
        uStack_90 = param_1[uVar14 * 0xb + 7];
        param_1[uVar14 * 0xb + 6] = 0;
        param_1[uVar14 * 0xb + 7] = 0xf;
        *(undefined1 *)(param_1 + uVar14 * 0xb + 4) = 0;
        local_78 = param_1[uVar14 * 0xb + 10];
        param_1[uVar14 * 0xb + 10] = 0;
        local_88 = param_1[uVar14 * 0xb + 8];
        uStack_80 = param_1[uVar14 * 0xb + 9];
        param_1[uVar14 * 0xb + 8] = 0;
        param_1[uVar14 * 0xb + 9] = 0;
        FUN_1400ce201(param_1,uVar14,uVar15,&local_c8);
        FUN_140016e5c(&local_88);
        FUN_1400017de(&local_a8);
        FUN_1400017de(&local_c8);
      }
      while (0x58 < (longlong)puVar9 - (longlong)param_1) {
        local_c8 = puVar9[-0xb];
        uStack_c0 = puVar9[-10];
        local_b8 = puVar9[-9];
        uStack_b0 = puVar9[-8];
        puVar9[-9] = 0;
        puVar9[-8] = 0xf;
        *(undefined1 *)(puVar9 + -0xb) = 0;
        local_a8 = puVar9[-7];
        uStack_a0 = puVar9[-6];
        local_98 = puVar9[-5];
        uStack_90 = puVar9[-4];
        puVar9[-5] = 0;
        puVar9[-4] = 0xf;
        *(undefined1 *)(puVar9 + -7) = 0;
        local_78 = puVar9[-1];
        puVar9[-1] = 0;
        local_88 = puVar9[-3];
        uStack_80 = puVar9[-2];
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar12 = puVar9 + -0xb;
        if (puVar12 != param_1) {
          FUN_1400065bc(puVar12);
          uVar14 = *param_1;
          uVar2 = *(undefined4 *)((longlong)param_1 + 4);
          uVar15 = param_1[1];
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
          uVar6 = param_1[3];
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
          *(int *)(puVar9 + -9) = (int)param_1[2];
          *(undefined4 *)((longlong)puVar9 + -0x44) = uVar4;
          *(int *)(puVar9 + -8) = (int)uVar6;
          *(undefined4 *)((longlong)puVar9 + -0x3c) = uVar5;
          *(int *)puVar12 = (int)uVar14;
          *(undefined4 *)((longlong)puVar9 + -0x54) = uVar2;
          *(int *)(puVar9 + -10) = (int)uVar15;
          *(undefined4 *)((longlong)puVar9 + -0x4c) = uVar3;
          param_1[2] = 0;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0;
          FUN_1400065bc(puVar9 + -7);
          uVar14 = param_1[4];
          uVar2 = *(undefined4 *)((longlong)param_1 + 0x24);
          uVar15 = param_1[5];
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
          uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
          uVar6 = param_1[7];
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x3c);
          *(int *)(puVar9 + -5) = (int)param_1[6];
          *(undefined4 *)((longlong)puVar9 + -0x24) = uVar4;
          *(int *)(puVar9 + -4) = (int)uVar6;
          *(undefined4 *)((longlong)puVar9 + -0x1c) = uVar5;
          *(int *)(puVar9 + -7) = (int)uVar14;
          *(undefined4 *)((longlong)puVar9 + -0x34) = uVar2;
          *(int *)(puVar9 + -6) = (int)uVar15;
          *(undefined4 *)((longlong)puVar9 + -0x2c) = uVar3;
          param_1[6] = 0;
          param_1[7] = 0xf;
          *(undefined1 *)(param_1 + 4) = 0;
          FUN_140016e5c(puVar9 + -3);
          puVar9[-3] = param_1[8];
          puVar9[-2] = param_1[9];
          puVar9[-1] = param_1[10];
          param_1[10] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
        }
        FUN_1400ce201(param_1,0,((longlong)puVar12 - (longlong)param_1 >> 3) * 0x2e8ba2e8ba2e8ba3,
                      &local_c8);
        FUN_140016e5c(&local_88);
        FUN_1400017de(&local_a8);
        FUN_1400017de(&local_c8);
        puVar9 = puVar12;
      }
      return;
    }
    puVar10 = param_1 + uVar14 * 0xb;
    puVar9 = param_2 + -0xb;
    puVar12 = puVar10;
    if ((longlong)puVar9 - (longlong)param_1 < 0xdc1) {
      FUN_1400ce5f0(param_1,puVar10,puVar9);
    }
    else {
      uVar14 = ((ulonglong)((longlong)puVar9 - (longlong)param_1) >> 3) * 0x2e8ba2e8ba2e8ba3 + 1 >>
               3;
      FUN_1400ce5f0(param_1,param_1 + uVar14 * 0xb,param_1 + uVar14 * 0x16);
      FUN_1400ce5f0(puVar10 + uVar14 * -0xb,puVar10,puVar10 + uVar14 * 0xb);
      FUN_1400ce5f0(puVar9 + uVar14 * -0x16,puVar9 + uVar14 * -0xb,puVar9);
      FUN_1400ce5f0(param_1 + uVar14 * 0xb,puVar10,puVar9 + uVar14 * -0xb);
    }
    do {
      puVar9 = puVar12 + -0xb;
      iVar8 = FUN_1400175e8(puVar9,puVar12);
      if ((iVar8 < 0) ||
         ((((cVar7 = FUN_1400170b4(puVar9,puVar12), cVar7 != '\0' &&
            (iVar8 = FUN_1400175e8(puVar12 + -7,puVar12 + 4), iVar8 < 0)) ||
           (iVar8 = FUN_1400175e8(puVar12,puVar9), iVar8 < 0)) ||
          ((cVar7 = FUN_1400170b4(puVar12,puVar9), cVar7 != '\0' &&
           (iVar8 = FUN_1400175e8(puVar12 + 4,puVar12 + -7), iVar8 < 0)))))) break;
      puVar12 = puVar9;
    } while (param_1 < puVar9);
    puVar10 = puVar10 + 0xb;
    puVar11 = puVar10;
    puVar9 = puVar12;
    if (puVar10 < local_68) {
      while (((iVar8 = FUN_1400175e8(puVar10,puVar12), puVar11 = puVar10, -1 < iVar8 &&
              ((cVar7 = FUN_1400170b4(puVar10,puVar12), cVar7 == '\0' ||
               (iVar8 = FUN_1400175e8(puVar10 + 4,puVar12 + 4), -1 < iVar8)))) &&
             (iVar8 = FUN_1400175e8(puVar12,puVar10), -1 < iVar8))) {
        cVar7 = FUN_1400170b4(puVar12,puVar10);
        if (((cVar7 != '\0') && (iVar8 = FUN_1400175e8(puVar12 + 4,puVar10 + 4), iVar8 < 0)) ||
           (puVar10 = puVar10 + 0xb, puVar11 = puVar10, local_68 <= puVar10)) break;
      }
    }
LAB_1400cd43b:
    puVar13 = puVar12;
    if (puVar11 < local_68) {
      do {
        iVar8 = FUN_1400175e8(puVar9,puVar11);
        if ((-1 < iVar8) &&
           ((cVar7 = FUN_1400170b4(puVar9,puVar11), cVar7 == '\0' ||
            (iVar8 = FUN_1400175e8(puVar9 + 4,puVar11 + 4), -1 < iVar8)))) {
          iVar8 = FUN_1400175e8(puVar11,puVar9);
          if ((iVar8 < 0) ||
             ((cVar7 = FUN_1400170b4(puVar11,puVar9), cVar7 != '\0' &&
              (iVar8 = FUN_1400175e8(puVar11 + 4,puVar9 + 4), iVar8 < 0)))) break;
          if (puVar11 == puVar10) {
            puVar10 = puVar10 + 0xb;
          }
          else {
            FUN_1400ce6bd(puVar10,puVar11);
            puVar10 = puVar10 + 0xb;
          }
        }
        puVar11 = puVar11 + 0xb;
      } while (puVar11 < local_68);
    }
joined_r0x0001400cd4d2:
    puVar12 = puVar13;
    if (param_1 < puVar12) {
      puVar13 = puVar12 + -0xb;
      iVar8 = FUN_1400175e8(puVar13,puVar9);
      if ((-1 < iVar8) &&
         ((cVar7 = FUN_1400170b4(puVar13,puVar9), cVar7 == '\0' ||
          (iVar8 = FUN_1400175e8(puVar12 + -7,puVar9 + 4), -1 < iVar8)))) {
        iVar8 = FUN_1400175e8(puVar9,puVar13);
        if ((iVar8 < 0) ||
           ((cVar7 = FUN_1400170b4(puVar9,puVar13), cVar7 != '\0' &&
            (iVar8 = FUN_1400175e8(puVar9 + 4,puVar12 + -7), iVar8 < 0)))) goto LAB_1400cd570;
        puVar1 = puVar9 + -0xb;
        bVar16 = puVar12 != puVar9;
        puVar9 = puVar1;
        if (bVar16) {
          FUN_1400ce6bd(puVar1,puVar13);
        }
      }
      goto joined_r0x0001400cd4d2;
    }
LAB_1400cd570:
    if ((puVar11 != local_68) || (puVar12 != param_1)) {
      if (puVar12 == param_1) {
        if (puVar10 != puVar11) {
          FUN_1400ce6bd(puVar9,puVar10);
        }
        puVar10 = puVar10 + 0xb;
        FUN_1400ce6bd(puVar9,puVar11);
        puVar11 = puVar11 + 0xb;
        puVar9 = puVar9 + 0xb;
      }
      else {
        puVar13 = puVar12 + -0xb;
        if (puVar11 == local_68) {
          puVar1 = puVar9 + -0xb;
          if (puVar12 != puVar9) {
            FUN_1400ce6bd(puVar13,puVar1);
          }
          puVar10 = puVar10 + -0xb;
          FUN_1400ce6bd(puVar1,puVar10);
          puVar12 = puVar13;
          puVar9 = puVar1;
        }
        else {
          FUN_1400ce6bd(puVar11,puVar13);
          puVar11 = puVar11 + 0xb;
          puVar12 = puVar13;
        }
      }
      goto LAB_1400cd43b;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)puVar9 - (longlong)param_1 < (longlong)param_2 - (longlong)puVar10) {
      FUN_1400cd23b(param_1,puVar9,param_3);
      param_1 = puVar10;
    }
    else {
      FUN_1400cd23b(puVar10,local_68,param_3);
      local_68 = puVar9;
    }
    param_2 = local_68;
    uVar14 = (longlong)local_68 - (longlong)param_1;
  }
  if (param_1 != param_2) {
    puVar9 = param_1;
    while (puVar12 = puVar9 + 0xb, puVar12 != local_68) {
      local_c8 = *puVar12;
      uStack_c0 = puVar9[0xc];
      local_b8 = puVar9[0xd];
      uStack_b0 = puVar9[0xe];
      puVar9[0xd] = 0;
      puVar9[0xe] = 0xf;
      *(undefined1 *)(puVar9 + 0xb) = 0;
      local_a8 = puVar9[0xf];
      uStack_a0 = puVar9[0x10];
      local_98 = puVar9[0x11];
      uStack_90 = puVar9[0x12];
      puVar9[0x11] = 0;
      puVar9[0x12] = 0xf;
      *(undefined1 *)(puVar9 + 0xf) = 0;
      local_78 = puVar9[0x15];
      puVar9[0x15] = 0;
      local_88 = puVar9[0x13];
      uStack_80 = puVar9[0x14];
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      iVar8 = FUN_1400175e8(&local_c8,param_1);
      if ((iVar8 < 0) ||
         ((cVar7 = FUN_1400170b4(&local_c8,param_1), puVar10 = puVar12, cVar7 != '\0' &&
          (iVar8 = FUN_1400175e8(&local_a8,param_1 + 4), iVar8 < 0)))) {
        FUN_1400ce0f8(param_1,puVar12,puVar9 + 0x16);
        if (param_1 != &local_c8) {
          FUN_1400065bc(param_1);
          *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)param_1 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_b0._4_4_;
          *(undefined4 *)param_1 = (undefined4)local_c8;
          *(undefined4 *)((longlong)param_1 + 4) = local_c8._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_c0._4_4_;
          local_b8 = 0;
          uStack_b0 = 0xf;
          local_c8 = local_c8 & 0xffffffffffffff00;
          FUN_1400065bc(param_1 + 4);
          *(undefined4 *)(param_1 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)param_1 + 0x34) = local_98._4_4_;
          *(undefined4 *)(param_1 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(param_1 + 4) = (undefined4)local_a8;
          *(undefined4 *)((longlong)param_1 + 0x24) = local_a8._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_a0._4_4_;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = local_a8 & 0xffffffffffffff00;
          FUN_140016e5c(param_1 + 8);
          param_1[8] = local_88;
          param_1[9] = uStack_80;
          param_1[10] = local_78;
          goto LAB_1400cd92a;
        }
      }
      else {
        while( true ) {
          puVar9 = puVar10 + -0xb;
          iVar8 = FUN_1400175e8(&local_c8,puVar9);
          if ((-1 < iVar8) &&
             ((cVar7 = FUN_1400170b4(&local_c8,puVar9), cVar7 == '\0' ||
              (iVar8 = FUN_1400175e8(&local_a8,puVar10 + -7), -1 < iVar8)))) break;
          FUN_1400065bc(puVar10);
          *(int *)(puVar10 + 2) = (int)puVar10[-9];
          *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)((longlong)puVar10 + -0x44);
          *(int *)(puVar10 + 3) = (int)puVar10[-8];
          *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)puVar10 + -0x3c);
          *(int *)puVar10 = (int)*puVar9;
          *(undefined4 *)((longlong)puVar10 + 4) = *(undefined4 *)((longlong)puVar10 + -0x54);
          *(int *)(puVar10 + 1) = (int)puVar10[-10];
          *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar10 + -0x4c);
          puVar10[-9] = 0;
          puVar10[-8] = 0xf;
          *(undefined1 *)(puVar10 + -0xb) = 0;
          FUN_1400065bc(puVar10 + 4);
          *(int *)(puVar10 + 6) = (int)puVar10[-5];
          *(undefined4 *)((longlong)puVar10 + 0x34) = *(undefined4 *)((longlong)puVar10 + -0x24);
          *(int *)(puVar10 + 7) = (int)puVar10[-4];
          *(undefined4 *)((longlong)puVar10 + 0x3c) = *(undefined4 *)((longlong)puVar10 + -0x1c);
          *(int *)(puVar10 + 4) = (int)puVar10[-7];
          *(undefined4 *)((longlong)puVar10 + 0x24) = *(undefined4 *)((longlong)puVar10 + -0x34);
          *(int *)(puVar10 + 5) = (int)puVar10[-6];
          *(undefined4 *)((longlong)puVar10 + 0x2c) = *(undefined4 *)((longlong)puVar10 + -0x2c);
          puVar10[-5] = 0;
          puVar10[-4] = 0xf;
          *(undefined1 *)(puVar10 + -7) = 0;
          FUN_140016e5c(puVar10 + 8);
          *(int *)(puVar10 + 8) = (int)puVar10[-3];
          *(undefined4 *)((longlong)puVar10 + 0x44) = *(undefined4 *)((longlong)puVar10 + -0x14);
          *(int *)(puVar10 + 9) = (int)puVar10[-2];
          *(undefined4 *)((longlong)puVar10 + 0x4c) = *(undefined4 *)((longlong)puVar10 + -0xc);
          puVar10[10] = puVar10[-1];
          puVar10[-1] = 0;
          puVar10[-3] = 0;
          puVar10[-2] = 0;
          puVar10 = puVar9;
        }
        if (puVar10 != &local_c8) {
          FUN_1400065bc(puVar10);
          *(undefined4 *)(puVar10 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar10 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_b0._4_4_;
          *(undefined4 *)puVar10 = (undefined4)local_c8;
          *(undefined4 *)((longlong)puVar10 + 4) = local_c8._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_c0._4_4_;
          local_b8 = 0;
          uStack_b0 = 0xf;
          local_c8 = local_c8 & 0xffffffffffffff00;
          FUN_1400065bc(puVar10 + 4);
          *(undefined4 *)(puVar10 + 6) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar10 + 0x34) = local_98._4_4_;
          *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_90._4_4_;
          *(undefined4 *)(puVar10 + 4) = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar10 + 0x24) = local_a8._4_4_;
          *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_a0._4_4_;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = local_a8 & 0xffffffffffffff00;
          FUN_140016e5c(puVar10 + 8);
          puVar10[8] = local_88;
          puVar10[9] = uStack_80;
          puVar10[10] = local_78;
LAB_1400cd92a:
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
        }
      }
      FUN_140016e5c(&local_88);
      FUN_1400017de(&local_a8);
      FUN_1400017de(&local_c8);
      puVar9 = puVar12;
    }
  }
  return;
}

