/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118db8 */

undefined8 FUN_180118db8(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(DAT_180419160 + 0xb5a + (longlong)param_1 * 2) == 2) {
    uVar1 = FUN_180118ab7(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

