/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140016cbb */

undefined8 *
FUN_140016cbb(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_140016ef0(param_2,param_3,param_4);
  puVar5 = param_3;
  if ((puVar3 != param_3) && (puVar4 = puVar3 + 1, puVar5 = puVar3, puVar4 != param_3)) {
    do {
      local_40 = *puVar4;
      plVar1 = *(longlong **)(param_4 + 0x38);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9e50();
      }
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
      if (cVar2 != '\0') {
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar3;
    } while (puVar4 != param_3);
  }
  *param_1 = puVar5;
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

