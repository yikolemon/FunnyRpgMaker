/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c971 */

int FUN_14001c971(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  uVar3 = param_2 + (int)param_1[10] + (int)param_1[0x13];
  iVar1 = 0;
  if (*(uint *)(param_1 + 2) < uVar3) {
    uVar3 = uVar3 + 1 & 0xfffffffe;
    lVar2 = FUN_14001c617(*param_1,0x20,*(uint *)(param_1 + 2),uVar3,param_1[0xb],&local_24);
    param_1[0xb] = lVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 2) = uVar3;
      FUN_14001ca09((longlong)param_1);
      iVar1 = 0;
    }
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

