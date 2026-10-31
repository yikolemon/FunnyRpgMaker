/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f7e0 */

void FUN_1014f7e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1014f645(param_1,param_2);
  if (iVar1 != 0) {
    FUN_1025b2d0(iVar1,iVar1 + 0x30,
                 (~(((uint)(iVar1 - *(int *)(param_1 + 0xc)) >> 4) * -0x55555555) +
                 *(int *)(param_1 + 4)) * 0x30);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  if (*(int *)(param_1 + 0x24) == param_2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x18) == param_2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) == param_2) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

