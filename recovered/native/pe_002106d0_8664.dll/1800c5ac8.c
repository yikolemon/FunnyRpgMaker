/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5ac8 */

longlong FUN_1800c5ac8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18026eb10(param_2 + 8,0x1804022a8);
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x10;
  }
  return lVar2;
}

