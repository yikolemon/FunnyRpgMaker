/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011ab06 */

void FUN_18011ab06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_18 = &local_res10;
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar1 = FUN_18010759c(0x1000);
  if (cVar1 != '\0') {
    FUN_18011aad7(param_1,local_18);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

