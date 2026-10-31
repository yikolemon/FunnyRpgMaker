/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401be660 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1401be660(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_140ebc2d0 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_1401ced54,
                       (uint)param_1 & _DAT_1401ced50)) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x22;
  }
  return (uint)param_1;
}

