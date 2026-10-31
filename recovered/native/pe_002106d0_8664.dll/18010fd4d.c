/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010fd4d */

undefined8 FUN_18010fd4d(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_180419160 + 0x120 + (longlong)param_1) == '\x01') {
    uVar1 = FUN_180118ab7(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

