/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400852c6 */

void FUN_1400852c6(undefined1 (*param_1) [32],longlong param_2)

{
  FUN_1400b3c00(param_1,0,0xd8);
  *(longlong *)(param_1[6] + 8) = param_2;
  *(undefined8 *)(param_1[6] + 0x10) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1[2] + 0x18) = 0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined4 *)(param_1[3] + 8) = 0;
  *(undefined1 **)(param_1[3] + 0x10) = param_1[4] + 8;
  *(undefined8 *)param_1[4] = 0x40;
  FUN_1400852a6((undefined8 *)param_1);
  return;
}

