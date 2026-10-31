/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5692 */

ulonglong FUN_1408c5692(void)

{
  uint uVar1;
  undefined7 uVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (undefined7)(((ulonglong)uVar1 & 0xffffffffffffff03) >> 8);
  if (((char)((ulonglong)uVar1 & 0xffffffffffffff03) == '\x02') && ((uVar1 & 0xc0) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return CONCAT71(uVar2,(char)(uVar1 >> 0xb)) & 0xffffffffffffff01;
}

