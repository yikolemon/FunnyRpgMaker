/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001a0f8 */

void FUN_18001a0f8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_2 >> 0x3d == 0) {
    lVar2 = FUN_1800013e0(param_2 * 8);
    lVar1 = lVar2 + param_2 * 8;
    local_40 = param_1;
    local_38 = lVar2;
    local_30 = param_2;
    FUN_18001621b(lVar2,lVar1);
    param_1[1] = lVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar2;
    local_38 = 0;
    FUN_18001a206(&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0xc);
}

