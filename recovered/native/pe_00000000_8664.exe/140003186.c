/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003186 */

void FUN_140003186(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

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
      puVar1 = (undefined8 *)FUN_140001fba(uVar2 + 1);
      *param_1 = puVar1;
    }
    param_1[2] = param_3;
    param_1[3] = uVar2;
    FUN_1401c5180(puVar1,param_2,param_3);
    *(undefined1 *)((longlong)puVar1 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002673();
}

