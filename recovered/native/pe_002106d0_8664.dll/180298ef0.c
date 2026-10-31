/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298ef0 */

undefined8 FUN_180298ef0(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_18027e690();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180421800)) {
      if ((*(byte *)((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180421400)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_18027e690();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 9;
    FUN_180290a50();
  }
  return 0xffffffffffffffff;
}

