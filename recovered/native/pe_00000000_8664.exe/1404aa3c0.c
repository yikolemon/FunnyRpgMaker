/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aa3c0 */

undefined8 FUN_1404aa3c0(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_14048fb60();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_140632cd0)) {
      if ((*(byte *)((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1406328d0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_14048fb60();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 9;
    FUN_1404a1f20();
  }
  return 0xffffffffffffffff;
}

