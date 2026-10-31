/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012233e */

longlong FUN_18012233e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while ((lVar1 = param_1, lVar2 != 0 && (lVar1 = FUN_18012233e(), lVar1 == 0))) {
    param_1 = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}

