/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140158286 */

undefined8 FUN_140158286(int *param_1)

{
  undefined8 uVar1;
  
  if ((((*param_1 != 0x50465230) || (4 < (uint)param_1[1])) || ((uint)param_1[3] < 0x3a)) ||
     (uVar1 = 1, param_1[2] != 0xd0a)) {
    uVar1 = 0;
  }
  return uVar1;
}

