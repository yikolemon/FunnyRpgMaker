/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ff4e */

uint FUN_1026ff4e(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_102743cd();
  uVar2 = *(int *)(iVar1 + 0x18) * 0x343fd + 0x269ec3;
  *(uint *)(iVar1 + 0x18) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

