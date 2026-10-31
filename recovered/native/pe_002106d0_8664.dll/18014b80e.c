/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014b80e */

void FUN_18014b80e(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_1c = 0x3f800000;
  cVar1 = FUN_180149c39(local_20,&local_28,param_3 | 2,0);
  if (cVar1 != '\0') {
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

