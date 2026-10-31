/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007dbdb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007dbdb(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char *local_68;
  undefined8 local_60;
  code *pcStack_58;
  undefined8 local_50;
  code *pcStack_48;
  code *local_40;
  code *pcStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  puVar5 = DAT_140f2a910;
  local_30 = (code *)0x0;
  uStack_28 = 0;
  local_40 = (code *)0x0;
  pcStack_38 = (code *)0x0;
  local_50 = 0;
  pcStack_48 = (code *)0x0;
  local_60 = 0;
  pcStack_58 = (code *)0x0;
  local_68 = "Window";
  uVar6 = FUN_140077ff5("Window",0,0);
  local_60 = CONCAT44(local_60._4_4_,uVar6);
  pcStack_58 = FUN_14007e9f7;
  pcStack_48 = FUN_14007ea59;
  local_40 = FUN_14007eab1;
  pcStack_38 = FUN_14007ec79;
  local_30 = FUN_14007ecdb;
  FUN_14007efae(&local_68);
  FUN_140114f97();
  FUN_14007f06b(&DAT_140210500,0xd);
  *(code **)(puVar5 + 0xc48) = FUN_14007f09a;
  *(code **)(puVar5 + 0xc50) = FUN_14007f207;
  *(code **)(puVar5 + 0xc60) = FUN_14007f2cd;
  *(code **)(puVar5 + 0xc70) = FUN_14007f3d9;
  puVar7 = (undefined8 *)FUN_140077ab4(0x168);
  FUN_14007f4ba(puVar7);
  *puVar7 = 0x411111111;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  iVar11 = *(int *)(puVar5 + 0x2178);
  if (iVar11 == *(int *)(puVar5 + 0x217c)) {
    if (iVar11 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar11 / 2 + iVar11;
    }
    iVar12 = iVar11 + 1;
    if (iVar11 + 1 < iVar10) {
      iVar12 = iVar10;
    }
    lVar8 = FUN_140077ab4((longlong)iVar12 << 3);
    if (*(longlong *)(puVar5 + 0x2180) != 0) {
      FUN_1401c5180(lVar8,*(longlong *)(puVar5 + 0x2180),(longlong)*(int *)(puVar5 + 0x2178) << 3);
      FUN_140077b90(*(undefined8 *)(puVar5 + 0x2180));
    }
    *(longlong *)(puVar5 + 0x2180) = lVar8;
    *(int *)(puVar5 + 0x217c) = iVar12;
    iVar11 = *(int *)(puVar5 + 0x2178);
  }
  else {
    lVar8 = *(longlong *)(puVar5 + 0x2180);
  }
  *(undefined8 **)(lVar8 + (longlong)iVar11 * 8) = puVar7;
  *(int *)(puVar5 + 0x2178) = *(int *)(puVar5 + 0x2178) + 1;
  iVar11 = *(int *)(puVar5 + 0x2cdc);
  if (iVar11 < 0xc01) {
    if (iVar11 == 0) {
      iVar10 = 0xc01;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
      iVar10 = 0xc01;
      if (0xc01 < iVar11) {
        iVar10 = iVar11;
      }
    }
    uVar9 = FUN_140077ab4(iVar10);
    if (*(longlong *)(puVar5 + 0x2ce0) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(puVar5 + 0x2ce0),(longlong)*(int *)(puVar5 + 0x2cd8));
      FUN_140077b90(*(undefined8 *)(puVar5 + 0x2ce0));
    }
    *(undefined8 *)(puVar5 + 0x2ce0) = uVar9;
    *(int *)(puVar5 + 0x2cdc) = iVar10;
  }
  lVar8 = (longlong)*(int *)(puVar5 + 0x2cd8);
  if (lVar8 < 0xc01) {
    do {
      *(undefined1 *)(*(longlong *)(puVar5 + 0x2ce0) + lVar8) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xc01);
  }
  *(undefined4 *)(puVar5 + 0x2cd8) = 0xc01;
  *(int *)(puVar5 + 0x21e8) = *(int *)(puVar5 + 0x21e8) + 1;
  uVar9 = **(undefined8 **)(puVar5 + 0x2180);
  iVar11 = *(int *)(puVar5 + 0xd98);
  if (iVar11 == *(int *)(puVar5 + 0xd9c)) {
    if (iVar11 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar11 / 2 + iVar11;
    }
    iVar12 = iVar11 + 1;
    if (iVar11 + 1 < iVar10) {
      iVar12 = iVar10;
    }
    lVar8 = FUN_140077ab4((longlong)iVar12 << 3);
    if (*(longlong *)(puVar5 + 0xda0) != 0) {
      FUN_1401c5180(lVar8,*(longlong *)(puVar5 + 0xda0),(longlong)*(int *)(puVar5 + 0xd98) << 3);
      FUN_140077b90(*(undefined8 *)(puVar5 + 0xda0));
    }
    *(longlong *)(puVar5 + 0xda0) = lVar8;
    *(int *)(puVar5 + 0xd9c) = iVar12;
    iVar11 = *(int *)(puVar5 + 0xd98);
  }
  else {
    lVar8 = *(longlong *)(puVar5 + 0xda0);
  }
  *(undefined8 *)(lVar8 + (longlong)iVar11 * 8) = uVar9;
  *(int *)(puVar5 + 0xd98) = *(int *)(puVar5 + 0xd98) + 1;
  auVar4 = _DAT_140211440;
  auVar3 = _DAT_140211430;
  auVar2 = _DAT_140211420;
  auVar1 = _DAT_140211410;
  iVar11 = 0x200;
  do {
    if (iVar11 - 0x218U < 0x24) {
LAB_14007df2c:
      *(uint *)(puVar5 + (longlong)(iVar11 + -0x200 >> 5) * 4 + 0x16e0) =
           *(uint *)(puVar5 + (longlong)(iVar11 + -0x200 >> 5) * 4 + 0x16e0) |
           1 << ((byte)iVar11 & 0x1f);
    }
    else {
      auVar13._4_4_ = iVar11;
      auVar13._0_4_ = iVar11;
      auVar13._8_4_ = iVar11;
      auVar13._12_4_ = iVar11;
      auVar14 = auVar13 & auVar1;
      auVar15._0_4_ = -(uint)(auVar14._0_4_ == auVar4._0_4_);
      auVar15._4_4_ = -(uint)(auVar14._4_4_ == auVar4._4_4_);
      auVar15._8_4_ = -(uint)(auVar14._8_4_ == auVar4._8_4_);
      auVar15._12_4_ = -(uint)(auVar14._12_4_ == auVar4._12_4_);
      auVar13 = auVar13 & auVar2;
      auVar14._0_4_ = -(uint)(auVar13._0_4_ == auVar3._0_4_);
      auVar14._4_4_ = -(uint)(auVar13._4_4_ == auVar3._4_4_);
      auVar14._8_4_ = -(uint)(auVar13._8_4_ == auVar3._8_4_);
      auVar14._12_4_ = -(uint)(auVar13._12_4_ == auVar3._12_4_);
      auVar13 = packssdw(auVar15,auVar14);
      if ((iVar11 - 0x25dU < 2 || iVar11 - 0x264U < 10) ||
          ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0)
                       || (SUB161(auVar13 >> 0x17,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x1f,0) & 1) != 0) || (SUB161(auVar13 >> 0x27,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x2f,0) & 1) != 0) || (SUB161(auVar13 >> 0x37,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x3f,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x47,0) & 1) != 0) || (SUB161(auVar13 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x57,0) & 1) != 0) || (SUB161(auVar13 >> 0x5f,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x67,0) & 1) != 0) || (SUB161(auVar13 >> 0x6f,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x77,0) & 1) != 0) || auVar13[0xf] < '\0')) goto LAB_14007df2c;
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 0x29b) {
      FUN_14007f610(puVar5);
      *(undefined1 **)(puVar5 + 0x13a0) = puVar5;
      FUN_14007f73e(*(undefined8 *)(puVar5 + 0x68));
      *puVar5 = 1;
      return;
    }
  } while( true );
}

