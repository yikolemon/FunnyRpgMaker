/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063a4d */

undefined4 FUN_180063a4d(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_14 = 0;
  iVar1 = FUN_180063b2a();
  if (iVar1 - 2U < 3) {
    puVar3 = local_58;
    FUN_180063e70(puVar3,*(undefined1 *)*param_1);
    puVar2 = &DAT_1803a62f0;
  }
  else if (iVar1 == 5) {
    puVar3 = local_78;
    FUN_180063fee(puVar3,local_14);
    puVar2 = &DAT_1803a6330;
  }
  else {
    if (iVar1 != 1) {
      if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_98)) {
        return local_14;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_10 ^ (ulonglong)auStack_98);
    }
    puVar3 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_180063c7e(puVar3);
    puVar2 = &DAT_1803a62b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(puVar3,puVar2);
}

