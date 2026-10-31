/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140082007 */

ulonglong FUN_140082007(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x14) >> 0x19 & 1;
  uVar3 = *(uint *)(param_2 + 0x14) >> 0x19 & 1;
  if (uVar2 != uVar3) {
    return (ulonglong)(uVar3 < uVar2);
  }
  uVar4 = (ulonglong)*(uint *)(DAT_140f2a910 + 0x15a8);
  while( true ) {
    if ((int)uVar4 < 1) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x15b0) + -8 + uVar4 * 8);
    if (lVar1 == param_1) break;
    uVar4 = uVar4 - 1;
    if (lVar1 == param_2) {
      return 0;
    }
  }
  return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),1);
}

