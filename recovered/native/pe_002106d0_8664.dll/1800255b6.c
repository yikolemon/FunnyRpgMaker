/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800255b6 */

void FUN_1800255b6(undefined8 *param_1,undefined4 param_2)

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
  FUN_180025d67(local_20,*param_1,param_2);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

