/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407820ba */

/* WARNING: Instruction at (ram,0x00014078215d) overlaps instruction at (ram,0x00014078215c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407820ba(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar14;
  uint uVar15;
  int in_R10D;
  int unaff_R15D;
  uint *puVar13;
  
  uVar12 = (int)&stack0xffffffffffffffe8 - 0x10;
  puVar13 = (uint *)(ulonglong)uVar12;
  puVar14 = (undefined4 *)(param_1 & 0xffffffff);
  puVar13[-2] = 0x407820d2;
  puVar13[-1] = 1;
  FUN_140783213();
  uVar11 = 0;
  puVar13[2] = 0;
  puVar13[0] = 0;
  puVar13[1] = 0;
  puVar13[-2] = 0x407820e9;
  puVar13[-1] = 1;
  FUN_1407833f4(puVar14,puVar13);
  uVar8 = (ulonglong)*puVar13;
  puVar14[0x20] = *puVar13;
  uVar1 = puVar13[1];
  puVar9 = (uint *)(ulonglong)uVar1;
  uVar2 = puVar13[2];
  uVar15 = 0;
  if (uVar2 == 1) {
    uVar15 = uVar1;
  }
  puVar14[0x21] = uVar15;
  puVar14[0x22] = uVar2;
  if (uVar1 == 0 || puVar14[0x26] != 0) {
    if (uVar1 == 0) goto LAB_14078218e;
  }
  else {
    puVar14[0x26] = *puVar9;
  }
  uVar10 = (ulonglong)*(uint *)(ulonglong)puVar9[0xb];
  puVar14[0x1d] = *(undefined4 *)(uVar10 + 0x38);
  uVar3 = *(undefined4 *)(uVar10 + 0x18);
  uVar4 = *(undefined4 *)(uVar10 + 0x1c);
  uVar5 = *(undefined4 *)(uVar10 + 0x20);
  uVar6 = *(undefined4 *)(uVar10 + 0x24);
  uVar7 = *(undefined8 *)(uVar10 + 0x30);
  *(undefined8 *)(puVar14 + 0x19) = *(undefined8 *)(uVar10 + 0x28);
  *(undefined8 *)(puVar14 + 0x1b) = uVar7;
  puVar14[0x15] = uVar3;
  puVar14[0x16] = uVar4;
  puVar14[0x17] = uVar5;
  puVar14[0x18] = uVar6;
  if (1 < (int)puVar9[9]) {
    while( true ) {
      puVar14 = (undefined4 *)(ulonglong)((int)puVar14 + 0x54);
      puVar9 = (uint *)(ulonglong)puVar9[0xb];
      if (*(char *)(uVar11 + 0x35) == '\0') break;
      if (in_R10D == unaff_R15D) goto LAB_14078218e;
      uVar11 = (ulonglong)*puVar9;
    }
    puVar14[8] = *(undefined4 *)(uVar11 + 0x38);
    uVar3 = *(undefined4 *)(uVar11 + 0x18);
    uVar4 = *(undefined4 *)(uVar11 + 0x1c);
    uVar5 = *(undefined4 *)(uVar11 + 0x20);
    uVar6 = *(undefined4 *)(uVar11 + 0x24);
    uVar7 = *(undefined8 *)(uVar11 + 0x30);
    *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(uVar11 + 0x28);
    *(undefined8 *)(puVar14 + 6) = uVar7;
    *puVar14 = uVar3;
    puVar14[1] = uVar4;
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
  }
LAB_14078218e:
  for (; (int)uVar8 != 0; uVar8 = (ulonglong)*(uint *)(uVar8 + 0x18)) {
    *(byte *)(uVar8 + 0xac) = *(byte *)(uVar8 + 0xac) | 0x20;
  }
  if (_DAT_150b0ae9e == (puVar13[3] ^ uVar12)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -2) = FUN_1407821b4;
  FUN_1408802b0(puVar13[3] ^ uVar12);
}

