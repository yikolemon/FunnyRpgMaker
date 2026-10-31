/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f848 */

void FUN_18018f848(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar3 = (longlong)*(int *)(param_1 + 0xb0) + -1;
  iVar2 = (int)lVar3;
  *(int *)(param_1 + 0xb0) = iVar2;
  if (iVar2 == 0) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
  }
  else {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + -0x10 + lVar3 * 0x10);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
  }
  *(undefined4 *)(param_1 + 0x70) = local_18;
  *(undefined4 *)(param_1 + 0x74) = uStack_14;
  *(undefined4 *)(param_1 + 0x78) = uStack_10;
  *(undefined4 *)(param_1 + 0x7c) = uStack_c;
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    FUN_18018f448();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

