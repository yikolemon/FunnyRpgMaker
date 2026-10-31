/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116bd5 */

undefined8 FUN_180116bd5(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x1608) + 800);
}

