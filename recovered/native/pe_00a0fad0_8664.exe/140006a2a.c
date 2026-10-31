/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140006a2a */

void FUN_140006a2a(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((longlong)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return;
  }
  uVar2 = 0x16;
  if (0x16 < (param_3 | 0xf)) {
    uVar2 = param_3 | 0xf;
  }
  uVar1 = FUN_140006280(uVar2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  FUN_140135ff0(uVar1,param_2,param_3 + 1);
  return;
}

