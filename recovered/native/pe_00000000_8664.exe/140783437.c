/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783437 */

void FUN_140783437(ulonglong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  
  puVar4 = &stack0xffffffffffffffe0;
  uVar7 = (uint)param_1;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 != 0) {
    uVar2 = (uint)((ulonglong)unaff_RBX >> 0x20);
    puVar4 = &stack0xffffffffffffffe0;
    uVar8 = param_1 & 0xffffffff;
    do {
      uVar3 = uVar7 + 0x1c;
      if (((*(byte *)((ulonglong)uVar1 + 0xac) & 1) != 0) &&
         (((uVar2 == 0 || (*(int *)(uVar8 + 0x4c) != param_2)) ||
          ((*(byte *)((ulonglong)*(uint *)(uVar8 + 0x20) + 0xac) & 1) == 0)))) {
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + 0x18);
        *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar2;
        *(undefined8 *)(puVar4 + -0x18) = 0x14078347b;
        FUN_140783437((ulonglong)uVar1,param_2);
        puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x10) + 8);
      }
      uVar7 = *(uint *)(uVar8 + 0x20);
      uVar9 = (ulonglong)uVar7;
      if ((*(byte *)(uVar9 + 0xac) & 1) == 0) {
        return;
      }
      if (((uVar2 == 0) && (*(int *)(uVar8 + 0x4c) == param_2)) &&
         ((*(byte *)((ulonglong)*(uint *)(ulonglong)uVar3 + 0xac) & 1) != 0)) {
        return;
      }
      uVar1 = *(uint *)(uVar9 + 0x1c);
      uVar8 = uVar9;
    } while (uVar1 != 0);
  }
  puVar10 = (uint *)(ulonglong)*(uint *)(puVar4 + 0x18);
  uVar1 = *puVar10;
  if (uVar1 == puVar10[1]) {
    if (uVar1 == 0) {
      uVar2 = 8;
    }
    else {
      uVar2 = (int)uVar1 / 2 + uVar1;
    }
    uVar3 = uVar1 + 1;
    if ((int)(uVar1 + 1) < (int)uVar2) {
      uVar3 = uVar2;
    }
    *(ulonglong *)(puVar4 + -8) = (ulonglong)(uVar3 * 4);
    *(undefined8 *)(puVar4 + -0x10) = 0x1407834e9;
    uVar2 = FUN_1407520ca();
    uVar5 = (ulonglong)((int)(puVar4 + -8) + 4);
    uVar8 = (ulonglong)uVar2;
    uVar1 = puVar10[2];
    if (uVar1 != 0) {
      *(ulonglong *)(uVar5 - 8) = (ulonglong)(*puVar10 << 2);
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar5 - 0x18) = uVar8;
      *(undefined8 *)(uVar5 - 0x20) = 0x140783502;
      FUN_1408b31a0();
      uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(puVar10 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar6 - 0x10) = &UNK_14078350d;
      FUN_14075219b();
    }
    puVar10[2] = uVar2;
    puVar10[1] = uVar3;
    uVar1 = *puVar10;
  }
  else {
    uVar8 = (ulonglong)puVar10[2];
  }
  *(uint *)(uVar8 + (ulonglong)uVar1 * 4) = uVar7;
  *puVar10 = *puVar10 + 1;
  return;
}

