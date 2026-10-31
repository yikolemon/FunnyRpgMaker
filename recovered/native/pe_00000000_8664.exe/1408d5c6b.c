/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d5c6b */

void FUN_1408d5c6b(void)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  *(undefined8 *)((ulonglong)((int)&stack0xfffffffffffffff8 - 0xc) - 8) = unaff_RBX;
  if ((*(ushort *)(uVar2 + 0xe) & 0x7ff0) == 0x7ff0) {
    *(ushort *)(uVar2 - 2) = *(ushort *)(uVar2 + 0xe) | 0x7fff;
    uVar1 = *(uint *)(uVar2 + 8);
    *(uint *)(uVar2 - 6) = *(int *)(uVar2 + 0xc) << 0xb | uVar1 >> 0x15;
    *(uint *)(uVar2 - 10) = uVar1;
  }
  return;
}

