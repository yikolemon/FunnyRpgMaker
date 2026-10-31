/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6537 */

void FUN_1407e6537(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  undefined1 *puVar4;
  uint unaff_EBP;
  uint uVar5;
  ulonglong uVar6;
  
  puVar4 = &stack0xffffffffffffffe0;
  uVar6 = (ulonglong)unaff_EBP;
  FUN_1407e88a8(uVar6);
  iVar1 = *(int *)(uVar6 + 0x18);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(uVar6 + 0x20);
    uVar6 = 0;
    do {
      uVar3 = (ulonglong)*(uint *)(uVar2 + uVar6);
      uVar5 = *(uint *)(uVar3 + 0x74);
      if (((uVar5 != 0) || (uVar5 = *(uint *)((unaff_RBX >> 0x20) + 0x294), uVar5 != 0)) &&
         (uVar5 = *(uint *)((ulonglong)uVar5 + 0x10), uVar5 != 0)) {
        *(ulonglong *)(puVar4 + -8) = uVar3;
        *(ulonglong *)(puVar4 + -0x10) = unaff_RBX >> 0x20;
        *(undefined8 *)(puVar4 + -0x18) = 0x1407e6578;
        (*(code *)(ulonglong)uVar5)();
        puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x10) + 8);
      }
      uVar5 = (int)uVar6 + 4;
      uVar6 = (ulonglong)uVar5;
    } while (iVar1 << 2 != uVar5);
  }
  return;
}

