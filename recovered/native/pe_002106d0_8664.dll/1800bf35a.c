/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf35a */

void FUN_1800bf35a(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((longlong)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  if (param_3 < 0x10) {
    *(ulonglong *)(param_1 + 0x18) = param_3;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
  uVar2 = 0x16;
  if (0x16 < (param_3 | 0xf)) {
    uVar2 = param_3 | 0xf;
  }
  uVar1 = (*DAT_180417868)(uVar2 + 1,1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(ulonglong *)(param_1 + 0x18) = param_3;
  *(ulonglong *)(param_1 + 0x20) = uVar2;
  FUN_1802a82f0(uVar1,param_2,param_3 + 1);
  return;
}

