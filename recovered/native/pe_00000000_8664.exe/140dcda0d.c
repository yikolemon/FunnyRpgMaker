/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dcda0d */

uint * FUN_140dcda0d(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar7 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  uVar4 = *(uint *)(uVar8 + 0x10);
  uVar5 = 0;
  *(undefined8 *)(uVar7 - 8) = unaff_RBX;
  *(undefined8 *)(uVar7 - 0x10) = unaff_RSI;
  uVar9 = *(uint *)(uVar8 + 8);
  *(ulonglong *)(uVar7 - 0x18) = (ulonglong)unaff_EDI;
  iVar1 = *(int *)(uVar8 + 0xc);
  *(uint *)(uVar8 - 0xc) = uVar4 - 1;
  do {
    uVar2 = uVar4 >> 1;
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        return (uint *)0x0;
      }
      puVar3 = (uint *)(ulonglong)(iVar1 + uVar5 * 8);
      if (uVar9 != *puVar3) {
        return (uint *)0x0;
      }
      return puVar3;
    }
    uVar6 = uVar2 - 1;
    if ((uVar4 & 1) != 0) {
      uVar6 = uVar2;
    }
    *(uint *)(uVar8 - 8) = uVar6 + uVar5;
    puVar3 = (uint *)(ulonglong)(iVar1 + (uVar6 + uVar5) * 8);
    *(uint *)(uVar8 - 4) = *puVar3;
    uVar9 = *(uint *)(uVar8 + 8);
    if (uVar9 == *puVar3) {
      return puVar3;
    }
    uVar4 = uVar2;
    if (uVar9 < *(uint *)(uVar8 - 4)) {
      uVar4 = uVar6;
    }
    if (*(uint *)(uVar8 - 4) <= uVar9) {
      uVar5 = param_3;
    }
    uVar2 = *(uint *)(uVar8 - 8);
    if (*(uint *)(uVar8 - 4) <= uVar9) {
      uVar2 = *(uint *)(uVar8 - 0xc);
    }
    *(uint *)(uVar8 - 0xc) = uVar2;
  } while (uVar5 <= uVar2);
  return (uint *)0x0;
}

