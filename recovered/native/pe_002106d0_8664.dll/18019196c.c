/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019196c */

void FUN_18019196c(longlong param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,
                  int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  float local_d0;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  ulonglong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_f8;
  puVar1 = (uint *)(param_1 + 0x50);
  uVar7 = (ulonglong)*(int *)(param_1 + 0x50);
  local_88 = *(ulonglong *)(*(longlong *)(param_1 + 0x58) + -8 + uVar7 * 8);
  if (param_5 == 0) {
    local_b0 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28);
    local_c0 = *param_4;
    local_b8 = param_4[1];
    local_d0 = *param_3;
    local_c8 = param_3[1];
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,param_2[1]);
    local_a8 = 0;
    FUN_180191b88(puVar1,local_88 & 0xffffffff,local_88 >> 0x20,*param_2);
  }
  else if (0 < param_5) {
    fVar8 = DAT_1802ac570 / (float)param_5;
    local_98 = (ulonglong)(uint)-param_5;
    iVar5 = 1;
    do {
      local_d0 = (float)iVar5 * fVar8;
      local_d8 = param_4;
      FUN_180191896(&local_90,&local_88,param_2,param_3);
      iVar3 = (int)uVar7;
      if (iVar3 == *(int *)(param_1 + 0x54)) {
        if (iVar3 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = ((int)(((uint)(uVar7 >> 0x1f) & 1) + iVar3) >> 1) + iVar3;
        }
        iVar6 = iVar3 + 1;
        if (iVar3 + 1 < iVar2) {
          iVar6 = iVar2;
        }
        lVar4 = FUN_1800fe7f8((longlong)iVar6 << 3);
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_1802a82f0(lVar4,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3)
          ;
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
        }
        *(longlong *)(param_1 + 0x58) = lVar4;
        *(int *)(param_1 + 0x54) = iVar6;
        iVar3 = *(int *)(param_1 + 0x50);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x58);
      }
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = local_90;
      uVar7 = (ulonglong)(*puVar1 + 1);
      *puVar1 = *puVar1 + 1;
      iVar3 = iVar5 + (int)local_98;
      iVar5 = iVar5 + 1;
    } while (iVar3 != 0);
  }
  if (DAT_180402640 != (local_80 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_80 ^ (ulonglong)auStack_f8);
  }
  return;
}

