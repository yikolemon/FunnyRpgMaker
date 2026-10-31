/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769991 */

undefined1 FUN_140769991(void)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  undefined1 unaff_retaddr;
  int iVar5;
  
  iVar5 = (int)(unaff_RBX >> 0x20);
  uVar4 = unaff_RBX & 0xffffffff;
  iVar3 = FUN_1407699de(uVar4,unaff_retaddr);
  if (iVar3 == iVar5) {
    uVar2 = 1;
  }
  else if ((int)unaff_RBX == 0) {
    uVar2 = 0;
  }
  else {
    do {
      if ((int)uVar4 == iVar5) {
        return 1;
      }
      if ((int)uVar4 == iVar3) {
        return 0;
      }
      puVar1 = (uint *)(uVar4 + 0x3a0);
      uVar4 = (ulonglong)*puVar1;
      uVar2 = 0;
    } while (*puVar1 != 0);
  }
  return uVar2;
}

