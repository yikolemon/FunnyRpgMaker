/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e6480 */

void FUN_101e6480(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  FUN_101c0017(uVar1,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

