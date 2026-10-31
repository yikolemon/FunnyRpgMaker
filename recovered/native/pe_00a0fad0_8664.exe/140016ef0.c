/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016ef0 */

undefined8 * FUN_140016ef0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (param_1 != param_2) {
    do {
      local_30 = *param_1;
      plVar1 = *(longlong **)(param_3 + 0x38);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9e50();
      }
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_30);
    } while ((cVar2 != '\0') && (param_1 = param_1 + 1, param_1 != param_2));
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

