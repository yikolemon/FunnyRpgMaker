/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cfa3 */

void FUN_14003cfa3(longlong param_1,uint *param_2)

{
  FUN_140046589(param_1,CONCAT22((short)((ulonglong)param_2 >> 0x10),0x4000),*param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 6;
  *(undefined1 **)(param_1 + 0x2c8) = &LAB_14004664f;
  return;
}

