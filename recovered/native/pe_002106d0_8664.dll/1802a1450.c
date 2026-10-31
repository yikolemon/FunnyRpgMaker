/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a1450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1802a1450(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_180358000 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_1802ac564,
                       (uint)param_1 & _DAT_1802ac560)) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x22;
  }
  return (uint)param_1;
}

