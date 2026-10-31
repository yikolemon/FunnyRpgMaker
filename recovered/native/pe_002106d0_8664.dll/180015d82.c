/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180015d82 */

undefined8 FUN_180015d82(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_1c = param_3;
  cVar1 = FUN_180015df2(param_1,&local_1c,4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180015df2(param_1,param_2,local_1c);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

