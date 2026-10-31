/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f37c4 */

void FUN_1800f37c4(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180239630(1);
  lVar2 = FUN_18027d8f8(0,0,FUN_1800f388c,uVar1,0,param_1 + 1);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

