/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c2f7 */

void FUN_14076c2f7(void)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint unaff_retaddr;
  undefined8 uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  uint uVar4;
  
  puVar3 = &stack0xffffffffffffffe8;
  uVar2 = (ulonglong)unaff_retaddr;
  uVar1 = unaff_RBX >> 0x20;
  uVar4 = (uint)unaff_RBX;
  if ((uVar4 >> 0xc & 1) != 0) {
    uStack_30 = 0x1000;
    uStack_28 = uVar1;
    uStack_20 = uVar2;
    FUN_14076c284();
    puVar3 = (undefined1 *)(ulonglong)((int)&uStack_30 + 0xc);
  }
  if ((uVar4 >> 0xd & 1) != 0) {
    *(ulonglong *)(puVar3 + -8) = uVar2;
    *(ulonglong *)(puVar3 + -0x10) = uVar1;
    *(undefined8 *)(puVar3 + -0x18) = 0x2000;
    *(undefined8 *)(puVar3 + -0x20) = 0x14076c32d;
    FUN_14076c284();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -0x18) + 0xc);
  }
  if ((uVar4 >> 0xe & 1) != 0) {
    *(ulonglong *)(puVar3 + -8) = uVar2;
    *(ulonglong *)(puVar3 + -0x10) = uVar1;
    *(undefined8 *)(puVar3 + -0x18) = 0x4000;
    *(undefined8 *)(puVar3 + -0x20) = 0x14076c342;
    FUN_14076c284();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -0x18) + 0xc);
  }
  if ((short)unaff_RBX < 0) {
    *(ulonglong *)(puVar3 + -8) = uVar2;
    *(ulonglong *)(puVar3 + -0x10) = uVar1;
    *(undefined8 *)(puVar3 + -0x18) = 0x8000;
    *(undefined8 *)(puVar3 + -0x20) = 0x14076c356;
    FUN_14076c284();
    puVar3 = (undefined1 *)(ulonglong)((int)(puVar3 + -0x18) + 0xc);
  }
  if ((unaff_RBX & 0xffff0fff) != 0) {
    *(ulonglong *)(puVar3 + -8) = uVar2;
    *(ulonglong *)(puVar3 + -0x10) = uVar1;
    *(ulonglong *)(puVar3 + -0x18) = (ulonglong)(uVar4 & 0xffff0fff);
    *(undefined8 *)(puVar3 + -0x20) = 0x14076c369;
    FUN_14076c284();
  }
  return;
}

