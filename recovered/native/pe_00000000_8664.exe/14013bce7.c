/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013bce7 */

undefined8 FUN_14013bce7(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      uVar2 = FUN_14013a5b7(param_1,&local_20);
      if ((int)uVar2 != 0) goto LAB_14013bd32;
      *(longlong *)(param_1 + 0xb8) = local_20;
      *(code **)(param_1 + 0xc0) = FUN_14013a6e0;
      lVar1 = local_20;
    }
    *param_2 = lVar1;
    uVar2 = 0;
  }
LAB_14013bd32:
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

