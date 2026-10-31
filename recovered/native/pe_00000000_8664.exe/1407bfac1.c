/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bfac1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bfac1(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong unaff_R15;
  ulonglong uStack_28;
  uint uVar8;
  
  puVar4 = &stack0xffffffffffffffe0;
  uVar8 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar7 = (ulonglong)uVar8;
  uVar3 = (ulonglong)_DAT_150b5d21b;
  uVar1 = *(uint *)(uVar7 + 0x40);
  uVar5 = uVar1 * 8;
  if (*(int *)(uVar3 + 0x29a4) < (int)uVar5) {
    uStack_28 = (ulonglong)uVar5;
    uVar2 = FUN_1407520ca();
    puVar4 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    psVar6 = (short *)(ulonglong)uVar2;
    uVar1 = *(uint *)(uVar3 + 0x29a8);
    if (uVar1 != 0) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(uVar3 + 0x29a0);
      *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar1;
      *(short **)(puVar4 + -0x18) = psVar6;
      *(undefined8 *)(puVar4 + -0x20) = 0x1407bfb03;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar3 + 0x29a8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 0x10) = &UNK_1407bfb11;
      FUN_14075219b();
    }
    *(uint *)(uVar3 + 0x29a8) = uVar2;
    *(uint *)(uVar3 + 0x29a4) = uVar5;
    uVar1 = *(uint *)(uVar7 + 0x40);
  }
  else {
    psVar6 = (short *)(ulonglong)*(uint *)(uVar3 + 0x29a8);
  }
  while (0 < (int)uVar1) {
    *psVar6 = 0;
    *(uint *)(psVar6 + 2) = uVar8;
    uVar1 = *(uint *)(unaff_R15 + 0x40);
  }
  if (1 < uVar1) {
    *(undefined8 *)(puVar4 + -8) = 0x10167caa;
    *(undefined8 *)(puVar4 + -0x10) = 8;
    *(ulonglong *)(puVar4 + -0x18) = (ulonglong)uVar1;
    *(short **)(puVar4 + -0x20) = psVar6;
    *(undefined8 *)(puVar4 + -0x28) = 0x1407bfb54;
    FUN_1408c79d0();
    uVar1 = *(uint *)(uVar7 + 0x40);
  }
  while (0 < (int)uVar1) {
    *(undefined2 *)((ulonglong)*(uint *)(uVar7 + 0x10) + 0x56 + (ulonglong)(uint)(*psVar6 * 0x74)) =
         0;
    uVar1 = *(uint *)(uVar7 + 0x40);
  }
  return;
}

