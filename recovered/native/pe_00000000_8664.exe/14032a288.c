/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032a288 */

undefined8 FUN_14032a288(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(DAT_14062a630 + 0xb5a + (longlong)param_1 * 2) == 2) {
    uVar1 = FUN_140329f87(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

