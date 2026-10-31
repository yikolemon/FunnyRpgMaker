/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be8b8 */

/* WARNING: Instruction at (ram,0x0001408be8d8) overlaps instruction at (ram,0x0001408be8d7)
    */

void FUN_1408be8b8(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint unaff_R14D;
  
  bVar1 = *(byte *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (ulonglong)(bVar1 >> 3);
  *(byte *)(uVar2 + param_1) =
       *(byte *)(uVar2 + param_1) | (byte)(1 << (bVar1 & 0x80000007)) |
       (byte)(1 << (unaff_R14D & 0x1f));
  return;
}

