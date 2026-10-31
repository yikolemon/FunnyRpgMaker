/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025630 */

void FUN_180025630(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_13;
  undefined7 uStack_f;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_18 = 0x8000;
  local_14 = 0x20;
  uStack_f = 0xffffffff000000;
  local_13 = 0;
  local_28 = 0;
  thunk_FUN_18002b0a3(local_20,*param_1,param_2);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

