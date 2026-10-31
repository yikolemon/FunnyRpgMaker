/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e3f8 */

undefined4 FUN_18016e3f8(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xc);
  }
  return 0;
}

