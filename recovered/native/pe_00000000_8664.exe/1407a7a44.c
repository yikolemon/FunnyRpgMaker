/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a7a44 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407a7a44(byte param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  int iVar28;
  uint uVar29;
  longlong unaff_RSI;
  ulonglong uVar30;
  
  uVar21 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  puVar24 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xf0);
  uVar4 = *(uint *)(uVar21 + 8);
  pcVar18 = (char *)((ulonglong)_DAT_8489e83110388d00 & 0xffffffffffffffe8);
  *pcVar18 = *pcVar18 + (char)pcVar18;
  pbVar1 = (byte *)((ulonglong)uVar4 + 0x39d74c35);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  pcVar18[0xf017b7b] = pcVar18[0xf017b7b] + (char)pcVar18 + CARRY1(bVar3,param_1);
  *(undefined8 *)(puVar24 + 0xe0) = *(undefined8 *)(unaff_RSI + 0x1e78);
  uVar13 = *(undefined8 *)(unaff_RSI + 0x1e70);
  *(undefined8 *)(puVar24 + 0xd0) = *(undefined8 *)(unaff_RSI + 0x1e68);
  *(undefined8 *)(puVar24 + 0xd8) = uVar13;
  uVar14 = *(undefined4 *)(unaff_RSI + 0x1e48);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x1e4c);
  uVar8 = *(undefined4 *)(unaff_RSI + 0x1e50);
  uVar9 = *(undefined4 *)(unaff_RSI + 0x1e54);
  uVar10 = *(undefined4 *)(unaff_RSI + 0x1e5c);
  uVar11 = *(undefined4 *)(unaff_RSI + 0x1e60);
  uVar12 = *(undefined4 *)(unaff_RSI + 0x1e64);
  *(undefined4 *)(puVar24 + 0xc0) = *(undefined4 *)(unaff_RSI + 0x1e58);
  *(undefined4 *)(puVar24 + 0xc4) = uVar10;
  *(undefined4 *)(puVar24 + 200) = uVar11;
  *(undefined4 *)(puVar24 + 0xcc) = uVar12;
  *(undefined4 *)(puVar24 + 0xb0) = uVar14;
  *(undefined4 *)(puVar24 + 0xb4) = uVar5;
  *(undefined4 *)(puVar24 + 0xb8) = uVar8;
  *(undefined4 *)(puVar24 + 0xbc) = uVar9;
  *(undefined8 *)(puVar24 + -8) = 0x1407a7ab9;
  FUN_1407a66f9((ulonglong)uVar4);
  *(undefined8 *)(unaff_RSI + 0x1e78) = *(undefined8 *)(puVar24 + 0xe0);
  uVar13 = *(undefined8 *)(puVar24 + 0xd8);
  *(undefined8 *)(unaff_RSI + 0x1e68) = *(undefined8 *)(puVar24 + 0xd0);
  *(undefined8 *)(unaff_RSI + 0x1e70) = uVar13;
  uVar14 = *(undefined4 *)(puVar24 + 0xb0);
  uVar5 = *(undefined4 *)(puVar24 + 0xb4);
  uVar8 = *(undefined4 *)(puVar24 + 0xb8);
  uVar9 = *(undefined4 *)(puVar24 + 0xbc);
  uVar10 = *(undefined4 *)(puVar24 + 0xc4);
  uVar11 = *(undefined4 *)(puVar24 + 200);
  uVar12 = *(undefined4 *)(puVar24 + 0xcc);
  *(undefined4 *)(unaff_RSI + 0x1e58) = *(undefined4 *)(puVar24 + 0xc0);
  *(undefined4 *)(unaff_RSI + 0x1e5c) = uVar10;
  *(undefined4 *)(unaff_RSI + 0x1e60) = uVar11;
  *(undefined4 *)(unaff_RSI + 0x1e64) = uVar12;
  *(undefined4 *)(unaff_RSI + 0x1e48) = uVar14;
  *(undefined4 *)(unaff_RSI + 0x1e4c) = uVar5;
  *(undefined4 *)(unaff_RSI + 0x1e50) = uVar8;
  *(undefined4 *)(unaff_RSI + 0x1e54) = uVar9;
  uVar16 = *(uint *)(unaff_RSI + 0x14cc);
  if (*(char *)((ulonglong)uVar16 + 0xfe) == '\0') {
    uVar14 = *(undefined4 *)(uVar21 + 0x18);
    uVar5 = *(undefined4 *)(uVar21 + 0xc);
    *(undefined8 *)(puVar24 + -8) = 0x1407a7b15;
    uVar14 = FUN_1407a7769(uVar5,uVar14);
    uVar6 = *(uint *)(uVar21 + 0x10);
    *(undefined4 *)(puVar24 + 0xc) = uVar14;
    if ((uVar6 == 0) || (*(char *)(ulonglong)uVar6 != '\0')) {
      *(int *)(puVar24 + 0x18) = (int)unaff_RSI;
      uVar29 = *(uint *)(uVar21 + 0x14);
      uVar7 = uVar29 | 0x100000;
      if ((uVar29 & 0x100000) != 0 || uVar6 != 0) {
        uVar7 = uVar29;
      }
      *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + 0xc);
      *(ulonglong *)(puVar24 + -0x10) = (ulonglong)uVar4;
      *(undefined8 *)(puVar24 + -0x18) = 0x1407a7b48;
      iVar15 = FUN_1407a7515();
      iVar17 = *(int *)(uVar21 + 0x10);
      puVar25 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x10) + 8);
      *(int *)(puVar25 + 0x24) = iVar15;
      *(uint *)(puVar25 + 0x28) = uVar16;
      uVar30 = (ulonglong)*(uint *)(uVar21 + 8);
      *(uint *)(puVar25 + 4) = uVar7;
      if (iVar15 == 0) {
        iVar17 = *(int *)(uVar30 + 4);
        if (iVar17 == *(int *)(uVar30 + 8)) {
          if (iVar17 == 0) {
            iVar15 = 8;
          }
          else {
            iVar15 = iVar17 / 2 + iVar17;
          }
          iVar28 = iVar17 + 1;
          if (iVar17 + 1 < iVar15) {
            iVar28 = iVar15;
          }
          *(ulonglong *)(puVar25 + -8) = (ulonglong)(uint)(iVar28 * 0x30);
          *(undefined8 *)(puVar25 + -0x10) = 0x1407a7bc5;
          uVar16 = FUN_1407520ca();
          puVar25 = (undefined1 *)(ulonglong)((int)(puVar25 + -8) + 4);
          uVar23 = (ulonglong)uVar16;
          uVar4 = *(uint *)(uVar30 + 0xc);
          if (uVar4 != 0) {
            *(ulonglong *)(puVar25 + -8) = (ulonglong)(uint)(*(int *)(uVar30 + 4) * 0x30);
            *(ulonglong *)(puVar25 + -0x10) = (ulonglong)uVar4;
            *(ulonglong *)(puVar25 + -0x18) = uVar23;
            *(undefined8 *)(puVar25 + -0x20) = 0x1407a7be2;
            FUN_1408b31a0();
            *(undefined8 *)((ulonglong)((int)(puVar25 + -0x18) + 0xc) - 8) =
                 *(undefined8 *)(uVar30 + 0xc);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((ulonglong)((int)(puVar25 + -0x18) + 0xc) - 0x10) = &UNK_1407a7bed;
            FUN_14075219b();
          }
          *(uint *)(uVar30 + 0xc) = uVar16;
          *(int *)(uVar30 + 8) = iVar28;
          iVar17 = *(int *)(uVar30 + 4);
        }
        else {
          uVar23 = (ulonglong)*(uint *)(uVar30 + 0xc);
        }
        uVar20 = (ulonglong)(uint)(iVar17 * 0x30);
        *(undefined4 *)(uVar23 + 8 + uVar20) = 0;
        *(undefined8 *)(uVar23 + uVar20) = 0;
        *(undefined8 *)(uVar23 + 0xc + param_3) = 0;
        *(undefined4 *)(uVar23 + 0x10 + uVar20) = 0;
        *(undefined8 *)(uVar23 + 0x14 + uVar20) = 0;
        uVar8 = uRam0000000150a61291;
        uVar5 = uRam0000000150a6128d;
        uVar14 = uRam0000000150a61289;
        puVar2 = (undefined4 *)(uVar23 + 0x1c + uVar20);
        *puVar2 = _DAT_150a61285;
        puVar2[1] = uVar14;
        puVar2[2] = uVar5;
        puVar2[3] = uVar8;
        *(undefined4 *)(uVar23 + 0x2c + uVar20) = 0;
        iVar17 = *(int *)(uVar30 + 4);
        uVar4 = *(uint *)(uVar30 + 0xc);
        *(int *)(uVar30 + 4) = iVar17 + 1;
        uVar16 = iVar17 * 0x30;
        *(undefined4 *)((ulonglong)uVar16 + (ulonglong)uVar4) = *(undefined4 *)(puVar25 + 0xc);
        iVar15 = uVar4 + uVar16;
        *(undefined1 *)(uVar30 + 0x7d) = 1;
        uVar7 = *(uint *)(puVar25 + 4);
        iVar17 = *(int *)(uVar21 + 0x10);
        uVar29 = *(uint *)(uVar21 + 0x14);
      }
      *(int *)(puVar25 + 0x10) = iVar15;
      *(short *)(uVar30 + 0x82) =
           (short)((uint)(*(int *)(puVar25 + 0x10) - *(int *)(uVar30 + 0xc)) >> 4) * -0x5555;
      bVar22 = iVar17 != 0 && (uVar29 >> 0x14 & 1) == 0;
      puVar25[0x23] = bVar22;
      *(ulonglong *)(puVar25 + -8) = (ulonglong)((byte)((byte)uVar7 | bVar22) & 1);
      *(undefined8 *)(puVar25 + -0x10) = *(undefined8 *)(uVar21 + 0xc);
      *(ulonglong *)(puVar25 + -0x18) = (ulonglong)(puVar25 + 0xa8) & 0xffffffff;
      *(undefined8 *)(puVar25 + -0x20) = 0x1407a7c9f;
      FUN_1407a8a2b();
      uVar21 = (ulonglong)*(uint *)(puVar25 + 4);
      uVar26 = (ulonglong)((int)(puVar25 + -0x18) + 0xc);
      *(undefined4 *)(uVar21 + 0x20) = 0xbf800000;
      if ((*(byte *)((ulonglong)*(uint *)(uVar26 + 0x18) + 0x1e48) & 1) == 0) {
        uVar14 = *(undefined4 *)(uVar26 + 0xa8);
      }
      else {
        uVar14 = *(undefined4 *)((ulonglong)*(uint *)(uVar26 + 0x18) + 0x1e60);
        *(undefined4 *)(uVar21 + 0x20) = uVar14;
        *(undefined4 *)(uVar26 + 0xa8) = uVar14;
      }
      uVar5 = *(undefined4 *)(uVar26 + 4);
      if (*(int *)(uVar26 + 0x24) == 0) {
        puVar27 = (undefined4 *)(ulonglong)((int)(puVar25 + -0x18) + 4);
        puVar27[1] = uVar14;
        *puVar27 = 0x3f800000;
        puVar27[4] = uVar14;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar27 + -2) = &UNK_1407a7d01;
        FUN_140755a9a(uVar14,uVar5);
      }
      *(undefined4 *)(uVar21 + 0x1c) = uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar19 = (undefined8 *)((longlong)puVar24 + 0xb0U & 0xffffffff);
    *puVar19 = 0;
    puVar19[1] = 0;
    *(undefined8 *)(puVar24 + -8) = 2;
    *(undefined8 *)(puVar24 + -0x10) = 0;
    *(undefined8 *)(puVar24 + -0x18) = *(undefined8 *)(puVar24 + 4);
    *(undefined8 **)(puVar24 + -0x20) = puVar19;
    *(undefined8 *)(puVar24 + -0x28) = 0x1407a7b9e;
    FUN_1407648a8();
    puVar24 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x20) + 0x10);
  }
  if (_DAT_150b3167e == (*(uint *)(puVar24 + 0xe8) ^ (uint)&stack0xfffffffffffffff8)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -8) = &UNK_1407a8998;
  FUN_1408802b0(*(uint *)(puVar24 + 0xe8) ^ (uint)&stack0xfffffffffffffff8);
}

