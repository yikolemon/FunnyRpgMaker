/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d2e0 */

ulonglong FUN_18028d2e0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18028d260(0x180000000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_18028d290(0x180000000,param_1 + -0x180000000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}

