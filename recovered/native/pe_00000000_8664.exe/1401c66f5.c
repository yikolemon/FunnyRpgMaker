/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c66f5 */

undefined4 FUN_1401c66f5(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}

