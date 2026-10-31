/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a01b8 */

void FUN_1400a01b8(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_14009dbc0(param_1,param_2);
    lVar1 = *param_1 + param_2 * 4;
    FUN_140016e3e(*param_1,lVar1,param_3,param_4,param_1,uVar2);
    param_1[1] = lVar1;
  }
  return;
}

