/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b73b */

undefined8 FUN_14012b73b(longlong param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
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
        if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Could not recover jumptable at 0x00014012b7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
          return uVar1;
        }
        goto LAB_14012b837;
      }
      if ((*(uint *)(param_1 + 8) & 3) != 2) {
        if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
          uVar1 = FUN_14012b478(param_1);
          return uVar1;
        }
        goto LAB_14012b837;
      }
      uVar1 = FUN_14012b158(param_1,param_2,0,&local_14);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_14012b6e8(param_1,local_14);
      }
    }
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
LAB_14012b837:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

