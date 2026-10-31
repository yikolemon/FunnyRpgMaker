/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a2df */

int FUN_14007a2df(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  local_24 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(longlong *)(param_1 + 0x38) = param_3;
    lVar2 = FUN_14001f231(param_3,4,*(uint *)(param_1 + 0x2c),param_2,*(longlong *)(param_1 + 0x30),
                          &local_24);
    *(longlong *)(param_1 + 0x30) = lVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 0x2c) = param_2;
      iVar1 = 0;
    }
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

