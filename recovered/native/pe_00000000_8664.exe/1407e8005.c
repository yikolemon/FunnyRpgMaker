/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8005 */

int FUN_1407e8005(void)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong unaff_RBX;
  uint unaff_EBP;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (unaff_EBP != 0xffffffff) {
    uVar1 = *(uint *)((unaff_RBX >> 0x20) + 0x290);
    if (uVar1 == 0) {
      FUN_1407e71e3();
      uVar1 = *(uint *)((unaff_RBX >> 0x20) + 0x290);
    }
    uVar2 = (ulonglong)uVar1;
    iVar3 = iVar4;
    if ((((int)(unaff_EBP & 0x7ffff) < *(int *)(uVar2 + 0x68)) &&
        (uVar1 = *(uint *)((ulonglong)*(uint *)(uVar2 + 0x70) + (ulonglong)(unaff_EBP & 0x7ffff) * 4
                          ), (uVar1 >> 0x1e & 1) != 0)) && (((unaff_EBP ^ uVar1) & 0x3ff00000) == 0)
       ) {
      iVar3 = ((int)(uVar1 << 0xc) >> 9) + *(int *)(uVar2 + 100);
    }
  }
  return iVar3;
}

