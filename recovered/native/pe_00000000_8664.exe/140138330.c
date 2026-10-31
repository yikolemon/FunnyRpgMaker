/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140138330 */

ulonglong FUN_140138330(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if ((longlong)*(int *)(param_1 + 0x2c) < 1) {
    uVar3 = 0;
  }
  else {
    iVar5 = -0x80000000;
    iVar6 = 0x7fffffff;
    uVar4 = 0;
    uVar3 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + uVar4 * 4);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar4 * 4);
      if ((iVar1 < iVar6) || ((iVar1 == iVar6 && (iVar2 < iVar5)))) {
        uVar3 = uVar4 & 0xffffffff;
        iVar6 = iVar1;
        iVar5 = iVar2;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x2c) != uVar4);
  }
  return uVar3;
}

