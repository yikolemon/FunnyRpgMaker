/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cabfe */

void FUN_1800cabfe(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800cac7a();
    lVar1 = *param_1 + param_2 * 2;
    FUN_18001621b(*param_1,lVar1,param_3,param_4,param_1,uVar2);
    param_1[1] = lVar1;
  }
  return;
}

