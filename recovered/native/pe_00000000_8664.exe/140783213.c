/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783213 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140783213(ulonglong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  puVar10 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar11 = param_1 & 0xffffffff;
  if (*(uint *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(uVar11 + 4) = *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x18) + 4);
  }
  puVar1 = (undefined8 *)(uVar11 + 2);
  pcVar3 = (char *)(ulonglong)
                   CONCAT31((int3)((uint)_DAT_802404891039d74c >> 8),*(char *)(uVar11 + 1));
  *pcVar3 = *pcVar3 + *(char *)(uVar11 + 1);
  if (*(int *)(uVar11 + 0x1e) != 0) {
    *(undefined8 *)((longlong)puVar10 + -8) = 0x140783244;
    FUN_140783213();
  }
  if (*(int *)(uVar11 + 0x22) != 0) {
    *(undefined8 *)((longlong)puVar10 + -8) = 0x140783250;
    FUN_140783213();
  }
  *(undefined4 *)(uVar11 + 0xe) = 0;
  uVar2 = *(uint *)(uVar11 + 0x26);
  uVar4 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    do {
      puVar10[1] = (uint)uVar4;
      puVar6 = (uint *)(ulonglong)*(uint *)(uVar11 + 0x2e);
      uVar13 = (ulonglong)*puVar6;
      bVar14 = false;
      uVar4 = (ulonglong)*puVar10;
      if (*(int *)(uVar11 + 0x92) == *(int *)(uVar4 + 4)) {
        puVar6 = (uint *)((ulonglong)*(byte *)(uVar13 + 0xfa) ^ 1);
        if ((((*(byte *)(uVar11 + 0xae) & 0x40) == 0) &&
            (*(int *)(uVar11 + 0xa2) != *(int *)(uVar13 + 0xb8))) ||
           (*(char *)(uVar13 + 0x104) != '\x01')) {
          bVar14 = false;
        }
        else {
          bVar14 = (*(byte *)(uVar13 + 0xe) & 4) == 0;
        }
      }
      if (((char)puVar6 == '\0' && !bVar14) && (*(byte *)(uVar13 + 0x409) >> 3 & 1) == 0) {
        *(uint *)(uVar11 + 0xe) = *(uint *)(uVar11 + 0xe) | *(uint *)(uVar13 + 0x30);
      }
      else {
        *(byte *)(uVar13 + 0x409) = *(byte *)(uVar13 + 0x409) & 0xf7;
        if ((*(int *)(uVar11 + 0x26) == 1) && ((*(byte *)(uVar11 + 0x13) & 8) == 0)) {
          puVar10[-2] = 0x407833da;
          puVar10[-1] = 1;
          FUN_1407821b4((ulonglong)puVar1 & 0xffffffff);
          *(undefined4 *)(uVar11 + 0x16) = 1;
          *(undefined8 *)(puVar10 + -2) = *puVar1;
          puVar10[-4] = 0x407833ec;
          puVar10[-3] = 1;
          FUN_1407735f9((ulonglong)puVar1 & 0xffffffff,uVar13);
          return;
        }
        *(undefined8 *)(puVar10 + -2) = *puVar1;
        puVar10[-4] = 0x407832f8;
        puVar10[-3] = 1;
        FUN_1407735f9((ulonglong)puVar1 & 0xffffffff,uVar13);
        puVar10 = (uint *)(ulonglong)((int)(puVar10 + -2) + 4);
        uVar4 = (ulonglong)*(uint *)(uVar11 + 0x26);
      }
      uVar2 = (uint)uVar4;
    } while (0 < (int)uVar2);
    uVar5 = *(uint *)(uVar11 + 0xe);
  }
  uVar12 = *(uint *)(uVar11 + 10);
  uVar5 = uVar5 | *(uint *)(uVar11 + 6);
  uVar9 = uVar5 | uVar12;
  *(uint *)(uVar11 + 0x12) = uVar9;
  bVar8 = *(byte *)(uVar11 + 0xaf);
  uVar7 = (uint)bVar8;
  if ((bVar8 & 2) != 0) {
    *puVar10 = uVar12;
    puVar10[1] = (uint)bVar8;
    uVar12 = *puVar10;
    uVar7 = (uint)(bVar8 | 4);
    if ((uVar9 & 0x2040) != 0x40 || uVar2 != 1) {
      uVar7 = puVar10[1];
    }
  }
  bVar8 = (byte)uVar7 & 0xfd;
  uVar9 = (uint)bVar8;
  *(byte *)(uVar11 + 0xaf) = bVar8;
  if ((((uVar7 & 4) != 0) && (*(uint *)(uVar11 + 0x7e) != 0)) &&
     ((*(byte *)((ulonglong)*(uint *)(uVar11 + 0x7e) + 0x31) & 0x20) != 0)) {
    *(byte *)(uVar11 + 0xaf) = (byte)uVar7 & 0xf9;
    uVar9 = uVar7 & 0xfffffff9;
  }
  bVar8 = (byte)uVar9;
  if ((int)uVar2 < 2) {
    if ((uVar9 & 4) == 0) goto LAB_1407833bc;
    *(uint *)(uVar11 + 10) = uVar12 ^ 0x2000;
    *(uint *)(uVar11 + 0x12) = uVar5 | uVar12 ^ 0x2000;
  }
  else {
    *(uint *)(uVar11 + 10) = uVar12 & 0xffffdfff;
    *(uint *)(uVar11 + 0x12) = uVar5 | uVar12 & 0xffffdfff;
    if ((uVar12 >> 0xd & 1) == 0) goto LAB_1407833bc;
  }
  puVar10[-2] = 0x407833b6;
  puVar10[-1] = 1;
  FUN_140770426();
  bVar8 = *(byte *)(uVar11 + 0xaf);
LAB_1407833bc:
  *(byte *)(uVar11 + 0xaf) = bVar8 & 0xfb;
  FUN_140781956((ulonglong)puVar1 & 0xffffffff);
  return;
}

