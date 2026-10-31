/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140330626 */

void FUN_140330626(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_140340d49();
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_140310f58(param_1 + 0x2930,*param_2,0);
  FUN_140340e24(param_2);
  return;
}

