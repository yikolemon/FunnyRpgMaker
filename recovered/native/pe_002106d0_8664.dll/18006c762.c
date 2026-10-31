/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c762 */

void FUN_18006c762(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180002218();
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_180002218();
  plVar3 = plVar1;
  if (7 < (ulonglong)plVar1[3]) {
    plVar3 = (longlong *)*plVar1;
  }
  uVar2 = FUN_18023a990(plVar3);
  local_20 = (ulonglong)((uint)uVar2 & 1);
  local_28 = FUN_180002218();
  local_30[0] = (undefined4)(uVar2 >> 0x20);
  if (uVar2 >> 0x20 == 0x91) {
    FUN_18006b922(plVar1,local_30,&local_20);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

