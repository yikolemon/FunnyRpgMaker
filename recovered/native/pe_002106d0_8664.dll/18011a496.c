/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a496 */

void FUN_18011a496(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  lVar6 = (longlong)*(int *)(DAT_180419160 + 0x2138) + 1;
  iVar4 = *(int *)(DAT_180419160 + 0x213c);
  iVar5 = (int)lVar6;
  if (*(int *)(DAT_180419160 + 0x2138) < iVar4) {
    lVar3 = *(longlong *)(DAT_180419160 + 0x2140);
  }
  else {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    lVar3 = FUN_1800fe7f8((longlong)iVar4 * 0x3c);
    if (*(longlong *)(lVar2 + 0x2140) != 0) {
      FUN_1802a82f0(lVar3,*(longlong *)(lVar2 + 0x2140),(longlong)*(int *)(lVar2 + 0x2138) * 0x3c);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2140));
    }
    *(longlong *)(lVar2 + 0x2140) = lVar3;
    *(int *)(lVar2 + 0x213c) = iVar4;
  }
  *(int *)(lVar2 + 0x2138) = iVar5;
  lVar6 = lVar6 * 0x3c;
  *(undefined4 *)(lVar3 + -0x3c + lVar6) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar3 + -0x38 + lVar6) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(lVar3 + -0x28 + lVar6) = *(undefined8 *)(lVar1 + 0x160);
  *(undefined8 *)(lVar3 + -0x30 + lVar6) = *(undefined8 *)(lVar1 + 0x170);
  *(undefined4 *)(lVar3 + -0x20 + lVar6) = *(undefined4 *)(lVar1 + 0x19c);
  *(undefined4 *)(lVar3 + -0x1c + lVar6) = *(undefined4 *)(lVar1 + 0x1a4);
  *(undefined8 *)(lVar3 + -0x18 + lVar6) = *(undefined8 *)(lVar1 + 0x180);
  *(undefined4 *)(lVar3 + -0x10 + lVar6) = *(undefined4 *)(lVar1 + 400);
  *(undefined4 *)(lVar3 + -0xc + lVar6) = *(undefined4 *)(lVar2 + 0x1680);
  *(bool *)(lVar3 + -6 + lVar6) = *(int *)(lVar2 + 0x1664) != 0;
  *(undefined1 *)(lVar3 + -5 + lVar6) = *(undefined1 *)(lVar1 + 0x198);
  *(undefined1 *)(lVar3 + -8 + lVar6) = *(undefined1 *)(lVar2 + 0x168d);
  *(undefined1 *)(lVar3 + -7 + lVar6) = *(undefined1 *)(lVar2 + 0x16b5);
  *(undefined1 *)(lVar3 + -4 + lVar6) = 1;
  fVar7 = (*(float *)(lVar1 + 0x158) - *(float *)(lVar1 + 0x60)) - *(float *)(lVar1 + 0x1a0);
  *(float *)(lVar1 + 0x1a4) = fVar7;
  *(float *)(lVar1 + 0x19c) = fVar7;
  *(undefined8 *)(lVar1 + 0x170) = *(undefined8 *)(lVar1 + 0x158);
  *(undefined8 *)(lVar1 + 0x180) = 0;
  if (*(char *)(lVar2 + 0x2a40) == '\x01') {
    *(undefined4 *)(lVar2 + 0x2a78) = 0xff7fffff;
  }
  return;
}

