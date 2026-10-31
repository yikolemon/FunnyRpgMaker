/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401500af */

int FUN_1401500af(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar7 = *param_1;
  if ((*(byte *)(lVar7 + 8) & 2) == 0) {
LAB_140150104:
    iVar4 = FUN_14012b478(lVar7,param_2);
    if (iVar4 != 0) goto LAB_1401501cc;
    lVar7 = FUN_140152f50(param_1);
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(*param_1 + 0x3e0);
      puVar3 = *(undefined8 **)param_1[7];
      iVar1 = *(int *)(lVar2 + 0x620);
      local_58 = 0;
      (**(code **)(lVar7 + 8))(*puVar3,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0);
      for (uVar8 = (ulonglong)*(uint *)(lVar2 + 0x8a8); iVar4 = 0, uVar8 != 0; uVar8 = uVar8 - 1) {
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x8a8 + uVar8 * 8) + 0x40);
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
        if (iVar1 == iVar4) {
          uVar6 = (undefined4)param_1[4];
        }
        else {
          uVar5 = FUN_14012a478(uVar5,iVar1,iVar4);
          uVar6 = FUN_14012a478((int)param_1[4],iVar1,iVar4);
        }
        local_58 = 0;
        (**(code **)(lVar7 + 8))(puVar3[uVar8],uVar5,uVar6,0);
      }
      goto LAB_1401501cc;
    }
  }
  else {
    iVar4 = (**(code **)(*(longlong *)(lVar7 + 0x2d0) + 0xe0))(lVar7,param_2,&local_4c);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      lVar7 = *param_1;
      goto LAB_140150104;
    }
    FUN_140150201(param_1,local_4c);
  }
  iVar4 = 0;
LAB_1401501cc:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

