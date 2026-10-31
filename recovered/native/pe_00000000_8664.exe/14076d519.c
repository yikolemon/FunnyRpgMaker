/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d519 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076d519(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  ulonglong uStack_30;
  int local_28;
  undefined4 uStack_24;
  
  uVar9 = (ulonglong)_DAT_150b0ac70;
  uVar5 = (ulonglong)*(uint *)(uVar9 + 0x14cc);
  iVar4 = *(int *)(uVar9 + 0x1fb0) + 1;
  iVar7 = *(int *)(uVar9 + 0x1fb4);
  if (*(int *)(uVar9 + 0x1fb0) < iVar7) {
    uVar8 = (ulonglong)*(uint *)(uVar9 + 0x1fb8);
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    _local_28 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar4);
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    uStack_30 = (ulonglong)(uint)(iVar7 * 0x3c);
    uVar2 = FUN_1407520ca();
    piVar6 = (int *)(ulonglong)((int)&uStack_30 + 4);
    uVar8 = (ulonglong)uVar2;
    uVar1 = *(uint *)(uVar9 + 0x1fb8);
    if (uVar1 != 0) {
      *(ulonglong *)(piVar6 + -2) = (ulonglong)(uint)(*(int *)(uVar9 + 0x1fb0) * 0x3c);
      *(ulonglong *)(piVar6 + -4) = (ulonglong)uVar1;
      *(ulonglong *)(piVar6 + -6) = uVar8;
      piVar6[-8] = 0x4076d58a;
      piVar6[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(piVar6 + -6) + 0xc) - 8) = *(undefined8 *)(uVar9 + 0x1fb8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(piVar6 + -6) + 0xc) - 0x10) = &UNK_14076d598;
      FUN_14075219b();
    }
    *(uint *)(uVar9 + 0x1fb8) = uVar2;
    *(int *)(uVar9 + 0x1fb4) = iVar7;
    iVar4 = *piVar6;
  }
  *(int *)(uVar9 + 0x1fb0) = iVar4;
  uVar3 = (ulonglong)(uint)(iVar4 * 0x3c);
  *(undefined4 *)((uVar8 - 0x3c) + uVar3) = *(undefined4 *)(uVar5 + 8);
  *(undefined8 *)((uVar8 - 0x38) + uVar3) = *(undefined8 *)(uVar5 + 0x144);
  *(undefined8 *)((uVar8 - 0x28) + uVar3) = *(undefined8 *)(uVar5 + 0x14c);
  *(undefined8 *)((uVar8 - 0x30) + uVar3) = *(undefined8 *)(uVar5 + 0x15c);
  *(undefined4 *)((uVar8 - 0x20) + uVar3) = *(undefined4 *)(uVar5 + 0x188);
  *(undefined4 *)((uVar8 - 0x1c) + uVar3) = *(undefined4 *)(uVar5 + 400);
  *(undefined8 *)((uVar8 - 0x18) + uVar3) = *(undefined8 *)(uVar5 + 0x16c);
  *(undefined4 *)((uVar8 - 0x10) + uVar3) = *(undefined4 *)(uVar5 + 0x17c);
  *(undefined4 *)((uVar8 - 0xc) + uVar3) = *(undefined4 *)(uVar9 + 0x152c);
  *(bool *)((uVar8 - 6) + uVar3) = *(int *)(uVar9 + 0x1510) != 0;
  *(undefined1 *)((uVar8 - 5) + uVar3) = *(undefined1 *)(uVar5 + 0x184);
  *(undefined1 *)((uVar8 - 8) + uVar3) = *(undefined1 *)(uVar9 + 0x1539);
  *(undefined1 *)((uVar8 - 7) + uVar3) = *(undefined1 *)(uVar9 + 0x155d);
  *(undefined1 *)((uVar8 - 4) + uVar3) = 1;
  fVar10 = (*(float *)(uVar5 + 0x144) - *(float *)(uVar5 + 0x50)) - *(float *)(uVar5 + 0x18c);
  *(float *)(uVar5 + 400) = fVar10;
  *(float *)(uVar5 + 0x188) = fVar10;
  *(undefined4 *)(uVar5 + 0x160) = *(undefined4 *)(uVar5 + 0x148);
  *(undefined4 *)(uVar5 + 0x15c) = *(undefined4 *)(uVar5 + 0x144);
  *(undefined4 *)(uVar5 + 0x16c) = 0;
  *(undefined4 *)(uVar5 + 0x170) = 0;
  if (*(char *)(uVar9 + 0x2748) == '\x01') {
    *(undefined4 *)(uVar9 + 0x276c) = 0xff7fffff;
  }
  return;
}

