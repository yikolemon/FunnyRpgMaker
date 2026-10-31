/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115649 */

void FUN_10115649(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar4 = *(int *)(DAT_1039d74c + 0x1fb0) + 1;
  iVar5 = *(int *)(DAT_1039d74c + 0x1fb4);
  if (*(int *)(DAT_1039d74c + 0x1fb0) < iVar5) {
    iVar3 = *(int *)(DAT_1039d74c + 0x1fb8);
  }
  else {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    iVar3 = FUN_100fa1fa(iVar5 * 0x3c);
    if (*(int *)(iVar2 + 0x1fb8) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar2 + 0x1fb8),*(int *)(iVar2 + 0x1fb0) * 0x3c);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1fb8));
    }
    *(int *)(iVar2 + 0x1fb8) = iVar3;
    *(int *)(iVar2 + 0x1fb4) = iVar5;
  }
  *(int *)(iVar2 + 0x1fb0) = iVar4;
  iVar4 = iVar4 * 0x3c;
  *(undefined4 *)(iVar3 + -0x3c + iVar4) = *(undefined4 *)(iVar1 + 8);
  *(undefined8 *)(iVar3 + -0x38 + iVar4) = *(undefined8 *)(iVar1 + 0x144);
  *(undefined8 *)(iVar3 + -0x28 + iVar4) = *(undefined8 *)(iVar1 + 0x14c);
  *(undefined8 *)(iVar3 + -0x30 + iVar4) = *(undefined8 *)(iVar1 + 0x15c);
  *(undefined4 *)(iVar3 + -0x20 + iVar4) = *(undefined4 *)(iVar1 + 0x188);
  *(undefined4 *)(iVar3 + -0x1c + iVar4) = *(undefined4 *)(iVar1 + 400);
  *(undefined8 *)(iVar3 + -0x18 + iVar4) = *(undefined8 *)(iVar1 + 0x16c);
  *(undefined4 *)(iVar3 + -0x10 + iVar4) = *(undefined4 *)(iVar1 + 0x17c);
  *(undefined4 *)(iVar3 + -0xc + iVar4) = *(undefined4 *)(iVar2 + 0x152c);
  *(bool *)(iVar3 + -6 + iVar4) = *(int *)(iVar2 + 0x1510) != 0;
  *(undefined1 *)(iVar3 + -5 + iVar4) = *(undefined1 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar3 + -8 + iVar4) = *(undefined1 *)(iVar2 + 0x1539);
  *(undefined1 *)(iVar3 + -7 + iVar4) = *(undefined1 *)(iVar2 + 0x155d);
  *(undefined1 *)(iVar3 + -4 + iVar4) = 1;
  fVar6 = (*(float *)(iVar1 + 0x144) - *(float *)(iVar1 + 0x50)) - *(float *)(iVar1 + 0x18c);
  *(float *)(iVar1 + 400) = fVar6;
  *(float *)(iVar1 + 0x188) = fVar6;
  *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 0x148);
  *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(iVar1 + 0x144);
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  *(undefined4 *)(iVar1 + 0x170) = 0;
  if (*(char *)(iVar2 + 0x2748) == '\x01') {
    *(undefined4 *)(iVar2 + 0x276c) = 0xff7fffff;
  }
  return;
}

