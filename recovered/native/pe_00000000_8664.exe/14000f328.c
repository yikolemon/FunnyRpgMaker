/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000f328 */

void FUN_14000f328(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_140005ba2(*param_1,param_1[1] + 0x20);
  }
  if (param_1[1] != 0) {
    thunk_FUN_14018e090(param_1[1],0x50);
    return;
  }
  return;
}

