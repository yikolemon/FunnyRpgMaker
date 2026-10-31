/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce92d */

void FUN_1400ce92d(undefined8 param_1,undefined4 *param_2)

{
  if (param_2[1] != param_2[2]) {
    FUN_1400cf227(param_2);
    FUN_1400c0656(param_1,param_2);
    *param_2 = param_2[2];
    param_2[1] = param_2[2];
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}

