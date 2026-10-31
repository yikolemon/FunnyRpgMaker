/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118d95 */

undefined8 FUN_180118d95(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_180419160 + 0xb6e + (longlong)param_1) == '\x01') {
    uVar1 = FUN_180118ab7(param_1 + 0x290);
    return uVar1;
  }
  return 0;
}

