/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf190 */

void FUN_1800bf190(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    lVar1 = (*DAT_180417868)(param_2 * 0x28,1);
    *(longlong *)(param_1 + 8) = lVar1;
    *(longlong *)(param_1 + 0x10) = lVar1;
    *(ulonglong *)(param_1 + 0x18) = param_2 * 0x28 + lVar1;
    uVar2 = FUN_1800bf250(*param_3,*param_4,lVar1,param_1,param_1,uVar2);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return;
}

