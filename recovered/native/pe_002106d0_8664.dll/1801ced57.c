/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ced57 */

void FUN_1801ced57(longlong param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_1801c9b65(*(undefined8 *)(param_1 + 0x30),*param_2);
  }
  *param_2 = 0;
  return;
}

