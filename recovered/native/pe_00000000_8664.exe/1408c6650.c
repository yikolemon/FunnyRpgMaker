/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c6650 */

void FUN_1408c6650(void)

{
  double dVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar7;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  dVar1 = *(double *)(uVar5 + 8);
  uVar4 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  if (dVar1 != 0.0) {
    uVar2 = *(uint *)(uVar5 + 0xc);
    if (((uVar2 & 0x7ff00000) == 0) && (*(int *)(uVar5 + 8) != 0 || (uVar2 & 0xfffff) != 0)) {
      *(undefined8 *)(uVar4 - 8) = unaff_RBX;
      *(double *)(uVar5 - 0x10) = dVar1;
      uVar2 = *(uint *)(uVar5 - 0x10);
      *(undefined8 *)(uVar4 - 0x10) = unaff_RSI;
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)unaff_EDI;
      uVar7 = *(uint *)(uVar5 - 0xc);
      *(undefined4 *)(uVar5 - 4) = 0;
      uVar7 = uVar7 & 0xfffff;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
      }
      else {
        iVar6 = iVar6 + 0x20;
      }
      *(undefined8 *)(uVar4 - 0x20) = 0x1408c66ec;
      uVar3 = FUN_1408d07e0(0x34 - iVar6);
      uVar7 = uVar7 & 0xffefffff;
      if (dVar1 < 0.0) {
        uVar7 = uVar7 | 0x80000000;
      }
      *(uint *)(uVar5 + 0xc) = uVar7;
      iVar6 = iVar6 + -0x431;
      *(undefined4 *)(uVar5 + 8) = uVar3;
      *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar5 + 8);
      uVar7 = *(uint *)(uVar5 - 0xc);
    }
    else {
      *(double *)(uVar5 - 0x10) = dVar1;
      uVar7 = *(uint *)(uVar5 - 0xc);
      iVar6 = (uVar2 >> 0x14 & 0x7ff) - 0x3fe;
    }
    *(undefined4 *)(uVar5 - 8) = *(undefined4 *)(uVar5 - 0x10);
    uVar2 = *(uint *)(uVar5 + 0x10);
    *(uint *)(uVar5 - 4) = uVar7 & 0xbfefffff | 0x3fe00000;
    *(int *)(ulonglong)uVar2 = iVar6;
    return;
  }
  uVar2 = *(uint *)(uVar5 + 0x10);
  *(undefined8 *)(uVar5 - 8) = 0;
  *(undefined4 *)(ulonglong)uVar2 = 0;
  return;
}

