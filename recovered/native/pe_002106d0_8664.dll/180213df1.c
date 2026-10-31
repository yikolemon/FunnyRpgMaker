/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213df1 */

undefined8 FUN_180213df1(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x58) != 3) {
    *(undefined4 *)(param_1 + 0x58) = 3;
    uVar1 = FUN_180213d85();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_180213d48(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

