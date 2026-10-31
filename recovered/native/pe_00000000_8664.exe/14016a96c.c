/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a96c */

undefined8 FUN_14016a96c(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    plVar4 = (longlong *)((param_2 & 0xffffffff) * 8 + *(longlong *)(lVar1 + 0x250));
    local_20 = *(uint *)(*(longlong *)(lVar1 + 600) + (param_2 & 0xffffffff) * 4);
  }
  else {
    plVar4 = &local_28;
    uVar3 = (**(code **)*puVar2)(puVar2[1],param_2,plVar4);
    if ((int)uVar3 != 0) goto LAB_14016a9eb;
  }
  lVar1 = *plVar4;
  *param_3 = 0;
  param_3[3] = lVar1;
  param_3[1] = lVar1;
  param_3[2] = (ulonglong)local_20 + lVar1;
  uVar3 = 0;
LAB_14016a9eb:
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar3;
}

