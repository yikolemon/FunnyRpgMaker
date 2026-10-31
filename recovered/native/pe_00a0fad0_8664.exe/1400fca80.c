/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fca80 */

void FUN_1400fca80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  FUN_1400fc8d0(param_1,local_38,param_2,param_3);
  uVar1 = 0;
  if (local_28 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_28);
  }
  FUN_1400065bc(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

