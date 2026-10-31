/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180191ec4 */

void FUN_180191ec4(longlong param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_b8;
  puVar1 = (uint *)(param_1 + 0x50);
  uVar6 = (ulonglong)*(int *)(param_1 + 0x50);
  local_68 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + -8 + uVar6 * 8);
  if (param_4 == 0) {
    local_80 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28);
    local_90 = *param_3;
    local_88 = param_3[1];
    local_98 = (float)param_2[1];
    local_78 = 0;
    FUN_180192079(puVar1,local_68 & 0xffffffff,local_68 >> 0x20,*param_2);
  }
  else if (0 < param_4) {
    fVar9 = DAT_1802ac570 / (float)param_4;
    iVar7 = 1;
    do {
      local_98 = (float)iVar7 * fVar9;
      FUN_180191919(&local_70,&local_68,param_2,param_3);
      iVar4 = (int)uVar6;
      if (iVar4 == *(int *)(param_1 + 0x54)) {
        if (iVar4 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = ((int)(((uint)(uVar6 >> 0x1f) & 1) + iVar4) >> 1) + iVar4;
        }
        iVar5 = iVar4 + 1;
        if (iVar4 + 1 < iVar2) {
          iVar5 = iVar2;
        }
        lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3)
          ;
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
        }
        *(longlong *)(param_1 + 0x58) = lVar3;
        *(int *)(param_1 + 0x54) = iVar5;
        iVar4 = *(int *)(param_1 + 0x50);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x58);
      }
      *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = local_70;
      uVar6 = (ulonglong)(*puVar1 + 1);
      *puVar1 = *puVar1 + 1;
      bVar8 = iVar7 != param_4;
      iVar7 = iVar7 + 1;
    } while (bVar8);
  }
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_b8);
  }
  return;
}

