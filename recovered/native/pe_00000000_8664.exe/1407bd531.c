/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd531 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd531(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int unaff_EBP;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uVar5 = unaff_RBX >> 0x20;
  uVar10 = (ulonglong)_DAT_150b5ac8f;
  uVar6 = unaff_EBP * 0x74;
  uVar2 = *(uint *)(uVar5 + 0x10);
  uVar3 = *(uint *)(uVar5 + 0x158);
  uVar11 = (ulonglong)uVar3;
  uVar7 = (ulonglong)(uVar2 + uVar6);
  *(int *)(uVar5 + 0x48) = unaff_EBP;
  fVar12 = *(float *)((ulonglong)uVar2 + 0x38 + (ulonglong)uVar6);
  if ((*(byte *)((ulonglong)uVar2 + 2 + (ulonglong)uVar6) & 1) != 0) {
    fVar12 = fVar12 + *(float *)(uVar5 + 100);
  }
  *(float *)(uVar11 + 0x144) = fVar12;
  fVar13 = *(float *)(uVar5 + 0x50) + *(float *)(uVar5 + 0x5c);
  *(float *)(uVar11 + 0x148) = fVar13;
  *(float *)(uVar11 + 0x15c) = fVar12;
  *(float *)(uVar11 + 0x18c) = (fVar12 - *(float *)(uVar11 + 0x50)) - *(float *)(uVar11 + 0x188);
  *(float *)(uVar11 + 0x14c) = fVar12;
  *(undefined4 *)(uVar11 + 0x17c) = *(undefined4 *)(uVar5 + 0x60);
  *(int *)(uVar11 + 0x19c) = (int)*(char *)(uVar7 + 0x6e);
  *(float *)(uVar11 + 0x270) = fVar13;
  *(undefined4 *)(uVar11 + 0x26c) = *(undefined4 *)(uVar7 + 0x38);
  *(undefined4 *)(uVar11 + 0x274) = *(undefined4 *)(uVar7 + 0x3c);
  *(undefined4 *)(uVar11 + 0x218) = *(undefined4 *)(uVar7 + 0x40);
  cVar1 = *(char *)(uVar7 + 0x6c);
  *(char *)(uVar11 + 0xfe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(uVar10 + 0x1e80) = 0;
    *(undefined4 *)(uVar10 + 0x1e88) = 0;
  }
  if ((*(byte *)(uVar5 + 6) & 0x10) == 0) {
    uStack_28 = (ulonglong)(uVar2 + uVar6 + 0x24);
    uStack_30 = uVar11;
    FUN_1407bd486();
    uVar8 = (ulonglong)((int)&uStack_30 + 8);
    uVar4 = *(undefined4 *)(uVar5 + 0x168);
    puVar9 = (ulonglong *)(uVar8 - 8);
    *(ulonglong *)(uVar8 - 8) = (ulonglong)*(ushort *)(uVar7 + 0x60);
  }
  else {
    uVar4 = *(undefined4 *)(uVar5 + 0x168);
    puVar9 = &uStack_28;
    uStack_28 = 2;
  }
  *(undefined8 *)((longlong)puVar9 + -8) = *(undefined8 *)(uVar11 + 0x2e8);
  *(undefined8 *)((longlong)puVar9 + -0x10) = 0x1407bd63d;
  FUN_1407e5d3c(uVar4);
  if ((*(char *)(uVar10 + 0x2748) == '\x01') && (*(char *)(uVar7 + 0x6c) == '\0')) {
    *(undefined8 *)((longlong)puVar9 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar9 + -0x18) = 0x1033032c;
    *(ulonglong *)((longlong)puVar9 + -0x20) = (ulonglong)(uVar3 + 0x144);
    *(undefined8 *)((longlong)puVar9 + -0x28) = 0x1407bd65f;
    FUN_140755578();
    *(undefined4 *)(uVar10 + 0x276c) = 0x7f7fffff;
  }
  return;
}

