/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a5d8 */

undefined8 FUN_14002a5d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0x138);
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (plVar4 != plVar1) {
    do {
      lVar2 = *plVar4;
      local_48 = param_2;
      FUN_14002a83e(&local_50,**(undefined8 **)(lVar2 + 0x1d0),*(undefined8 **)(lVar2 + 0x1d0),
                    &local_48);
      if (local_50 != *(longlong *)(lVar2 + 0x1d0)) {
        FUN_14002a8c4(lVar2 + 0x1d0);
      }
      lVar2 = *plVar4;
      local_48 = param_2;
      FUN_14002a83e(&local_50,**(undefined8 **)(lVar2 + 0x1e0),*(undefined8 **)(lVar2 + 0x1e0),
                    &local_48);
      if (local_50 != *(longlong *)(lVar2 + 0x1e0)) {
        FUN_14002a8c4(lVar2 + 0x1e0);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if (*(longlong *)(param_1 + 0x210) == param_2) {
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  if (*(longlong *)(param_1 + 0x218) == param_2) {
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x138);
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (plVar4 == plVar1) {
LAB_14002a6e7:
    if (plVar4 != plVar1) {
      FUN_14002abcf(plVar4 + 1);
      FUN_14002b3a3(*(longlong *)(param_1 + 0x140) + -8);
      *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + -8;
      uVar3 = 1;
      goto LAB_14002a713;
    }
  }
  else {
    do {
      if (*plVar4 == param_2) goto LAB_14002a6e7;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  uVar3 = 0;
LAB_14002a713:
  if (DAT_1401c9640 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_40 ^ (ulonglong)auStack_78);
  }
  return uVar3;
}

