/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029143e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbd2a) overlaps instruction at (ram,0x0001404cbd29)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14029143e(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,float param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined7 uVar14;
  undefined8 *puVar12;
  char *pcVar13;
  ushort uVar15;
  int iVar16;
  byte *pbVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 *unaff_RBX;
  undefined4 *puVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 unaff_EBP;
  undefined8 unaff_RSI;
  undefined4 *puVar25;
  undefined8 unaff_RDI;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined8 unaff_R12;
  undefined8 *puVar28;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 *puVar29;
  longlong lVar30;
  bool bVar31;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar40 [16];
  float fVar41;
  undefined4 uVar42;
  float in_XMM4_Da;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  float in_XMM5_Da;
  undefined4 unaff_retaddr;
  undefined8 in_stack_000000a0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined4 *puStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  float local_84;
  float local_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 local_68;
  float local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  uint uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar39 [16];
  
  uVar6 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar41 = (float)param_4;
  fVar33 = (float)((ulonglong)unaff_R15 >> 0x20);
  bVar1 = *param_1;
  uVar19 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar1);
  pbVar17 = param_1 + 8;
  uStack_20 = (undefined4)unaff_R13;
  uStack_1c = (undefined4)((ulonglong)unaff_R13 >> 0x20);
  uStack_28 = (uint)unaff_R12;
  local_24 = (undefined4)((ulonglong)unaff_R12 >> 0x20);
  uStack_30 = (undefined4)unaff_RSI;
  local_2c = (undefined4)((ulonglong)unaff_RSI >> 0x20);
  uStack_38 = (uint)unaff_RDI;
  local_34 = (uint)((ulonglong)unaff_RDI >> 0x20);
  local_40 = (int)unaff_RBX;
  local_3c = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  local_48 = -2;
  uVar26 = uVar19 & 0xffffffff;
  plVar10 = *(longlong **)pbVar17;
  if (bVar1 == 1 && plVar10 == (longlong *)0x0) {
    return plVar10;
  }
  uVar19 = uVar19 & 0xfffffffe;
  bVar31 = (char)uVar19 == '\x02';
  uVar18 = (undefined4)CONCAT71((int7)(uVar19 >> 8),bVar31);
  cVar3 = (char)uVar26;
  if ((cVar3 == '\b' || bVar31) && plVar10 == (longlong *)0x0) {
    return plVar10;
  }
  if ((byte)(bVar1 - 1) < 2) {
    uStack_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    puVar12 = (undefined8 *)(plVar10[1] - *plVar10 >> 4);
    if (cVar3 == '\x02') {
      local_a0 = (longlong *)0x140291f7c;
      FUN_140292222(&uStack_78);
      unaff_RBX = (undefined8 *)**(undefined8 **)pbVar17;
      puVar29 = (undefined8 *)(*(undefined8 **)pbVar17)[1];
      if (unaff_RBX != puVar29) {
        do {
          local_a0 = (longlong *)0x140291f9c;
          puVar12 = unaff_RBX;
          FUN_14029244e(&uStack_78);
          unaff_RBX = unaff_RBX + 2;
        } while (unaff_RBX != puVar29);
      }
    }
    else {
      puVar12 = (undefined8 *)((longlong)puVar12 * -0x5555555555555555);
      local_a0 = (longlong *)0x14029210c;
      FUN_140292222(&uStack_78);
      lVar2 = (*(longlong **)pbVar17)[1];
      unaff_RBX = &uStack_78;
      for (lVar30 = **(longlong **)pbVar17; lVar30 != lVar2; lVar30 = lVar30 + 0x30) {
        puVar12 = (undefined8 *)(lVar30 + 0x20);
        local_a0 = (longlong *)0x140292131;
        FUN_14029244e(unaff_RBX);
      }
    }
    uVar18 = SUB84(puVar12,0);
    if (uStack_78 != lStack_70) {
      unaff_RBX = &uStack_78;
      do {
        uStack_58 = *(undefined8 *)(lStack_70 + -0x10);
        uStack_50 = *(longlong **)(lStack_70 + -8);
        *(undefined1 *)(lStack_70 + -0x10) = 0;
        *(undefined8 *)(lStack_70 + -8) = 0;
        local_a0 = (longlong *)0x140291fe1;
        FUN_14029143e(lStack_70 + -0x10);
        lStack_70 = lStack_70 + -0x10;
        if ((char)uStack_58 == '\x01') {
          lVar2 = uStack_50[1];
          for (lVar30 = *uStack_50; plVar10 = uStack_50, lVar30 != lVar2; lVar30 = lVar30 + 0x30) {
            puVar12 = (undefined8 *)(lVar30 + 0x20);
            local_a0 = (longlong *)0x14029206a;
            FUN_14029244e(unaff_RBX);
          }
          lVar30 = *uStack_50;
          lVar2 = uStack_50[1];
          if (lVar30 != lVar2) {
            do {
              local_a0 = (longlong *)0x14029208c;
              FUN_140292700(lVar30);
              lVar30 = lVar30 + 0x30;
            } while (lVar30 != lVar2);
            plVar10[1] = *plVar10;
          }
        }
        else if ((char)uStack_58 == '\x02') {
          puVar29 = (undefined8 *)*uStack_50;
          puVar28 = (undefined8 *)uStack_50[1];
          if (puVar29 != puVar28) {
            do {
              local_a0 = (longlong *)0x140292015;
              puVar12 = puVar29;
              FUN_14029244e(unaff_RBX);
              puVar29 = puVar29 + 2;
            } while (puVar29 != puVar28);
            puVar29 = (undefined8 *)*uStack_50;
            puVar28 = (undefined8 *)uStack_50[1];
          }
          plVar10 = uStack_50;
          if (puVar29 != puVar28) {
            do {
              local_a0 = (longlong *)0x140292039;
              FUN_14029143e(puVar29);
              puVar29 = puVar29 + 2;
            } while (puVar29 != puVar28);
            plVar10[1] = *plVar10;
          }
        }
        local_a0 = (longlong *)0x1402920a7;
        FUN_14029143e(&uStack_58);
        uVar18 = SUB84(puVar12,0);
      } while (uStack_78 != lStack_70);
    }
    local_a0 = (longlong *)0x1402920be;
    FUN_140292776(&uStack_78);
  }
  plVar10 = (longlong *)(ulonglong)(bVar1 - 1);
  if (7 < bVar1 - 1) {
    return plVar10;
  }
  piVar11 = (int *)((longlong)&switchD_1402920dc::caseD_0 +
                   (longlong)(int)(&switchD_1402920dc::caseD_0)[(longlong)plVar10]);
  cVar3 = (char)piVar11;
  uVar14 = (undefined7)((ulonglong)piVar11 >> 8);
  uVar5 = (uint)&local_48;
  switch(plVar10) {
  default:
    *(char *)piVar11 = (char)*piVar11 + cVar3;
    *(char *)piVar11 = (char)*piVar11 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (longlong *)0x1:
    *(char *)piVar11 = (char)*piVar11 + cVar3;
  case (longlong *)0x7:
    *(char *)piVar11 = (char)*piVar11 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (longlong *)0x3:
    cVar3 = cVar3 + (char)*piVar11;
    pcVar13 = (char *)CONCAT71(uVar14,cVar3);
    *pcVar13 = *pcVar13 + cVar3;
    uVar5 = (int)(int *)CONCAT71(uVar14,DAT_30002bb470002bb4) -
            *(int *)CONCAT71(uVar14,DAT_30002bb470002bb4);
    pcVar13 = (char *)(ulonglong)uVar5;
    cVar3 = (char)uVar5;
    *pcVar13 = *pcVar13 + cVar3;
    *pcVar13 = *pcVar13 + cVar3;
    *pcVar13 = *pcVar13 + cVar3;
    *pcVar13 = *pcVar13 + cVar3;
    *pcVar13 = *pcVar13 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (longlong *)0x4:
    *piVar11 = *piVar11 + (uint)piVar11;
    bVar1 = *pbVar17;
    piVar11 = (int *)(CONCAT71(uVar14,bVar1) & 0xffffffffffffff18);
    *piVar11 = *piVar11 + (int)piVar11;
    pcVar13 = (char *)(CONCAT71(uVar14,bVar1) & 0xffffffffffffff10);
    *pcVar13 = *pcVar13 + (char)pcVar13;
    auVar35._4_4_ = unaff_retaddr;
    auVar35._0_4_ = fVar41;
    auVar35._8_4_ = uVar6;
    auVar35._12_4_ = 0;
    auVar40._4_4_ = in_XMM4_Db;
    auVar40._0_4_ = in_XMM4_Da;
    auVar40._8_4_ = in_XMM4_Db;
    auVar40._12_4_ = unaff_EBP;
    auVar39._8_8_ = auVar40._8_8_;
    auVar39._4_4_ = fVar33;
    auVar39._0_4_ = in_XMM4_Da;
    auVar36 = divps(auVar35,auVar39);
    fVar32 = auVar36._0_4_;
    fVar37 = auVar36._4_4_;
    auVar36._4_4_ = -(uint)(fVar32 < _DAT_150a125ba);
    auVar36._0_4_ = -(uint)(fVar32 < _DAT_150a125ba);
    auVar36._8_4_ = -(uint)(fVar37 < 0.0);
    auVar36._12_4_ = -(uint)(fVar37 < 0.0);
    uVar7 = movmskpd((int)pcVar13,auVar36);
    fVar38 = 0.0;
    if (((uVar7 & 2) == 0) && (fVar38 = in_XMM5_Da, fVar37 <= in_XMM5_Da)) {
      fVar38 = fVar37;
    }
    iVar8 = local_40 + 8;
    local_80 = in_XMM4_Da - fVar41;
    fVar41 = (fVar38 * local_80) / in_XMM4_Da;
    if (((local_84 < in_XMM5_Da) || (in_stack_000000a0._7_1_ == '\0')) || ((uVar7 & 1) == 0))
    goto LAB_140787473;
    fVar37 = (*(float *)(param_1 + (ulonglong)uStack_38 * 4 + 0xed) -
             *(float *)(&stack0x000000b8 + (ulonglong)uStack_38 * 4)) / in_XMM4_Da;
    fVar38 = in_XMM5_Da;
    if (fVar37 <= in_XMM5_Da) {
      fVar38 = fVar37;
    }
    fVar38 = (float)(~-(uint)(fVar37 < 0.0) & (uint)fVar38);
    uVar15 = (ushort)(fVar32 + fVar41 < fVar38);
    if (fVar38 < fVar41) {
      uVar15 = 0;
    }
    if (param_1[0x153d] == 0) {
      uVar4 = *(ushort *)(param_1 + 0x25d3);
    }
    else {
      uVar4 = 0;
      if ((param_1[0x8a] != 0) && (uVar4 = 0, param_1[0x10e] == 0)) {
        uVar4 = uVar15;
      }
      *(ushort *)(param_1 + 0x25d3) = uVar4;
      fVar37 = 0.0;
      if ((uVar15 == 0) && (param_1[0x10e] == 0)) {
        fVar37 = _DAT_150a3ffdc * fVar32 + (fVar38 - fVar41);
      }
      *(float *)(param_1 + 0x25d5) = fVar37;
    }
    if (uVar4 == 0) {
      fVar38 = (fVar32 * _DAT_150a40080 + (fVar38 - *(float *)(param_1 + 0x25d5))) /
               (in_XMM5_Da - fVar32);
      fVar41 = in_XMM5_Da;
      if (fVar38 <= in_XMM5_Da) {
        fVar41 = fVar38;
      }
      local_68 = CONCAT26(in_FPUControlWord,(undefined6)local_68) | 0xc00000000000000;
      uStack_50 = (longlong *)
                  (longlong)ROUND((float)(~-(uint)(fVar38 < 0.0) & (uint)fVar41) * fVar33);
      *(longlong **)(ulonglong)local_34 = uStack_50;
      local_60 = in_XMM4_Da;
      local_a0 = uStack_50;
    }
    else {
      uStack_78 = CONCAT44(in_XMM4_Dd,in_XMM4_Dc);
      local_98 = 0;
      local_a0 = (longlong *)0x100000000;
      puStack_a8 = (undefined4 *)0x1407872cb;
      local_2c = uVar18;
      cVar3 = FUN_14075bdbe();
      if (cVar3 == '\0') {
        uVar6 = *(undefined4 *)(ulonglong)local_34;
        uVar18 = ((undefined4 *)(ulonglong)local_34)[1];
      }
      else {
        local_a0 = *(longlong **)(ulonglong)local_34;
        in_XMM5_Da = _DAT_150a127c6;
        if (uVar15 != *(ushort *)(param_1 + 0x25d3)) goto LAB_140787425;
        if ((short)*(ushort *)(param_1 + 0x25d3) < 1) {
          param_6 = (float)((uint)param_6 ^ _DAT_150a1692c);
        }
        local_68 = CONCAT26(local_68._6_2_,CONCAT24(in_FPUControlWord,(undefined4)local_68)) |
                   0xc0000000000;
        local_48 = (longlong)ROUND(param_6);
        local_a0 = (longlong *)(local_48 + (longlong)local_a0);
        uVar18 = (undefined4)((ulonglong)local_a0 >> 0x20);
        local_8c = local_2c;
        local_90 = uStack_28;
        local_94 = 0;
        local_98 = 0;
        puStack_a8 = (undefined4 *)0x140787403;
        uVar6 = FUN_1407876dd();
        ((undefined4 *)(ulonglong)local_34)[1] = uVar18;
        *(undefined4 *)(ulonglong)local_34 = uVar6;
      }
      in_XMM5_Da = _DAT_150a12848;
      local_a0 = (longlong *)CONCAT44(uVar18,uVar6);
    }
LAB_140787425:
    fVar33 = (float)(longlong)local_a0 / fVar33;
    if (fVar33 <= in_XMM5_Da) {
      in_XMM5_Da = fVar33;
    }
    fVar41 = (local_80 * (float)(~-(uint)(fVar33 < 0.0) & (uint)in_XMM5_Da)) / local_60;
LAB_140787473:
    local_80 = fVar41;
    local_a0 = (longlong *)0x3f8000000000000e;
    puStack_a8 = (undefined4 *)0x140787487;
    uVar6 = FUN_140754a09();
    iVar16 = 0x11;
    if (in_stack_000000a0._7_1_ == '\0') {
      iVar16 = in_stack_000000a0._6_1_ + 0xf;
    }
    local_a0 = (longlong *)CONCAT44(local_84,iVar16);
    puStack_a8 = (undefined4 *)0x1407874b2;
    local_60 = (float)FUN_140754a09();
    local_94 = *(undefined4 *)((ulonglong)param_8 + 0x88);
    local_90 = uStack_20;
    local_a0 = (longlong *)CONCAT44(iVar8,local_40);
    puStack_a8 = (undefined4 *)0x1407874f2;
    local_98 = uVar6;
    FUN_1407e372a(*(undefined4 *)((ulonglong)param_8 + 0x2e8));
    puVar20 = (undefined4 *)(ulonglong)((int)&local_a0 - 0x14);
    if (uStack_38 == 0) {
      puVar20[2] = puVar20[8];
      puVar20[1] = puVar20[0x30];
      *puVar20 = puVar20[0x2c];
      *(undefined8 *)(puVar20 + -2) = 0x1407875e1;
      FUN_140742235();
      puVar20[0x20] = (float)in_ST0;
      puVar20[0x18] = (float)puVar20[0x18] + (float)puVar20[0x20];
      puVar20[0x19] = puVar20[0x19];
      puVar20[0x1a] = puVar20[0x1a];
      puVar20[0x1b] = puVar20[0x1b];
      puVar20[2] = puVar20[8];
      puVar20[1] = puVar20[0x30];
      *puVar20 = puVar20[0x2c];
      *(undefined8 *)(puVar20 + -2) = 0x140787627;
      FUN_140742235();
      uVar42 = puVar20[0x18];
      uVar6 = puVar20[0x2d];
      uVar18 = puVar20[0x31];
      puVar20[0x1f] = (float)in_ST1;
      uVar34 = puVar20[0x1f];
    }
    else {
      uVar6 = puVar20[0x31];
      puVar20[0x40] = uVar6;
      puVar20[0x41] = uVar6;
      puVar20[0x42] = uVar6;
      puVar20[0x43] = uVar6;
      uVar18 = puVar20[0x2d];
      puVar20[0x34] = uVar18;
      puVar20[0x35] = uVar18;
      puVar20[0x36] = uVar18;
      puVar20[0x37] = uVar18;
      puVar20[2] = puVar20[8];
      puVar20[1] = uVar6;
      *puVar20 = uVar18;
      *(undefined8 *)(puVar20 + -2) = 0x140787543;
      FUN_140742235();
      puVar20[0x22] = (float)in_ST0;
      puVar20[7] = (float)puVar20[0x18] + (float)puVar20[0x22];
      puVar20[2] = puVar20[8];
      puVar20[1] = puVar20[0x40];
      *puVar20 = puVar20[0x34];
      *(undefined8 *)(puVar20 + -2) = 0x14078758a;
      FUN_140742235();
      puVar20[0x21] = (float)in_ST1;
      uVar34 = puVar20[0x2c];
      uVar6 = puVar20[0x21];
      uVar42 = puVar20[0x30];
      uVar18 = puVar20[7];
    }
    puVar27 = (undefined4 *)((ulonglong)(puVar20 + 0x4f) & 0xffffffff);
    puVar27[-2] = uVar34;
    puVar27[-1] = uVar6;
    *puVar27 = uVar42;
    puVar27[1] = uVar18;
    uVar6 = *(undefined4 *)((ulonglong)(uint)puVar20[0x38] + 0x2e8);
    puVar20[3] = *(undefined4 *)(param_1 + 0xd51);
    puVar20[2] = puVar20[0x10];
    puVar20[1] = (int)(puVar20 + 0x4f);
    *puVar20 = (int)(puVar20 + 0x4d);
    puVar20[4] = 0;
    *(undefined8 *)(puVar20 + -2) = 0x1407876a6;
    FUN_1407e372a(uVar6);
    uVar21 = (ulonglong)((int)&local_a0 - 0x28);
    if (_DAT_150b0fad9 == (*(uint *)(uVar21 + 0x168) ^ uVar5)) {
      return (longlong *)
             (CONCAT71((int7)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                       CONCAT11((char)((ulonglong)unaff_RBX >> 8) + (char)unaff_RBX,
                                                (char)unaff_RBX)) >> 8),in_stack_000000a0._7_1_) &
             0xffffffff);
    }
    uVar7 = *(uint *)(uVar21 + 0x168);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar21 - 8) = &UNK_1407876bc;
    FUN_1408802b0(uVar7 ^ uVar5);
  case (longlong *)0x6:
    break;
  }
  *(undefined4 *)unaff_RBX = *(undefined4 *)unaff_RBX;
  uVar7 = (uint)piVar11 & 0x404cbd28;
  if (((ulonglong)piVar11 & 0x404cbd28) == 0) {
    puVar25 = (undefined4 *)0x0;
    puVar27 = &local_98;
  }
  else if (uVar7 < 0x401) {
    local_a0 = (longlong *)0x1408ce11f;
    FUN_1408aff20();
    puVar25 = (undefined4 *)((ulonglong)&local_98 & 0xffffffff);
    uVar7 = (uint)&local_98;
    puVar27 = &local_98;
    if (uVar7 != 0) {
      *puVar25 = 0xcccc;
LAB_1408ce148:
      puVar25 = (undefined4 *)(ulonglong)(uVar7 + 8);
      puVar27 = &local_98;
      if (uVar7 + 8 != 0) {
        local_a0 = uStack_50;
        uStack_b8 = CONCAT44(uStack_30,local_34);
        uStack_c0 = 1;
        puStack_c8 = unaff_RBX;
        uStack_b0 = uVar26;
        puStack_a8 = puVar25;
        iVar8 = FUN_1408cc091();
        puVar22 = (undefined1 *)(ulonglong)((int)&puStack_c8 + 0x18);
        puVar27 = (undefined4 *)puVar22;
        if (iVar8 != 0) {
          uVar19 = (ulonglong)uStack_50 & 0xffffffff;
          *(undefined8 *)(puVar22 + -8) = 0;
          *(undefined8 *)(puVar22 + -0x10) = 0;
          *(undefined8 *)(puVar22 + -0x18) = 0;
          *(undefined8 *)(puVar22 + -0x20) = 0;
          *(undefined8 *)(puVar22 + -0x28) = 0;
          *(ulonglong *)(puVar22 + -0x30) = uVar19;
          *(undefined4 **)(puVar22 + -0x38) = puVar25;
          *(ulonglong *)(puVar22 + -0x40) = CONCAT44(local_34,uStack_38);
          puVar23 = puVar22 + -0x48;
          puVar24 = puVar22 + -0x48;
          *(ulonglong *)(puVar22 + -0x48) = CONCAT44(uStack_38,local_3c);
          *(undefined8 *)(puVar22 + -0x50) = 0x1408ce185;
          uVar7 = FUN_1408ccc06();
          puVar27 = (undefined4 *)(puVar22 + -0x48);
          if (uVar7 != 0) {
            if ((uStack_38 & 0x400) == 0) {
              uVar9 = uVar7 * 2 + 8;
              uVar9 = -(uint)(uVar7 * 2 < uVar9) & uVar9;
              if (uVar9 == 0) {
                puVar27 = (undefined4 *)0x0;
              }
              else if (uVar9 < 0x401) {
                *(undefined8 *)(puVar22 + -0x50) = 0x1408ce1e8;
                FUN_1408aff20();
                puVar27 = (undefined4 *)((ulonglong)(puVar22 + -0x48) & 0xffffffff);
                uVar9 = (uint)(puVar22 + -0x48);
                puVar24 = puVar22 + -0x48;
                if (uVar9 != 0) {
                  *puVar27 = 0xcccc;
LAB_1408ce209:
                  puVar27 = (undefined4 *)(ulonglong)(uVar9 + 8);
                  puVar24 = puVar22 + -0x48;
                  if (uVar9 + 8 != 0) {
                    *(undefined8 *)(puVar22 + -0x50) = 0;
                    *(undefined8 *)(puVar22 + -0x58) = 0;
                    *(undefined8 *)(puVar22 + -0x60) = 0;
                    *(ulonglong *)(puVar22 + -0x68) = (ulonglong)uVar7;
                    *(undefined4 **)(puVar22 + -0x70) = puVar27;
                    *(longlong **)(puVar22 + -0x78) = uStack_50;
                    *(undefined4 **)(puVar22 + -0x80) = puVar25;
                    *(ulonglong *)(puVar22 + -0x88) = CONCAT44(local_34,uStack_38);
                    *(ulonglong *)(puVar22 + -0x90) = CONCAT44(uStack_38,local_3c);
                    *(undefined8 *)(puVar22 + -0x98) = 0x1408ce226;
                    iVar8 = FUN_1408ccc06();
                    puVar24 = puVar22 + -0x90;
                    if (iVar8 != 0) {
                      *(undefined8 *)(puVar22 + -0x98) = 0;
                      *(undefined8 *)(puVar22 + -0xa0) = 0;
                      if (uStack_28 == 0) {
                        *(undefined8 *)(puVar22 + -0xa8) = 0;
                        *(undefined8 *)(puVar22 + -0xb0) = 0;
                      }
                      else {
                        *(ulonglong *)(puVar22 + -0xa8) = CONCAT44(local_24,uStack_28);
                        *(ulonglong *)(puVar22 + -0xb0) = CONCAT44(uStack_28,local_2c);
                      }
                      *(ulonglong *)(puVar22 + -0xb8) = (ulonglong)uVar7;
                      *(undefined4 **)(puVar22 + -0xc0) = puVar27;
                      *(undefined8 *)(puVar22 + -200) = 0;
                      *(ulonglong *)(puVar22 + -0xd0) = CONCAT44(uStack_20,local_24);
                      *(undefined8 *)(puVar22 + -0xd8) = 0x1408ce240;
                      iVar8 = FUN_1408cc153();
                      puVar23 = (undefined1 *)(ulonglong)((int)(puVar22 + -0xd0) + 0x20);
                      puVar24 = puVar23;
                      if (iVar8 != 0) {
                        *(undefined4 **)(puVar23 + -8) = puVar27;
                        *(undefined8 *)(puVar23 + -0x10) = 0x1408ce24f;
                        FUN_14088cbe0();
                        goto LAB_1408ce269;
                      }
                    }
                  }
                }
              }
              else {
                *(ulonglong *)(puVar22 + -0x50) = (ulonglong)uVar9;
                *(undefined8 *)(puVar22 + -0x58) = 0x1408ce1fc;
                uVar9 = FUN_1408cc040();
                puVar27 = (undefined4 *)(ulonglong)uVar9;
                puVar24 = puVar22 + -0x48;
                if (uVar9 != 0) {
                  *puVar27 = 0xdddd;
                  goto LAB_1408ce209;
                }
              }
              *(undefined4 **)(puVar24 + -8) = puVar27;
              *(undefined8 *)(puVar24 + -0x10) = 0x1408ce262;
              FUN_14088cbe0();
              puVar27 = (undefined4 *)puVar24;
            }
            else {
              if (uStack_28 == 0) goto LAB_1408ce269;
              puVar27 = (undefined4 *)(puVar22 + -0x48);
              if ((int)uVar7 <= (int)uStack_28) {
                *(undefined8 *)(puVar22 + -0x50) = 0;
                *(undefined8 *)(puVar22 + -0x58) = 0;
                *(undefined8 *)(puVar22 + -0x60) = 0;
                *(ulonglong *)(puVar22 + -0x68) = (ulonglong)uStack_28;
                *(ulonglong *)(puVar22 + -0x70) = CONCAT44(uStack_28,local_2c);
                *(ulonglong *)(puVar22 + -0x78) = uVar19;
                *(undefined4 **)(puVar22 + -0x80) = puVar25;
                *(ulonglong *)(puVar22 + -0x88) = CONCAT44(local_34,uStack_38);
                puVar23 = puVar22 + -0x90;
                *(ulonglong *)(puVar22 + -0x90) = CONCAT44(uStack_38,local_3c);
                *(undefined8 *)(puVar22 + -0x98) = 0x1408ce1c2;
                iVar8 = FUN_1408ccc06();
                puVar27 = (undefined4 *)(puVar22 + -0x90);
                if (iVar8 != 0) goto LAB_1408ce269;
              }
            }
          }
        }
      }
    }
  }
  else {
    puStack_a8 = (undefined4 *)0x1408ce137;
    local_a0 = (longlong *)(ulonglong)uVar7;
    uVar7 = FUN_1408cc040();
    puVar25 = (undefined4 *)(ulonglong)uVar7;
    puVar27 = &local_98;
    if (uVar7 != 0) {
      *puVar25 = 0xdddd;
      goto LAB_1408ce148;
    }
  }
  puVar23 = (undefined1 *)puVar27;
LAB_1408ce269:
  *(undefined4 **)(puVar23 + -8) = puVar25;
  *(undefined8 *)(puVar23 + -0x10) = 0x1408ce26f;
  FUN_14088cbe0();
                    /* WARNING: Subroutine does not return */
  *(undefined **)((ulonglong)(uVar5 - 0x14) + 0x10) = &UNK_1408ce282;
  FUN_1408802b0(uStack_50._4_4_ ^ uVar5);
}

