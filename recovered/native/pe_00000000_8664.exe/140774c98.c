/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774c98 */

ulonglong FUN_140774c98(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 & 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = FUN_140774c98();
    if (uVar2 != 0) break;
    uVar3 = (ulonglong)*(uint *)(uVar3 + 0x20);
    iVar1 = *(int *)(uVar3 + 0x1c);
  }
  return (ulonglong)uVar2;
}

