/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180062510 */

bool FUN_180062510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  uVar1 = FUN_18001c5bb(puVar2,param_2[2]);
  FUN_180043870(param_1,local_30,param_2,uVar1);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

