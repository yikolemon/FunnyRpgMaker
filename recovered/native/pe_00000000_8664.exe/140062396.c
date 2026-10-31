/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140062396 */

void FUN_140062396(longlong *param_1,ulonglong param_2)

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
    lVar1 = FUN_140001fba(lVar3);
    lVar2 = lVar1;
    local_48 = param_1;
    local_38 = param_2;
    if (param_2 != 0) {
      local_40 = lVar1;
      FUN_1401c5830(lVar1,0,lVar3);
      lVar2 = lVar1 + lVar3;
    }
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar1;
    local_40 = 0;
    FUN_140006896(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0xc);
}

