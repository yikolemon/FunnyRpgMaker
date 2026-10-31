/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004db78 */

int FUN_18004db78(undefined8 *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar3 = *(uint *)((longlong)param_1 + 0x14);
  }
  else {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)*pbVar1;
      *param_1 = pbVar1 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
  }
  if (uVar3 == 0xffffffff) {
    iVar4 = -1;
  }
  else {
    local_11 = (undefined1)uVar3;
    puVar2 = (undefined1 *)param_1[8];
    if (puVar2 == (undefined1 *)param_1[9]) {
      FUN_18004dc74(param_1 + 7,puVar2,&local_11);
    }
    else {
      *puVar2 = local_11;
      param_1[8] = param_1[8] + 1;
    }
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    if (iVar4 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = 0;
      iVar4 = 10;
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

