/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140090f48 */

undefined1 FUN_140090f48(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_140092184(plVar1,(longlong *)&local_18,10,1);
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}

