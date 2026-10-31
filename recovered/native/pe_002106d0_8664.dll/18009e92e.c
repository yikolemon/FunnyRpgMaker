/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e92e */

void FUN_18009e92e(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_180065888(param_1,param_2);
    lVar1 = *param_1 + param_2 * 4;
    FUN_18001621b(*param_1,lVar1,param_3,param_4,param_1,uVar2);
    param_1[1] = lVar1;
  }
  return;
}

