/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069488 */

void FUN_140069488(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStackY_78 [32];
  longlong local_48;
  longlong local_40 [3];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  local_28 = 1;
  local_48 = param_1[0x925];
  cVar1 = FUN_1400692c6((longlong)(param_1 + 2));
  if (cVar1 == '\0') {
    FUN_140067fe0(param_1,(int)param_1[0x926],*(undefined4 *)((longlong)param_1 + 0x4934));
  }
  FUN_1400697e2(param_1,(longlong)(param_1 + 2),(int *)local_40,(int)param_2,
                (int)((ulonglong)param_2 >> 0x20));
  (**(code **)param_1[1])((undefined8 *)param_1[1],&local_48);
  param_1[0x925] = local_40[0];
  param_1[0x922] = param_2;
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_78);
}

