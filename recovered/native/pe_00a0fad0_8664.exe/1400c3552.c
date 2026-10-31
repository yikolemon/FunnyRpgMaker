/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c3552 */

void FUN_1400c3552(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  FUN_1400a03e4(param_2,&DAT_1401d4810);
  FUN_1400c4e18(param_2,param_1 + 0x58);
  lVar1 = param_2 + 0x58;
  FUN_14009e652(lVar1,param_1 + 0x70);
  FUN_1400a0a20(param_2,param_1 + 0x78);
  FUN_1400a0a20(param_2,&DAT_1401d4830);
  FUN_1400c4e18(param_2,param_1 + 0xb8);
  FUN_1400a0a20(param_2,param_1 + 0xd0);
  lVar2 = *(longlong *)(param_1 + 0xf8);
  for (lVar4 = *(longlong *)(param_1 + 0xf0); lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_1400a0a20(param_2,lVar4);
  }
  FUN_1400a0a20(param_2,param_1 + 0x108);
  if (8 < *(uint *)(param_1 + 0x70)) {
    FUN_1400a0a20(param_2,param_1 + 0x128);
    if (9 < *(uint *)(param_1 + 0x70)) {
      FUN_1400a0a20(param_2,param_1 + 0x148);
      FUN_1400a0a20(param_2,param_1 + 0x168);
      FUN_1400a0a20(param_2,param_1 + 0x188);
      FUN_1400a0a20(param_2,param_1 + 0x1a8);
      if (0xd < *(uint *)(param_1 + 0x70)) {
        FUN_1400a0a20(param_2,param_1 + 0x1c8);
      }
    }
  }
  local_40 = FUN_1400c4ea4(param_1);
  iVar3 = local_40 - *(int *)(param_1 + 0x230);
  FUN_14009e652(lVar1);
  FUN_14009e652(lVar1,param_1 + 0x1ec);
  FUN_14009e652(lVar1,param_1 + 0x1f0);
  local_3c = -1;
  FUN_14009e716(lVar1,param_1 + 0x1f8,&local_3c);
  local_3c = *(int *)(param_1 + 0x210) + iVar3;
  FUN_14009e652(lVar1,&local_3c);
  local_3c = iVar3 + *(int *)(param_1 + 0x214);
  FUN_14009e652(lVar1,&local_3c);
  local_3c = -1;
  FUN_14009e716(lVar1,param_1 + 0x218,&local_3c);
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
}

