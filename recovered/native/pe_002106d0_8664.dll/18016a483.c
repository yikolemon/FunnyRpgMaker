/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a483 */

undefined1 * FUN_18016a483(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_1803861e4;
  if (((*(char *)(param_1 + 0x239) != '\0') || (param_2 < *(short *)(param_1 + 0x206))) &&
     (lVar2 = (longlong)*(short *)(*(longlong *)(param_1 + 0x18) + 0x54 + (longlong)param_2 * 0x74),
     lVar2 != -1)) {
    puVar1 = (undefined1 *)(lVar2 + *(longlong *)(param_1 + 0x198));
  }
  return puVar1;
}

