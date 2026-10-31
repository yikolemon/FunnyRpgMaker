/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140023fef */

int FUN_140023fef(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar3 = (undefined8 *)FUN_140024697();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = FUN_14010ba5c(*puVar3,param_1,param_2,param_3);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_68)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_68);
}

