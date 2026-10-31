/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140265226 */

void FUN_140265226(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_140228230(*param_1,param_1[1] + 0x20);
  }
  if (param_1[1] != 0) {
    thunk_FUN_1404a2310(param_1[1],0x50);
    return;
  }
  return;
}

