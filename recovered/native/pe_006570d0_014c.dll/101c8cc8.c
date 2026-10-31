/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8cc8 */

int FUN_101c8cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_101c8d2e(param_1,param_2,param_3);
  iVar2 = FUN_101c8d2e(param_2);
  iVar3 = FUN_101c8d2e(param_3);
  return iVar3 + (iVar2 << 8 | iVar1 << 0x10) + -0x1000000;
}

