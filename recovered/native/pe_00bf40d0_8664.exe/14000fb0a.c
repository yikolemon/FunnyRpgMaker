/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fb0a */

void FUN_14000fb0a(longlong *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 auStack_48 [46];
  short local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (2 < (ulonglong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011c000);
  }
  pauVar1 = (undefined1 (*) [32])
            thunk_FUN_14000fc90((undefined8 *)*param_2,(longlong)*param_2 + param_2[1] * 2,
                                (undefined8 *)(*param_1 + 0x10));
  local_1a = 0;
  FUN_14000fc3b(pauVar1,(undefined1 (*) [32])(*param_1 + 0x14),&local_1a);
  *(undefined1 *)(*param_1 + 0xe) = *(undefined1 *)(param_2 + 1);
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

