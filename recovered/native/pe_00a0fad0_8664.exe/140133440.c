/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140133440 */

undefined8 FUN_140133440(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
  }
  return 0x7fffffff;
}

