/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2b1c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400a2b1c(__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
                  LPWORD param_5,UINT param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStackY_88 [32];
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar7 = auStackY_88;
  puVar9 = auStackY_88;
  puVar8 = auStackY_88;
  local_30 = DAT_14012ea80 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_48 + 0xc);
  }
  iVar2 = FUN_1400a1350(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar2 == 0) goto LAB_1400a2c72;
  uVar6 = (longlong)iVar2 * 2;
  uVar5 = -(ulonglong)(uVar6 < uVar6 + 0x10) & uVar6 + 0x10;
  if (uVar5 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_1400a2c5a:
    puVar9 = puVar8;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_1400a2c72;
  }
  else {
    if (uVar5 < 0x401) {
      uVar3 = uVar5 + 0xf;
      if (uVar3 <= uVar5) {
        uVar3 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar3 & 0xfffffffffffffff0);
      puVar8 = auStackY_88 + lVar1;
      puVar7 = auStackY_88 + lVar1;
      puVar4 = (undefined4 *)((longlong)local_58 + lVar1);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar4 == (undefined4 *)0x0) goto LAB_1400a2c5a;
      *puVar4 = 0xcccc;
LAB_1400a2c08:
      lpSrcStr = (undefined1 (*) [32])(puVar4 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar4 = _malloc_base(uVar5);
      lpSrcStr = (undefined1 (*) [32])0x0;
      puVar8 = auStackY_88;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1400a2c08;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_1400a2c5a;
    *(undefined8 *)(puVar8 + -8) = 0x1400a2c1e;
    FUN_1400b3c00(lpSrcStr,0,uVar6);
    *(int *)(puVar8 + 0x28) = iVar2;
    *(undefined1 (**) [32])(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x1400a2c3a;
    iVar2 = FUN_1400a1350(param_6,1,param_3,param_4,*(LPWSTR *)(puVar8 + 0x20),
                          *(int *)(puVar8 + 0x28));
    if (iVar2 == 0) goto LAB_1400a2c5a;
    *(undefined8 *)(puVar8 + -8) = 0x1400a2c54;
    GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar2,param_5);
  }
  puVar9 = puVar8;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x1400a2c72;
    FUN_1400a1290(lpSrcStr[-1] + 0x10);
  }
LAB_1400a2c72:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar6 = local_30 ^ (ulonglong)local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1400a2c91;
  FUN_140086440(uVar6);
}

