/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db045 */

uint FUN_1408db045(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  
  if ((param_2[1] & 0x7ff00000) != 0x7ff00000) {
    return param_2[1] & 0x7ff00000;
  }
  piVar2 = (int *)(ulonglong)((int)&stack0x00000000 - 10);
  *(uint *)((longlong)piVar2 + 6) = param_2[1] | 0x7fff0000;
  uVar1 = *param_2;
  piVar2[1] = param_2[1] << 0xb | uVar1 >> 0x15;
  *piVar2 = uVar1 << 0xb;
  return param_2[1];
}

