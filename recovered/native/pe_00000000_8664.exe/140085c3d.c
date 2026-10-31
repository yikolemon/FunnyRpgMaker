/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140085c3d */

void FUN_140085c3d(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = DAT_140f2a910;
  iVar3 = 0;
  if ((*(int *)(DAT_140f2a910 + 0x2b84) + 1 == *(int *)(DAT_140f2a910 + 4)) &&
     (iVar3 = *(int *)(DAT_140f2a910 + 0x1668), iVar3 == 0)) {
    iVar3 = *(int *)(DAT_140f2a910 + 0x167c);
  }
  uVar2 = FUN_1400ab834(DAT_140f2a910 + 0x2b48,iVar3);
  *(undefined4 *)(lVar1 + 0x1660) = uVar2;
  return;
}

