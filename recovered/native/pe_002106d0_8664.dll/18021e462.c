/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e462 */

undefined8 FUN_18021e462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  FUN_18021f221(lVar1,*(undefined8 *)(param_1 + 0x10));
  FUN_18021f244(param_1 + 0x90);
  FUN_18021f265(param_1 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  FUN_18021f2af(param_1 + 0xe0);
  *(longlong *)(param_1 + 0xe0) = lVar1;
  return 0;
}

