/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0a65 */

void FUN_101c0a65(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    FUN_101c0a53(param_1);
    if (param_2 == 0) {
      FUN_101c0017(uVar1,param_1);
    }
  }
  return;
}

