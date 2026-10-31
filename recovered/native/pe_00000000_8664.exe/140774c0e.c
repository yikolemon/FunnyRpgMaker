/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774c0e */

int FUN_140774c0e(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong unaff_R15;
  
  uVar3 = (ulonglong)*(uint *)((ulonglong)*(uint *)(param_1 + 0x430) + 0x30);
  iVar2 = 0;
  if ((uVar3 & unaff_R15) != 0) {
    iVar1 = FUN_1407a7515();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar1 - *(int *)(uVar3 + 0xc) >> 4) * -0x55555555;
    }
  }
  return iVar2;
}

