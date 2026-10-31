/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ffd71 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffd71(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined8 local_18;
  
  puVar17 = DAT_1039d74c;
  local_18 = 0;
  local_28 = 0;
  puStack_24 = (undefined1 *)0x0;
  puStack_20 = (undefined1 *)0x0;
  puStack_1c = (undefined1 *)0x0;
  local_34 = "Window";
  local_30 = FUN_100fa6c3("Window",0,0);
  local_2c = &LAB_10100d52;
  puStack_24 = &LAB_10100dab;
  puStack_20 = &LAB_10100dfe;
  puStack_1c = &LAB_10100f90;
  local_18 = CONCAT44(local_18._4_4_,&DAT_10100fdf);
  FUN_1010126d(&local_34);
  FUN_10167cf2();
  FUN_1010132a(&DAT_102b80c8,0xd);
  *(undefined1 **)(puVar17 + 0xc00) = &LAB_10101358;
  *(undefined1 **)(puVar17 + 0xc04) = &LAB_101014a4;
  *(undefined1 **)(puVar17 + 0xc0c) = &LAB_10101524;
  *(undefined1 **)(puVar17 + 0xc14) = &LAB_1010161e;
  puVar18 = (undefined4 *)FUN_100fa1fa(0x120);
  FUN_101016d2();
  *puVar18 = 0x11111111;
  puVar18[0x17] = 0;
  *(undefined1 *)(puVar18 + 0x15) = 1;
  puVar18[1] = 4;
  iVar21 = *(int *)(puVar17 + 0x1fe0);
  if (iVar21 == *(int *)(puVar17 + 0x1fe4)) {
    if (iVar21 == 0) {
      iVar20 = 8;
    }
    else {
      iVar20 = iVar21 / 2 + iVar21;
    }
    iVar23 = iVar21 + 1;
    if (iVar21 + 1 < iVar20) {
      iVar23 = iVar20;
    }
    iVar20 = FUN_100fa1fa(iVar23 * 4);
    if (*(int *)(puVar17 + 0x1fe8) != 0) {
      FUN_1025b2d0(iVar20,*(int *)(puVar17 + 0x1fe8),*(int *)(puVar17 + 0x1fe0) << 2);
      FUN_100fa2cb(*(undefined4 *)(puVar17 + 0x1fe8));
    }
    *(int *)(puVar17 + 0x1fe8) = iVar20;
    *(int *)(puVar17 + 0x1fe4) = iVar23;
    iVar21 = *(int *)(puVar17 + 0x1fe0);
  }
  else {
    iVar20 = *(int *)(puVar17 + 0x1fe8);
  }
  *(undefined4 **)(iVar20 + iVar21 * 4) = puVar18;
  *(int *)(puVar17 + 0x1fe0) = *(int *)(puVar17 + 0x1fe0) + 1;
  iVar21 = *(int *)(puVar17 + 0x29a4);
  if (iVar21 < 0xc01) {
    if (iVar21 == 0) {
      iVar20 = 0xc01;
    }
    else {
      iVar21 = iVar21 / 2 + iVar21;
      iVar20 = 0xc01;
      if (0xc01 < iVar21) {
        iVar20 = iVar21;
      }
    }
    uVar19 = FUN_100fa1fa(iVar20);
    if (*(int *)(puVar17 + 0x29a8) != 0) {
      FUN_1025b2d0(uVar19,*(int *)(puVar17 + 0x29a8),*(undefined4 *)(puVar17 + 0x29a0));
      FUN_100fa2cb(*(undefined4 *)(puVar17 + 0x29a8));
    }
    *(undefined4 *)(puVar17 + 0x29a8) = uVar19;
    *(int *)(puVar17 + 0x29a4) = iVar20;
  }
  iVar21 = *(int *)(puVar17 + 0x29a0);
  if (iVar21 < 0xc01) {
    do {
      *(undefined1 *)(*(int *)(puVar17 + 0x29a8) + iVar21) = 0;
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0xc01);
  }
  *(undefined4 *)(puVar17 + 0x29a0) = 0xc01;
  *(int *)(puVar17 + 0x2034) = *(int *)(puVar17 + 0x2034) + 1;
  uVar19 = **(undefined4 **)(puVar17 + 0x1fe8);
  iVar21 = *(int *)(puVar17 + 0xcb4);
  if (iVar21 == *(int *)(puVar17 + 0xcb8)) {
    if (iVar21 == 0) {
      iVar20 = 8;
    }
    else {
      iVar20 = iVar21 / 2 + iVar21;
    }
    iVar23 = iVar21 + 1;
    if (iVar21 + 1 < iVar20) {
      iVar23 = iVar20;
    }
    iVar20 = FUN_100fa1fa(iVar23 * 4);
    if (*(int *)(puVar17 + 0xcbc) != 0) {
      FUN_1025b2d0(iVar20,*(int *)(puVar17 + 0xcbc),*(int *)(puVar17 + 0xcb4) << 2);
      FUN_100fa2cb(*(undefined4 *)(puVar17 + 0xcbc));
    }
    *(int *)(puVar17 + 0xcbc) = iVar20;
    *(int *)(puVar17 + 0xcb8) = iVar23;
    iVar21 = *(int *)(puVar17 + 0xcb4);
  }
  else {
    iVar20 = *(int *)(puVar17 + 0xcbc);
  }
  *(undefined4 *)(iVar20 + iVar21 * 4) = uVar19;
  *(int *)(puVar17 + 0xcb4) = *(int *)(puVar17 + 0xcb4) + 1;
  uVar16 = _UNK_102b8b6c;
  uVar15 = _UNK_102b8b68;
  uVar14 = _UNK_102b8b64;
  uVar13 = _DAT_102b8b60;
  uVar12 = _UNK_102b8b5c;
  uVar11 = _UNK_102b8b58;
  uVar10 = _UNK_102b8b54;
  uVar9 = _DAT_102b8b50;
  uVar8 = _UNK_102b8b4c;
  uVar7 = _UNK_102b8b48;
  uVar6 = _UNK_102b8b44;
  uVar5 = _DAT_102b8b40;
  uVar4 = _UNK_102b8b3c;
  uVar3 = _UNK_102b8b38;
  uVar2 = _UNK_102b8b34;
  uVar1 = _DAT_102b8b30;
  uVar22 = 0x200;
  do {
    if ((uVar22 - 0x218 < 0x24) ||
       (auVar24._0_4_ = -(uint)((uVar22 & uVar1) == uVar13),
       auVar24._4_4_ = -(uint)((uVar22 & uVar2) == uVar14),
       auVar24._8_4_ = -(uint)((uVar22 & uVar3) == uVar15),
       auVar24._12_4_ = -(uint)((uVar22 & uVar4) == uVar16),
       auVar25._0_4_ = -(uint)((uVar22 & uVar5) == uVar9),
       auVar25._4_4_ = -(uint)((uVar22 & uVar6) == uVar10),
       auVar25._8_4_ = -(uint)((uVar22 & uVar7) == uVar11),
       auVar25._12_4_ = -(uint)((uVar22 & uVar8) == uVar12), auVar25 = packssdw(auVar24,auVar25),
       (uVar22 - 0x25d < 2 || uVar22 - 0x264 < 10) ||
       ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0'))) {
      *(uint *)(puVar17 + ((int)(uVar22 - 0x200) >> 5) * 4 + 0x1588) =
           *(uint *)(puVar17 + ((int)(uVar22 - 0x200) >> 5) * 4 + 0x1588) |
           1 << ((byte)uVar22 & 0x1f);
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x29b);
  FUN_10101812(puVar17);
  *(undefined1 **)(puVar17 + 0x1290) = puVar17;
  FUN_1010190f(*(undefined4 *)(puVar17 + 0x5c));
  *puVar17 = 1;
  return;
}

