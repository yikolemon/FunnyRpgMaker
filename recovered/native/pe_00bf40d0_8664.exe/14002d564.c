/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14002d564(undefined8 param_1,longlong param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  double local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\0') {
    local_28 = _DAT_1400edd40;
    uStack_20 = _UNK_1400edd48;
    local_18 = _DAT_1400edd50;
    uStack_10 = _UNK_1400edd58;
    dVar1 = FUN_14002d5da(&local_28,*(double *)(param_2 + 0x28));
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  else {
    uVar2 = (undefined4)DAT_1400e66b8;
    uVar3 = (undefined4)((ulonglong)DAT_1400e66b8 >> 0x20);
  }
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_48)) {
    return CONCAT44(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_48);
}

