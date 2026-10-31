/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c288 */

undefined8 FUN_14012c288(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_140113df8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1403555e0)) {
      if ((*(byte *)((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1403551e0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_140113df8();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 9;
    FUN_140120ee8();
  }
  return 0xffffffffffffffff;
}

