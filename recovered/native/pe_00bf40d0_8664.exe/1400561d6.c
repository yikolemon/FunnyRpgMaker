/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400561d6 */

undefined8 FUN_1400561d6(int *param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if ((((*param_1 != 0x50465230) || (4 < (uint)param_1[1])) || ((uint)param_1[3] < 0x3a)) ||
     (uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1), param_1[2] != 0xd0a)) {
    uVar1 = 0;
  }
  return uVar1;
}

