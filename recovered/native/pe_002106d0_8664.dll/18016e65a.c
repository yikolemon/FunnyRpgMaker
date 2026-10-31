/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e65a */

void FUN_18016e65a(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208);
  if (param_1 < 0) {
    param_1 = *(int *)(lVar1 + 0xc);
  }
  lVar1 = *(longlong *)(lVar1 + 0x68);
  FUN_18010f08e(lVar1 + (longlong)param_1 * 0x1c + 0xc,(longlong)param_1 * 0x1c + lVar1 + 0x14,0);
  return;
}

