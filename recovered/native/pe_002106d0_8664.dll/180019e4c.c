/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019e4c */

void FUN_180019e4c(longlong *param_1,ulonglong param_2)

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
    lVar2 = FUN_1800013e0(lVar1);
    lVar3 = lVar2;
    local_48 = param_1;
    local_38 = param_2;
    if (param_2 != 0) {
      local_40 = lVar2;
      FUN_1802a89a0(lVar2,0,lVar1);
      lVar3 = lVar2 + lVar1;
    }
    param_1[1] = lVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar2;
    local_40 = 0;
    FUN_18001980e(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0xc);
}

