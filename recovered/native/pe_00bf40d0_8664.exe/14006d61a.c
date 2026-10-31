/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d61a */

void FUN_14006d61a(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  uVar2 = param_2 + 7U & 0xfffffff8;
  lVar1 = FUN_14001f231(param_3,0xc,*(uint *)(param_1 + 4),uVar2,*(longlong *)(param_1 + 8),
                        &local_24);
  *(longlong *)(param_1 + 8) = lVar1;
  if (local_24 == 0) {
    *(uint *)(param_1 + 4) = uVar2;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

