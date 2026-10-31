/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078c4ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14078c4ea(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  bool bVar15;
  
  uVar9 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x30);
  uVar2 = *(uint *)(uVar9 + 0x44);
  *(undefined8 *)(uVar9 - 8) = *(undefined8 *)(uVar9 + 0x48);
  *(undefined8 *)(uVar9 - 0x10) = 0x14078c509;
  puVar7 = (uint *)FUN_14078bd99();
  uVar10 = (ulonglong)((int)(uVar9 - 8) + 4);
  puVar14 = (uint *)((ulonglong)puVar7 & 0xffffffff);
  uVar3 = *puVar7;
  *(ulonglong *)(uVar10 - 8) = (ulonglong)uVar3;
  *(undefined8 *)(uVar10 - 0x10) = *(undefined8 *)(uVar10 + 0x48);
  *(ulonglong *)(uVar10 - 0x18) = uVar10 + 0x24 & 0xffffffff;
  *(undefined8 *)(uVar10 - 0x20) = 0x14078c51f;
  FUN_1408b31a0();
  puVar11 = (undefined4 *)(ulonglong)((int)(uVar10 - 0x18) + 0xc);
  do {
    do {
      cVar1 = *(char *)(ulonglong)uVar2;
    } while (cVar1 == '\t');
  } while (cVar1 == ' ');
  if (cVar1 == '\0') {
    if (*(uint *)((longlong)puVar11 + 0x54) == 0) {
LAB_14078c5c5:
      bVar15 = false;
      goto LAB_14078c613;
    }
    *(ulonglong *)((longlong)puVar11 + -8) = (ulonglong)uVar3;
    *(ulonglong *)((longlong)puVar11 + -0x10) = (ulonglong)*(uint *)((longlong)puVar11 + 0x54);
    uVar2 = *(uint *)((longlong)puVar11 + 0x44);
    *(ulonglong *)((longlong)puVar11 + -0x18) = (ulonglong)uVar2;
    *(undefined8 *)((longlong)puVar11 + -0x20) = 0x14078c54e;
    FUN_1408b31a0();
    puVar11 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -0x18) + 0xc);
    *(undefined8 *)((longlong)puVar11 + -8) = *(undefined8 *)puVar14;
    *(ulonglong *)((longlong)puVar11 + -0x10) = (ulonglong)uVar2;
    *(ulonglong *)((longlong)puVar11 + -0x18) = uVar10 + 0x24 & 0xffffffff;
  }
  else {
    if ((*(uint *)((longlong)puVar11 + 0x48) & 0xfffffffe) == 8) {
LAB_14078c580:
      pcVar13 = (char *)(ulonglong)puVar14[3];
    }
    else {
      uVar12 = (ulonglong)((int)(uVar10 - 0x18) + 8);
      pcVar13 = (char *)(uVar12 + 8 & 0xffffffff);
      *(char **)(uVar12 - 8) = pcVar13;
      *(undefined8 *)(uVar12 - 0x10) = *(undefined8 *)(uVar12 + 0x50);
      *(undefined8 *)(uVar12 - 0x18) = 0x14078c577;
      FUN_14078c636();
      puVar11 = (undefined4 *)(ulonglong)((int)(uVar12 - 0x10) + 0xc);
      if (*pcVar13 == '\0') goto LAB_14078c580;
    }
    *puVar11 = 0;
    uVar4 = puVar11[0x13];
    puVar8 = puVar11;
    if (3 < uVar3) {
      puVar8 = (undefined4 *)(ulonglong)uVar4;
    }
    *(undefined4 **)(puVar11 + -2) = puVar8;
    *(char **)(puVar11 + -4) = pcVar13;
    *(char **)(puVar11 + -6) = (char *)(ulonglong)uVar2;
    *(undefined8 *)(puVar11 + -8) = 0x14078c59d;
    iVar6 = FUN_14077d8f9();
    puVar11 = (undefined4 *)(ulonglong)((int)(puVar11 + -6) + 0xc);
    if (iVar6 < 1) goto LAB_14078c5c5;
    if ((*puVar14 < 4) && (*(uint *)((longlong)puVar11 + 0x48) < 4)) {
                    /* WARNING: Could not emulate address calculation at 0x00014078c5b8 */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)((ulonglong)*(uint *)((longlong)puVar11 + 0x48) * 4 + 0x102b9740))();
      return (bool)uVar5;
    }
    *(undefined8 *)((longlong)puVar11 + -8) = *(undefined8 *)puVar14;
    *(ulonglong *)((longlong)puVar11 + -0x10) = (ulonglong)uVar4;
    *(ulonglong *)((longlong)puVar11 + -0x18) = (ulonglong)((longlong)puVar11 + 0x24) & 0xffffffff;
  }
  *(undefined8 *)((longlong)puVar11 + -0x20) = 0x14078c60b;
  iVar6 = FUN_1408b14b0();
  puVar11 = (undefined4 *)(ulonglong)((int)puVar11 - 0xc);
  bVar15 = iVar6 != 0;
LAB_14078c613:
  if (_DAT_150b1531f != (*(uint *)((longlong)puVar11 + 0x2c) ^ (uint)puVar11)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar11 + -8) = FUN_14078c636;
    FUN_1408802b0(*(uint *)((longlong)puVar11 + 0x2c) ^ (uint)puVar11);
  }
  return bVar15;
}

