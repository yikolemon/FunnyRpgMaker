/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068c32 */

void FUN_140068c32(undefined1 (*param_1) [32],longlong param_2,undefined8 param_3,undefined8 param_4
                  ,undefined4 param_5)

{
  FUN_1400b3c00(param_1,0,0x1828);
  (*param_1)[0x19] = *(undefined1 *)(param_2 + 0x100);
  *(undefined4 *)(*param_1 + 0x1c) = param_5;
  *(longlong *)*param_1 = param_2;
  *(undefined8 *)(*param_1 + 8) = param_3;
  *(undefined8 *)(*param_1 + 0x10) = param_4;
  return;
}

