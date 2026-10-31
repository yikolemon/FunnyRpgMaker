/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ec5fb */

undefined8 FUN_1801ec5fb(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      uVar2 = FUN_1801eaecb(param_1,&local_20);
      if ((int)uVar2 != 0) goto LAB_1801ec646;
      *(longlong *)(param_1 + 0xb8) = local_20;
      *(code **)(param_1 + 0xc0) = FUN_1801eaff4;
      lVar1 = local_20;
    }
    *param_2 = lVar1;
    uVar2 = 0;
  }
LAB_1801ec646:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

