/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eae26 */

ulonglong FUN_1407eae26(ulonglong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort unaff_retaddr;
  
  uVar3 = param_1 & 0xffffffff;
  if ((uint)unaff_retaddr < *(uint *)(param_1 + 0x18)) {
    uVar1 = *(ushort *)((ulonglong)*(uint *)(uVar3 + 0x20) + (ulonglong)unaff_retaddr * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)((uint)uVar1 * 0x2c + *(int *)(uVar3 + 0x2c));
    }
  }
  *(byte *)(uVar3 + 0x3f) = *(byte *)(uVar3 + 0x3f) | 8;
  uVar2 = FUN_1407eac09(uVar3);
  *(byte *)(uVar3 + 0x3f) = *(byte *)(uVar3 + 0x3f) & 0xf7;
  return uVar2;
}

