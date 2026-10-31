/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e293 */

undefined * FUN_18016e293(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xe000) - 0x2000;
  if (uVar1 < 0x8000) {
    return *(undefined **)
            ((longlong)&PTR_s_FixedFit_180361cf1_0x16_1802df830 + (ulonglong)(uVar1 >> 10));
  }
  return &DAT_18036cf1c;
}

