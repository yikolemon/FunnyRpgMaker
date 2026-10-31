/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001e22 */

undefined8 * FUN_140001e22(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar3 = param_1 + 4;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  puVar3 = (uint *)((longlong)param_1 + *(longlong *)puVar3 * 2);
  puVar1 = (uint *)FUN_140004561(param_1,puVar3);
  do {
    puVar2 = puVar3;
    puVar3 = puVar1;
    if (puVar2 == puVar1) goto LAB_140001e90;
  } while ((*(short *)((longlong)puVar2 + -2) != 0x5c) &&
          (puVar3 = (uint *)((longlong)puVar2 + -2), *(short *)((longlong)puVar2 + -2) != 0x2f));
  do {
    if ((*(short *)((longlong)puVar2 + -2) != 0x5c) &&
       (puVar3 = puVar2, *(short *)((longlong)puVar2 + -2) != 0x2f)) break;
    puVar2 = (uint *)((longlong)puVar2 + -2);
    puVar3 = puVar1;
  } while (puVar2 != puVar1);
LAB_140001e90:
  local_28 = (longlong)puVar3 - (longlong)param_1 >> 1;
  local_30 = param_1;
  FUN_14000451a(param_2,&local_30);
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

