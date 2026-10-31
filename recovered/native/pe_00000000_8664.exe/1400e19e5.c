/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e19e5 */

void FUN_1400e19e5(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x6c);
  if ((fVar1 == DAT_1401c86c8) && (!NAN(fVar1) && !NAN(DAT_1401c86c8))) {
    return;
  }
  FUN_1400e19ff();
  return;
}

