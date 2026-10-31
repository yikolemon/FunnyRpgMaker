/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d7b0 */

void FUN_14006d7b0(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStack_68 [32];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    puVar3 = *(uint **)(param_1 + 0x28);
    do {
      uVar1 = FUN_14006d8bf(puVar3,param_2);
      if (((uVar1 != 0) || (uVar1 = FUN_14006d8bf(puVar3,param_3), uVar1 != 0)) ||
         (uVar1 = FUN_14006d8bf(puVar3,param_4), uVar1 != 0)) goto LAB_14006d83d;
      puVar3 = puVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_14006d69c((uint *)(param_1 + 0x20),param_5,(longlong *)&local_48);
  puVar3 = local_48;
  if (iVar2 == 0) {
LAB_14006d83d:
    iVar2 = FUN_14006d5d1(puVar3,param_2,param_5);
    if ((iVar2 == 0) && (iVar2 = FUN_14006d5d1(puVar3,param_3,param_5), iVar2 == 0)) {
      if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_68)) {
        FUN_14006d5d1(puVar3,param_4,param_5);
        return;
      }
      goto LAB_14006d8b1;
    }
  }
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_14006d8b1:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_68);
}

