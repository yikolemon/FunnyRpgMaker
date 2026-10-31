/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d2f7 */

int FUN_14006d2f7(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  uVar4 = *(uint *)(param_1 + 4) >> 3;
  uVar3 = param_2 + 7U >> 3;
  local_24 = 0;
  iVar1 = 0;
  if (uVar4 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    lVar2 = FUN_14001c617(param_3,1,uVar4,uVar3,*(longlong *)(param_1 + 8),&local_24);
    *(longlong *)(param_1 + 8) = lVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 4) = uVar3 << 3;
      iVar1 = 0;
    }
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

