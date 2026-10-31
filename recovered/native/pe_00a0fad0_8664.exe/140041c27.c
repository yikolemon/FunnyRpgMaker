/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041c27 */

undefined8 * FUN_140041c27(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  uVar1 = param_3[1];
  if (uVar1 == 0) {
    return param_1;
  }
  if (uVar1 >> 0x1f == 0) {
    uVar1 = FUN_1400dd0b0(param_2,*param_3,uVar1,0,0,param_1,0xfffffffffffffffe);
    if (uVar1 >> 0x20 == 0) {
      FUN_140024d7e(param_1,(longlong)(int)uVar1,0);
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      uVar1 = FUN_1400dd0b0(param_2,*param_3,*(undefined4 *)(param_3 + 1),puVar2,(int)uVar1,param_1,
                            uVar3);
      if (uVar1 >> 0x20 == 0) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140041e82(uVar1 >> 0x20);
    }
  }
  else {
    FUN_140041d16(0x16);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140041e82();
}

