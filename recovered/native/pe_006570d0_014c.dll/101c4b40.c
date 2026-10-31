/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4b40 */

void FUN_101c4b40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_101c4b69(param_1,param_2);
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

