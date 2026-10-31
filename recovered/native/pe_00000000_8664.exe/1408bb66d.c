/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bb66d */

ulonglong FUN_1408bb66d(void)

{
  ulonglong uVar1;
  uint *puVar2;
  
  uVar1 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  if (*(uint *)(uVar1 + 0x10) == 0) {
    FUN_1408b67dd();
    uVar1 = FUN_1408b6801();
    return uVar1;
  }
  puVar2 = (uint *)(ulonglong)*(uint *)(ulonglong)*(uint *)(uVar1 + 0x10);
  if (*(uint *)(uVar1 + 8) + 1 < 0x101) {
    uVar1 = (ulonglong)
            ((uint)*(ushort *)((ulonglong)*puVar2 + (ulonglong)*(uint *)(uVar1 + 8) * 2) &
            *(uint *)(uVar1 + 0xc));
  }
  else if ((int)puVar2[1] < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1408d06fe();
  }
  return uVar1;
}

