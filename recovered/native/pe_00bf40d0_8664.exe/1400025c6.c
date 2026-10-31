/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400025c6 */

void FUN_1400025c6(ulonglong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  if (-1 < (longlong)param_3) {
    uVar2 = 0xf;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar2 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar2 = param_3 | 0xf;
      }
      puVar1 = (ulonglong *)FUN_140002650(uVar2 + 1);
      *param_1 = (ulonglong)puVar1;
    }
    param_1[2] = param_3;
    param_1[3] = uVar2;
    FUN_1400b3550(puVar1,param_2,param_3);
    *(undefined1 *)((longlong)puVar1 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000263f();
}

