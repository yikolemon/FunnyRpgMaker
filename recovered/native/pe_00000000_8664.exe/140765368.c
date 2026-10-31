/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765368 */

void FUN_140765368(void)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  uint uVar4;
  
  uVar3 = (ulonglong)unaff_retaddr_00;
  uVar4 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar2 = (ulonglong)uVar4;
  *(uint *)(uVar2 + 0x3a0) = unaff_retaddr_00;
  *(uint *)(uVar2 + 0x3b8) = uVar4;
  *(uint *)(uVar2 + 0x3a8) = uVar4;
  *(uint *)(uVar2 + 0x3ac) = uVar4;
  *(uint *)(uVar2 + 0x3b0) = uVar4;
  *(uint *)(uVar2 + 0x3b4) = uVar4;
  if ((((unaff_retaddr & 0x3000000) == 0x1000000 && unaff_retaddr_00 != 0) &&
      (*(undefined4 *)(uVar2 + 0x3b0) = *(undefined4 *)(uVar3 + 0x3b0),
      (*(byte *)(uVar2 + 0x409) & 1) == 0)) && ((*(byte *)(uVar3 + 0xe) & 0x80) == 0)) {
    *(undefined4 *)(uVar2 + 0x3a8) = *(undefined4 *)(uVar3 + 0x3a8);
  }
  if ((unaff_retaddr_00 != 0) && ((unaff_retaddr & 0x4000000) != 0)) {
    *(undefined4 *)(uVar2 + 0x3ac) = *(undefined4 *)(uVar3 + 0x3ac);
  }
  if (((unaff_retaddr_00 != 0) && ((unaff_retaddr & 0x8000000) == 0)) &&
     ((unaff_retaddr & 0x7000000) != 0)) {
    *(undefined4 *)(uVar2 + 0x3b4) = *(undefined4 *)(uVar3 + 0x3b4);
  }
  if ((*(byte *)(uVar2 + 0x15) & 1) != 0) {
    uVar3 = (ulonglong)uVar4;
    do {
      puVar1 = (uint *)(uVar3 + 0x3a0);
      uVar3 = (ulonglong)*puVar1;
      *(uint *)(uVar2 + 0x3b8) = *puVar1;
    } while ((*(byte *)(uVar3 + 0x15) & 1) != 0);
  }
  return;
}

