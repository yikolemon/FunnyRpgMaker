/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007133c */

void FUN_18007133c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_18008c4ce(param_2,&DAT_180417c28);
  FUN_18008c566(param_2,param_1 + 0x58);
  lVar1 = param_2 + 0x58;
  FUN_18008ca8a(lVar1,param_1 + 0x70);
  FUN_18008c5f2(param_2,param_1 + 0x78);
  FUN_18008c5f2(param_2,&DAT_180417c48);
  FUN_18008c566(param_2,param_1 + 0xb8);
  FUN_18008c5f2(param_2,param_1 + 0xd0);
  lVar2 = *(longlong *)(param_1 + 0xf8);
  for (lVar4 = *(longlong *)(param_1 + 0xf0); lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_18008c5f2(param_2,lVar4);
  }
  FUN_18008c5f2(param_2,param_1 + 0x108);
  if (8 < *(uint *)(param_1 + 0x70)) {
    FUN_18008c5f2(param_2,param_1 + 0x128);
    if (9 < *(uint *)(param_1 + 0x70)) {
      FUN_18008c5f2(param_2,param_1 + 0x148);
      FUN_18008c5f2(param_2,param_1 + 0x168);
      FUN_18008c5f2(param_2,param_1 + 0x188);
      FUN_18008c5f2(param_2,param_1 + 0x1a8);
      if (0xd < *(uint *)(param_1 + 0x70)) {
        FUN_18008c5f2(param_2,param_1 + 0x1c8);
      }
    }
  }
  local_40 = FUN_18008c8b8(param_1);
  iVar3 = local_40 - *(int *)(param_1 + 0x230);
  FUN_18008ca8a(lVar1);
  FUN_18008ca8a(lVar1,param_1 + 0x1ec);
  FUN_18008ca8a(lVar1,param_1 + 0x1f0);
  local_3c = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x1f8,&local_3c);
  local_3c = *(int *)(param_1 + 0x210) + iVar3;
  FUN_18008ca8a(lVar1,&local_3c);
  local_3c = iVar3 + *(int *)(param_1 + 0x214);
  FUN_18008ca8a(lVar1,&local_3c);
  local_3c = -1;
  FUN_18008cdc4(lVar1,param_1 + 0x218,&local_3c);
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

