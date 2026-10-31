/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009af50 */

LPWSTR FUN_14009af50(undefined8 *param_1)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  longlong lVar8;
  LPWSTR pWVar9;
  byte *local_res8;
  ulonglong local_res10;
  longlong local_38;
  undefined8 local_30;
  
  pbVar1 = *(byte **)param_1[1];
  iVar5 = *(int *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    pwVar6 = _wsetlocale(iVar5,(wchar_t *)0x0);
  }
  else {
    local_res8 = (byte *)0x0;
    iVar4 = FUN_1400ae45c(&local_res8,(LPWSTR)0x0,(byte *)0x0,pbVar1,(byte *)0x7fffffff);
    if ((iVar4 == 0x16) || (iVar4 == 0x22)) {
LAB_14009b1c3:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pWVar7 = _calloc_base((ulonglong)local_res8,2);
    pWVar9 = (LPWSTR)0x0;
    if (pWVar7 == (LPWSTR)0x0) goto LAB_14009afd7;
    iVar4 = FUN_1400ae45c((undefined8 *)0x0,pWVar7,local_res8,pbVar1,(byte *)0xffffffffffffffff);
    if (iVar4 != 0) {
      if ((iVar4 == 0x16) || (pWVar9 = pWVar7, iVar4 == 0x22)) goto LAB_14009b1c3;
      goto LAB_14009afd7;
    }
    pwVar6 = _wsetlocale(iVar5,pWVar7);
    FUN_1400a1290(pWVar7);
  }
  if (pwVar6 == (LPCWSTR)0x0) {
    return (LPWSTR)0x0;
  }
  lVar8 = FUN_1400a1528();
  local_38 = *(longlong *)(lVar8 + 0x90);
  local_30 = *(undefined8 *)(lVar8 + 0x88);
  local_res10 = 0;
  iVar5 = FUN_1400ae81c(&local_res10,(byte *)0x0,0,pwVar6,0,(undefined4 *)&local_38);
  if (iVar5 == 0) {
    pWVar9 = _malloc_base(local_res10 + 4);
    if (pWVar9 == (LPWSTR)0x0) {
      return (LPWSTR)0x0;
    }
    pWVar7 = pWVar9 + 2;
    iVar5 = FUN_1400ae81c((ulonglong *)0x0,(byte *)pWVar7,local_res10,pwVar6,0xffffffffffffffff,
                          (undefined4 *)&local_38);
    lVar3 = local_38;
    if (iVar5 == 0) {
      piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + local_38);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_1400a1290(*(LPVOID *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + local_38));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      if (((DAT_14013c4a0 & *(uint *)(lVar8 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3), piVar2 != (int *)0x0
         )) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_1400a1290(*(LPVOID *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      *(undefined4 *)pWVar9 = *(undefined4 *)(lVar3 + 0x10);
      *(LPWSTR *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = pWVar9;
      *(LPWSTR *)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar3) = pWVar7;
      return pWVar7;
    }
    if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
LAB_14009afd7:
      FUN_1400a1290(pWVar9);
      return (LPWSTR)0x0;
    }
  }
  else if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
    return (LPWSTR)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

