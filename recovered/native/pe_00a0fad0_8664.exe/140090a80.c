/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140090a80 */

void FUN_140090a80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    lVar2 = FUN_140006280(lVar1);
    lVar3 = lVar2;
    local_48 = param_1;
    local_38 = param_2;
    if (param_2 != 0) {
      local_40 = lVar2;
      FUN_1401366a0(lVar2,0,lVar1);
      lVar3 = lVar2 + lVar1;
    }
    param_1[1] = lVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar2;
    local_40 = 0;
    FUN_14009043a(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9f90(0xc);
}

