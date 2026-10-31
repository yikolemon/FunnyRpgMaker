/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ef42 */

ulonglong FUN_14076ef42(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 & 0xffffffff;
  uVar1 = *(uint *)(param_1 + 0x3c0);
  if ((((uVar1 == 0) || (uVar2 = (ulonglong)uVar1, *(char *)((ulonglong)uVar1 + 0xfa) == '\0')) &&
      (uVar2 = uVar3, *(uint *)(uVar3 + 0x434) != 0)) &&
     (*(int *)((ulonglong)*(uint *)(uVar3 + 0x434) + 0x30) != 0)) {
    uVar1 = FUN_1407a753e();
    if (uVar1 != 0) {
      uVar2 = (ulonglong)*(uint *)((ulonglong)uVar1 + 8);
    }
  }
  return uVar2;
}

