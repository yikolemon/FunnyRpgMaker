/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1946 */

undefined4 FUN_101c1946(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = FUN_101c2dce(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 4),param_1,param_2
                        );
    return uVar1;
  }
  return 6;
}

