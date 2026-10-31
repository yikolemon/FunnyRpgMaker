/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3c90 */

int FUN_1408d3c90(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar2 = *(int *)(uVar5 + 0x10);
  if (iVar2 != 0) {
    uVar4 = *(uint *)(uVar5 + 0xc);
    uVar3 = *(uint *)(uVar5 + 8);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (((iVar2 == 0) || (uVar1 = *(ushort *)(ulonglong)uVar3, uVar1 == 0)) ||
         (uVar1 != *(ushort *)(ulonglong)uVar4)) break;
      uVar3 = uVar3 + 2;
      uVar4 = uVar4 + 2;
    }
    return (uint)*(ushort *)(ulonglong)uVar3 - (uint)*(ushort *)(ulonglong)uVar4;
  }
  return 0;
}

