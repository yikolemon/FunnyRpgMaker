/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6801 */

uint FUN_1408b6801(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  if (*(uint *)(uVar1 + 0xc) + 1 < 0x101) {
    return (uint)*(ushort *)
                  ((ulonglong)*(uint *)(uVar1 + 8) + (ulonglong)*(uint *)(uVar1 + 0xc) * 2) &
           *(uint *)(uVar1 + 0x10);
  }
  return 0;
}

