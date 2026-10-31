/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035d88 */

ulonglong FUN_140035d88(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = 0;
  if (2 < (longlong)iVar1) {
    uVar4 = FUN_140036228(param_1);
    iVar5 = -0x80000000;
    uVar3 = 0;
    uVar6 = 0;
    do {
      if ((((uVar4 & 0xffffffff) != uVar6) &&
          (iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4), iVar5 < iVar2)) &&
         (*(int *)(*(longlong *)(param_1 + 0x38) + uVar6 * 4) <
          *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar4 * 4))) {
        uVar3 = uVar6 & 0xffffffff;
        iVar5 = iVar2;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)iVar1 != uVar6);
  }
  return uVar3;
}

