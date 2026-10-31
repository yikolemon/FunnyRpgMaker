/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dd4d0 */

uint FUN_1408dd4d0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = 0xffffffff;
  uVar3 = uVar1 >> 0xe;
  if ((uVar3 & 0x300) == (uVar1 >> 0x16 & 0x300)) {
    uVar2 = uVar3 & 0x300;
  }
  return uVar2;
}

