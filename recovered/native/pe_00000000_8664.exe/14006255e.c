/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006255e */

void FUN_14006255e(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_2 >> 0x3d == 0) {
    lVar2 = FUN_140001fba(param_2 * 8);
    lVar1 = lVar2 + param_2 * 8;
    local_40 = param_1;
    local_38 = lVar2;
    local_30 = param_2;
    FUN_14003d090(lVar2,lVar1);
    param_1[1] = lVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = lVar2;
    local_38 = 0;
    FUN_14000d584(&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0xc);
}

