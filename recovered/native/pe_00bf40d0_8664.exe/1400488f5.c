/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400488f5 */

undefined8 FUN_1400488f5(longlong param_1,ulonglong param_2,char *param_3,uint param_4)

{
  FUN_140021e80(param_3,*(char **)(*(longlong *)(param_1 + 0x248) + (param_2 & 0xffffffff) * 8),
                param_4);
  return 0;
}

