/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006258a */

longlong * FUN_18006258a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_18001c5bb(puVar2,param_3[2]);
  FUN_180043870(param_1,local_38,param_3,uVar1);
  if (local_30 == 0) {
    local_30 = *(longlong *)(param_1 + 8);
  }
  *param_2 = local_30;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

