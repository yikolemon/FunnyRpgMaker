/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402775e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402775e2(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  if (param_3 < 4) {
    param_1[2] = param_3;
    param_1[3] = 3;
    FUN_1404b97c0(param_1,param_2,param_3 * 4);
    *(undefined4 *)((longlong)param_1 + param_3 * 4) = 0;
  }
  else {
    local_38 = param_3 | 3;
    if (0x3ffffffffffffffd < local_38) {
      local_38 = 0x3ffffffffffffffe;
    }
    lVar1 = FUN_140274b1e(param_1,&local_38);
    *param_1 = lVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_1404b97c0(lVar1,param_2,param_3 * 4);
    *(undefined4 *)(lVar1 + param_3 * 4) = 0;
  }
  if (ram0x000140613b10 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_30 ^ (ulonglong)auStack_58);
}

