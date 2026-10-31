/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003b6c */

void FUN_140003b6c(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if ((longlong)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return;
  }
  uVar3 = 0x16;
  if (0x16 < (param_3 | 0xf)) {
    uVar3 = param_3 | 0xf;
  }
  puVar2 = (undefined8 *)FUN_140002650(uVar3 + 1);
  *param_1 = puVar2;
  param_1[2] = param_3;
  param_1[3] = uVar3;
  FUN_1400b3550(puVar2,param_2,param_3 + 1);
  return;
}

