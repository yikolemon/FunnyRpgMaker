/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180208b58 */

undefined8 FUN_180208b58(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1801ce63e(param_2,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_1801cf0cc(param_2,&DAT_18033b100,param_1);
    if ((int)uVar1 == 0) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x48) * 0x10000;
      uVar1 = 0;
    }
  }
  return uVar1;
}

