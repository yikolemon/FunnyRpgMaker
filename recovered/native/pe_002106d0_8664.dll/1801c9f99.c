/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9f99 */

int FUN_1801c9f99(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar3 = param_2 + *(int *)(param_1 + 10) + *(int *)(param_1 + 0x13);
  iVar1 = 0;
  if (*(uint *)(param_1 + 2) < uVar3) {
    uVar3 = uVar3 + 1 & 0xfffffffe;
    local_38 = param_1[0xb];
    local_30 = &local_24;
    uVar2 = FUN_1801c9c3f(*param_1,0x20,*(uint *)(param_1 + 2),uVar3);
    param_1[0xb] = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 2) = uVar3;
      FUN_1801ca031(param_1);
      iVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

