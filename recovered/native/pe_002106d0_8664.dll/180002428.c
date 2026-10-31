/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002428 */

void FUN_180002428(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (-1 < (longlong)param_3) {
    uVar2 = 0xf;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar2 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar2 = param_3 | 0xf;
      }
      puVar1 = (undefined8 *)FUN_1800013e0(uVar2 + 1);
      *param_1 = puVar1;
    }
    param_1[2] = param_3;
    param_1[3] = uVar2;
    FUN_1802a82f0(puVar1,param_2,param_3);
    *(undefined1 *)((longlong)puVar1 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800013a5();
}

