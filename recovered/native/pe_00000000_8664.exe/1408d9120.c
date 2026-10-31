/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d9120 */

int FUN_1408d9120(void)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined2 in_FPUControlWord;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  *(undefined2 *)(uVar2 - 4) = in_FPUControlWord;
  uVar1 = (ushort)*(undefined4 *)(uVar2 + 0xc);
  *(ushort *)(uVar2 - 8) =
       ~uVar1 & *(ushort *)(uVar2 - 4) | uVar1 & (ushort)*(undefined4 *)(uVar2 + 8);
  return (int)*(short *)(uVar2 - 4);
}

