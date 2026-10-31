/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f55ca */

void FUN_1800f55ca(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = FUN_180239630(0x18);
  FUN_1800f58ac(uVar1,param_2,param_3);
  lVar2 = FUN_18027d8f8(0,0,FUN_1800f5722,uVar1,0,param_1 + 1,uVar1,uVar1,uVar3);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

