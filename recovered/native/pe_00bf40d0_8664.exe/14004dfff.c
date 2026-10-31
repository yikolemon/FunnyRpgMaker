/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004dfff */

ulonglong FUN_14004dfff(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  lVar8 = *param_1;
  if ((*(byte *)(lVar8 + 8) & 2) == 0) {
LAB_14004e054:
    uVar7 = FUN_14001edff(lVar8,param_2);
    uVar9 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) goto LAB_14004e11c;
    lVar8 = FUN_140050ea0(param_1);
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(*param_1 + 0x3e0);
      puVar4 = *(undefined8 **)param_1[7];
      uVar1 = *(uint *)(lVar3 + 0x620);
      local_58 = 0;
      (**(code **)(lVar8 + 8))(*puVar4,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0);
      for (uVar7 = (ulonglong)*(uint *)(lVar3 + 0x8a8); uVar9 = 0, uVar7 != 0; uVar7 = uVar7 - 1) {
        uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x8a8 + uVar7 * 8) + 0x40);
        uVar6 = *(uint *)((longlong)param_1 + 0x1c);
        if (uVar1 == uVar2) {
          iVar5 = (int)param_1[4];
        }
        else {
          uVar6 = FUN_14001de7c(uVar6,uVar1,uVar2);
          iVar5 = FUN_14001de7c(*(uint *)(param_1 + 4),uVar1,uVar2);
        }
        local_58 = 0;
        (**(code **)(lVar8 + 8))(puVar4[uVar7],uVar6,iVar5,0);
      }
      goto LAB_14004e11c;
    }
  }
  else {
    iVar5 = (**(code **)(*(longlong *)(lVar8 + 0x2d0) + 0xe0))(lVar8,param_2,&local_4c);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      lVar8 = *param_1;
      goto LAB_14004e054;
    }
    FUN_14004e151(param_1,(ulonglong)local_4c);
  }
  uVar9 = 0;
LAB_14004e11c:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_78);
}

