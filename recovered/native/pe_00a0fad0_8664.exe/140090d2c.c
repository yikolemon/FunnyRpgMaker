/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140090d2c */

void FUN_140090d2c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_2 >> 0x3d == 0) {
    lVar2 = FUN_140006280(param_2 * 8);
    lVar1 = lVar2 + param_2 * 8;
    local_40 = param_1;
    local_38 = lVar2;
    local_30 = param_2;
    FUN_140016e3e(lVar2,lVar1);
    param_1[1] = lVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar2;
    local_38 = 0;
    FUN_140032264(&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9f90(0xc);
}

