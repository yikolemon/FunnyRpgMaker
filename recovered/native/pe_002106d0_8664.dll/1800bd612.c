/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd612 */

void FUN_1800bd612(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    lVar1 = (*DAT_180417868)(param_2 * 0x20,1);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x20 + lVar1;
    lVar1 = FUN_1800bd6ca(*param_3,*param_4,lVar1,param_1,param_1,uVar2);
    param_1[1] = lVar1;
  }
  return;
}

