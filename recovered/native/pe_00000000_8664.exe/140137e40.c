/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140137e40 */

ulonglong FUN_140137e40(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar4 = 0;
  if (2 < (longlong)iVar1) {
    uVar3 = FUN_1401382e0();
    iVar5 = -0x80000000;
    uVar4 = 0;
    uVar6 = 0;
    do {
      if (((uVar3 != uVar6) &&
          (iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar6 * 4), iVar5 < iVar2)) &&
         (*(int *)(*(longlong *)(param_1 + 0x38) + uVar6 * 4) <
          *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar3 * 4))) {
        uVar4 = uVar6 & 0xffffffff;
        iVar5 = iVar2;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)iVar1 != uVar6);
  }
  return uVar4;
}

