/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019f30 */

void FUN_180019f30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 >> 0x3c == 0) {
    lVar3 = param_2 * 0x10;
    lVar1 = FUN_1800013e0(lVar3);
    lVar2 = lVar1;
    local_48 = param_1;
    local_38 = param_2;
    if (param_2 != 0) {
      local_40 = lVar1;
      FUN_1802a89a0(lVar1,0,lVar3);
      lVar2 = lVar1 + lVar3;
    }
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar1;
    local_40 = 0;
    FUN_180016958(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0xc);
}

