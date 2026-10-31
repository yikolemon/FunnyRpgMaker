/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021d02 */

void FUN_180021d02(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_180239630(8);
  *puVar1 = param_2;
  lVar2 = FUN_18027d8f8(0,0,FUN_180021da2,puVar1,0,param_1 + 1,puVar1,uVar3);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

