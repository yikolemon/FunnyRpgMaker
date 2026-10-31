/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001ac7e */

void FUN_14001ac7e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_13;
  undefined7 uStack_f;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_18 = 0x8000;
  local_14 = 0x20;
  uStack_f = 0xffffffff000000;
  local_13 = 0;
  local_28 = 0;
  thunk_FUN_140020bd9(local_20,*param_1,param_2);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

