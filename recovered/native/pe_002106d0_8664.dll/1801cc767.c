/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc767 */

undefined8 FUN_1801cc767(longlong param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    uVar1 = 0x23;
  }
  else if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = 0x24;
  }
  else {
    uVar1 = 6;
    if ((((param_2 != (int *)0x0) && (-1 < param_2[1])) && (-1 < param_2[2])) && (*param_2 < 5)) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + 0x10) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x98)
      ;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Could not recover jumptable at 0x0001801cc7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
          return uVar1;
        }
        goto LAB_1801cc863;
      }
      if ((*(uint *)(param_1 + 8) & 3) != 2) {
        if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
          uVar1 = FUN_1801cc4a4(param_1);
          return uVar1;
        }
        goto LAB_1801cc863;
      }
      uVar1 = FUN_1801cc184(param_1,param_2,0,&local_14);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1801cc714(param_1,local_14);
      }
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
LAB_1801cc863:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

