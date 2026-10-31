/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077696 */

longlong FUN_140077696(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_1401c5830(param_1,0,0x160,param_4,0xfffffffffffffffe);
  *(undefined2 *)(param_1 + 0x38) = 0x2e;
  return param_1;
}

