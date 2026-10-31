/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c09b0 */

byte FUN_1401c09b0(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_140f331b0)) {
      return *(byte *)((&DAT_140f32db0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 9;
    FUN_1401ae640();
  }
  return 0;
}

