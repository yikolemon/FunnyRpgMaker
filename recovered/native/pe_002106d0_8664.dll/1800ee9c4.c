/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ee9c4 */

undefined1 FUN_1800ee9c4(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = _Xtime_get_ticks();
  lVar3 = lVar3 - *(longlong *)(param_1 + 0x2010);
  lVar1 = lVar3 / 10000;
  uVar2 = 3;
  if ((lVar1 <= (longlong)*(int *)(param_1 + 0x2008) + 300) &&
     (uVar2 = 2, lVar1 <= (longlong)*(int *)(param_1 + 0x2008) + 0x96)) {
    uVar2 = 0x170a6f < lVar3;
  }
  return uVar2;
}

