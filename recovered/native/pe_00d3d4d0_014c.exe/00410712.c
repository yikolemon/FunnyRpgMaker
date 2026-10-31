/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410712 */

undefined4 * __cdecl
FUN_00410712(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040bb79(param_3,param_3 + param_4,param_2);
  *param_1 = (int)((ulonglong)uVar1 >> 0x20);
  return param_1;
}

