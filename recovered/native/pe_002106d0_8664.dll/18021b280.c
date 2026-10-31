/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b280 */

undefined8 FUN_18021b280(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    plVar4 = (longlong *)((param_2 & 0xffffffff) * 8 + *(longlong *)(lVar1 + 0x250));
    local_20 = *(uint *)(*(longlong *)(lVar1 + 600) + (param_2 & 0xffffffff) * 4);
  }
  else {
    plVar4 = &local_28;
    uVar3 = (**(code **)*puVar2)(puVar2[1],param_2,plVar4);
    if ((int)uVar3 != 0) goto LAB_18021b2ff;
  }
  lVar1 = *plVar4;
  *param_3 = 0;
  param_3[3] = lVar1;
  param_3[1] = lVar1;
  param_3[2] = (ulonglong)local_20 + lVar1;
  uVar3 = 0;
LAB_18021b2ff:
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar3;
}

