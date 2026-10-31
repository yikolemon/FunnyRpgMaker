/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140116263 */

undefined * FUN_140116263(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xe000) - 0x2000;
  if (uVar1 < 0x8000) {
    return *(undefined **)
            ((longlong)&PTR_s_FixedFit_140ec3bb3_0x16_140e8d7e0 + (ulonglong)(uVar1 >> 10));
  }
  return &DAT_140ecd5d9;
}

