/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119e21 */

void FUN_180119e21(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x1608);
  *(undefined8 *)(lVar1 + 0x158) = *param_1;
  *(undefined1 *)(lVar1 + 0x199) = 1;
  return;
}

