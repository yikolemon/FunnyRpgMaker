/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a9ad */

undefined8 FUN_14014a9ad(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_14012ea51(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + (param_2 & 0xffffffff) * 8)
                ,param_4);
  return 0;
}

