/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180274ddc */

undefined1 FUN_180274ddc(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 2;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_18027730c(lVar1,&local_18,10,1);
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)(lVar1 + 0x2c) = uVar2;
  return uVar4;
}

