/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a273a */

void FUN_1407a273a(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong unaff_RBX;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 uStack_20;
  ulonglong uVar5;
  
  puVar6 = &stack0xffffffffffffffe8;
  piVar10 = (int *)(unaff_RBX & 0xffffffff);
  if (piVar10[1] < 0) {
    uStack_20 = 0;
    uVar3 = FUN_1407520ca();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_20 + 4);
    uVar2 = piVar10[2];
    if (uVar2 != 0) {
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*piVar10 * 0x18);
      *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)(puVar6 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)(puVar6 + -0x20) = 0x1407a277d;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) = *(undefined8 *)(piVar10 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_1407a2788;
      FUN_14075219b();
    }
    piVar10[2] = uVar3;
    piVar10[1] = 0;
    *piVar10 = 0;
  }
  else {
    *piVar10 = 0;
    if (piVar10[1] != 0) {
      uVar9 = (ulonglong)(uint)piVar10[2];
      iVar4 = 0;
      goto LAB_1407a27d5;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0xc0;
  *(undefined8 *)(puVar6 + -0x10) = 0x1407a279f;
  uVar3 = FUN_1407520ca();
  uVar7 = (ulonglong)((int)(puVar6 + -8) + 4);
  uVar9 = (ulonglong)uVar3;
  uVar2 = piVar10[2];
  if (uVar2 != 0) {
    *(ulonglong *)(uVar7 - 8) = (ulonglong)(uint)(*piVar10 * 0x18);
    *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar2;
    *(ulonglong *)(uVar7 - 0x18) = uVar9;
    *(undefined8 *)(uVar7 - 0x20) = 0x1407a27bb;
    FUN_1408b31a0();
    uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
    *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(piVar10 + 2);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar8 - 0x10) = &UNK_1407a27c6;
    FUN_14075219b();
  }
  piVar10[2] = uVar3;
  piVar10[1] = 8;
  iVar4 = *piVar10;
LAB_1407a27d5:
  uVar5 = (ulonglong)(uint)(iVar4 * 3);
  *(undefined4 *)(uVar9 + uVar5 * 8) = 1;
  *(char *)(uVar9 + 4 + uVar5 * 8) = (char)(unaff_RBX >> 0x20);
  *(undefined1 *)(uVar9 + 5 + uVar5 * 8) = 0;
  puVar1 = (undefined4 *)(uVar9 + 8 + uVar5 * 8);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *piVar10 = *piVar10 + 1;
  return;
}

