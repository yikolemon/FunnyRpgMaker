/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca684 */

void FUN_1801ca684(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    FUN_1801ca672();
    if (param_2 == 0) {
      FUN_1801c9b65(uVar1,param_1);
      return;
    }
  }
  return;
}

