/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd947 */

void FUN_1407bd947(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong unaff_RBX;
  uint unaff_retaddr;
  
  uVar2 = (ulonglong)unaff_retaddr;
  if ((*(short *)(uVar2 + 0x5e) != -1) &&
     (bVar1 = *(byte *)(uVar2 + 0x71), ((bVar1 >> 4) >> (bVar1 & 3) & 1) == 0)) {
    *(byte *)(uVar2 + 0x71) = bVar1 & 0xfc | *(byte *)(uVar2 + 0x72) & 3;
    *(undefined1 *)((unaff_RBX >> 0x20) + 0x1f0) = 1;
  }
  return;
}

