/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a4cb */

void FUN_14075a4cb(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uStack_28;
  
  puVar6 = &stack0xffffffffffffffe0;
  uVar3 = unaff_RBX >> 0x20;
  *(undefined1 *)(uVar3 + 0x408) = 0;
  uVar5 = (ulonglong)*(uint *)(uVar3 + 0x2e8);
  iVar1 = *(int *)(uVar3 + 0x400);
  if (*(int *)(uVar5 + 0x10) < iVar1) {
    uStack_28 = (ulonglong)(uint)(iVar1 * 2);
    uVar4 = FUN_1407520ca();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    uVar2 = *(uint *)(uVar5 + 0x14);
    if (uVar2 != 0) {
      *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(*(int *)(uVar5 + 0xc) * 2);
      *(ulonglong *)(puVar6 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)(puVar6 + -0x18) = (ulonglong)uVar4;
      *(undefined8 *)(puVar6 + -0x20) = 0x14075a511;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 8) = *(undefined8 *)(uVar5 + 0x14);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar6 + -0x18) + 0xc) - 0x10) = &UNK_14075a51c;
      FUN_14075219b();
    }
    *(uint *)(uVar5 + 0x14) = uVar4;
    *(int *)(uVar5 + 0x10) = iVar1;
    uVar5 = (ulonglong)*(uint *)(uVar3 + 0x2e8);
  }
  iVar1 = *(int *)(uVar3 + 0x404);
  if (*(int *)(uVar5 + 0x1c) < iVar1) {
    *(ulonglong *)(puVar6 + -8) = (ulonglong)(uint)(iVar1 * 0x14);
    *(undefined8 *)(puVar6 + -0x10) = 0x14075a546;
    uVar4 = FUN_1407520ca();
    uVar7 = (ulonglong)((int)(puVar6 + -8) + 4);
    uVar2 = *(uint *)(uVar5 + 0x20);
    if (uVar2 != 0) {
      *(ulonglong *)(uVar7 - 8) = (ulonglong)(uint)(*(int *)(uVar5 + 0x18) * 0x14);
      *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar7 - 0x18) = (ulonglong)uVar4;
      *(undefined8 *)(uVar7 - 0x20) = 0x14075a563;
      FUN_1408b31a0();
      uVar8 = (ulonglong)((int)(uVar7 - 0x18) + 0xc);
      *(undefined8 *)(uVar8 - 8) = *(undefined8 *)(uVar5 + 0x20);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar8 - 0x10) = &UNK_14075a56e;
      FUN_14075219b();
    }
    *(uint *)(uVar5 + 0x20) = uVar4;
    *(int *)(uVar5 + 0x1c) = iVar1;
  }
  *(undefined4 *)(uVar3 + 0x404) = 0;
  *(undefined4 *)(uVar3 + 0x400) = 0;
  return;
}

