/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd2df */

void FUN_1407bd2df(void)

{
  int *piVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint unaff_retaddr;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar6 = (ulonglong)unaff_retaddr;
  uVar3 = (ulonglong)*(uint *)(uVar6 + 0x158);
  piVar1 = (int *)(uVar6 + 0x44);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(uVar6 + 0x48) = 0xffffffff;
  *(undefined4 *)(uVar6 + 0x74) = 0x1000000;
  *(undefined4 *)(uVar6 + 0x70) = 0x1000000;
  *(undefined2 *)(uVar6 + 0x1e4) = 0xffff;
  *(undefined1 *)(uVar6 + 0x1ee) = 1;
  uVar7 = *(undefined4 *)(uVar6 + 0x54);
  if ((*piVar1 == 0) && (0 < *(short *)(uVar6 + 0x1de))) {
    uVar7 = *(undefined4 *)(uVar6 + 200);
    *(undefined4 *)(uVar3 + 0x148) = uVar7;
  }
  *(undefined4 *)(uVar6 + 0x54) = uVar7;
  *(undefined4 *)(uVar6 + 0x50) = uVar7;
  *(undefined4 *)(uVar6 + 0x60) = 0;
  *(float *)(uVar6 + 100) = *(float *)(uVar3 + 0x188) - *(float *)(uVar6 + 0x88);
  *(undefined4 *)(uVar3 + 0x180) = 0;
  fVar2 = *(float *)(uVar6 + 0x5c);
  *(undefined4 *)(uVar3 + 0x14c) = *(undefined4 *)(uVar3 + 0x144);
  *(float *)(uVar3 + 0x150) = *(float *)(uVar3 + 0x148) + fVar2;
  *(undefined2 *)(uVar3 + 0x184) = 0;
  *(undefined8 *)(uVar3 + 0x16c) = 0;
  *(undefined8 *)(uVar3 + 0x174) = 0;
  *(undefined4 *)(uVar3 + 0x160) = uVar7;
  if ((*(byte *)(uVar6 + 0x68) & 1) != 0) {
    uStack_10 = 0x3f800000;
    uStack_18 = 0x30;
    uVar4 = FUN_140754a09();
    uVar5 = (ulonglong)((int)&uStack_18 + 8);
    *(undefined8 *)(uVar5 - 8) = 0xffffffffffffffff;
    *(undefined8 *)(uVar5 - 0x10) = uVar4;
    *(undefined8 *)(uVar5 - 0x18) = 1;
    *(undefined8 *)(uVar5 - 0x20) = 0x1407bd3b5;
    FUN_1407bd164();
    if (*(int *)(uVar6 + 0x44) == 0) {
      *(undefined1 *)(uVar6 + 0x1f1) = 1;
    }
  }
  return;
}

