/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8d9f */

void FUN_1800f8d9f(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_18005b509(&local_28,*(undefined4 *)param_1[1],*(undefined8 *)param_1[2]);
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  uVar2 = FUN_18005b68d(*(undefined4 *)param_1[1],*(undefined8 *)param_1[2]);
  *(undefined8 *)param_1[3] = uVar2;
  *(undefined1 *)param_1[4] = 1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

