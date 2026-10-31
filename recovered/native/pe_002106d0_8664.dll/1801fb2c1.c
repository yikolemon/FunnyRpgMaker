/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fb2c1 */

undefined8 FUN_1801fb2c1(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1801cfa7d(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + (param_2 & 0xffffffff) * 8)
                ,param_4);
  return 0;
}

