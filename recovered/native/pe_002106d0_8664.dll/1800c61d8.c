/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c61d8 */

longlong * FUN_1800c61d8(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Buf2;
  void *_Buf1;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)*param_1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    lVar7 = *plVar6;
    _Buf2 = *(void **)(param_3 + 0x20);
    uVar1 = *(ulonglong *)(param_3 + 0x28);
    _Buf1 = (void *)*param_4;
    uVar2 = param_4[1];
    uVar8 = uVar2;
    if (uVar1 < uVar2) {
      uVar8 = uVar1;
    }
    local_70 = param_1;
    local_68 = param_4;
    iVar5 = memcmp(_Buf1,_Buf2,uVar8);
    bVar3 = iVar5 < 0;
    if (iVar5 == 0) {
      bVar3 = uVar2 < uVar1;
    }
    if (param_3 != lVar7) {
      if (bVar3) {
        local_60 = param_3;
        plVar6 = (longlong *)FUN_180024994();
        param_4 = local_68;
        lVar7 = *plVar6;
        uVar1 = local_68[1];
        uVar2 = *(ulonglong *)(lVar7 + 0x28);
        uVar8 = uVar2;
        if (uVar1 < uVar2) {
          uVar8 = uVar1;
        }
        iVar5 = memcmp(*(void **)(lVar7 + 0x20),(void *)*local_68,uVar8);
        bVar3 = iVar5 < 0;
        if (iVar5 == 0) {
          bVar3 = uVar2 < uVar1;
        }
        param_1 = local_70;
        if (bVar3) {
          if (*(char *)(*(longlong *)(lVar7 + 0x10) + 0x19) != '\0') goto LAB_1800c6310;
          goto LAB_1800c6335;
        }
LAB_1800c63d7:
        FUN_1800ae07c(param_1,&local_60,param_4);
        cVar4 = FUN_1800ae030(param_1,local_50,param_4);
        if (cVar4 == '\0') {
          *param_2 = local_60;
          param_2[1] = lStack_58;
        }
        else {
          *param_2 = local_50;
          *(undefined4 *)(param_2 + 1) = 2;
        }
        *(bool *)(param_2 + 2) = cVar4 != '\0';
        goto LAB_1800c641d;
      }
      iVar5 = memcmp(_Buf2,_Buf1,uVar8);
      bVar3 = uVar1 < uVar2;
      if (iVar5 != 0) {
        bVar3 = iVar5 < 0;
      }
      if (!bVar3) {
        *param_2 = param_3;
        *(undefined4 *)(param_2 + 1) = 0;
        *(undefined1 *)(param_2 + 2) = 1;
        goto LAB_1800c641d;
      }
      local_60 = param_3;
      plVar6 = (longlong *)FUN_180016c4c();
      param_4 = local_68;
      param_1 = local_70;
      lVar7 = *plVar6;
      if (*(char *)(lVar7 + 0x19) == '\0') {
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = local_68[1];
        uVar8 = uVar2;
        if (uVar1 < uVar2) {
          uVar8 = uVar1;
        }
        iVar5 = memcmp((void *)*local_68,*(void **)(lVar7 + 0x20),uVar8);
        bVar3 = iVar5 < 0;
        if (iVar5 == 0) {
          bVar3 = uVar2 < uVar1;
        }
        if (!bVar3) goto LAB_1800c63d7;
      }
      if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x19) == '\0') {
        *param_2 = lVar7;
        goto LAB_1800c6338;
      }
      *param_2 = param_3;
      goto LAB_1800c6313;
    }
    param_1 = local_70;
    param_4 = local_68;
    if (!bVar3) goto LAB_1800c63d7;
LAB_1800c6335:
    *param_2 = param_3;
LAB_1800c6338:
    *(undefined4 *)(param_2 + 1) = 1;
  }
  else {
    lVar7 = plVar6[2];
    if (*(char *)(plVar6[1] + 0x19) == '\0') {
      uVar1 = param_4[1];
      uVar2 = *(ulonglong *)(lVar7 + 0x28);
      uVar8 = uVar2;
      if (uVar1 < uVar2) {
        uVar8 = uVar1;
      }
      iVar5 = memcmp(*(void **)(lVar7 + 0x20),(void *)*param_4,uVar8);
      bVar3 = iVar5 < 0;
      if (iVar5 == 0) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) goto LAB_1800c63d7;
    }
LAB_1800c6310:
    *param_2 = lVar7;
LAB_1800c6313:
    *(undefined4 *)(param_2 + 1) = 0;
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_1800c641d:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return param_2;
}

