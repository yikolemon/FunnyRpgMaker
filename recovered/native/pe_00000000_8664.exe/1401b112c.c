/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b112c */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401b112c(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined4 param_4,LPWORD param_5,int param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  LPCWSTR lpSrcStr;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar7 = auStack_88;
  puVar9 = auStack_88;
  puVar8 = auStack_88;
  local_30 = DAT_140f17b40 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_1401aeaf0(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVar2 == 0) goto LAB_1401b1282;
  uVar6 = (longlong)iVar2 * 2;
  uVar5 = -(ulonglong)(uVar6 < uVar6 + 0x10) & uVar6 + 0x10;
  if (uVar5 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
LAB_1401b126a:
    puVar9 = puVar8;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1401b1282;
  }
  else {
    if (uVar5 < 0x401) {
      uVar3 = uVar5 + 0xf;
      if (uVar3 <= uVar5) {
        uVar3 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar3 & 0xfffffffffffffff0);
      puVar8 = auStack_88 + lVar1;
      puVar7 = auStack_88 + lVar1;
      puVar4 = (undefined4 *)((longlong)local_58 + lVar1);
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar4 == (undefined4 *)0x0) goto LAB_1401b126a;
      *puVar4 = 0xcccc;
LAB_1401b1218:
      lpSrcStr = (LPCWSTR)(puVar4 + 4);
      puVar8 = puVar7;
    }
    else {
      puVar4 = (undefined4 *)_malloc_base();
      lpSrcStr = (LPCWSTR)0x0;
      puVar8 = auStack_88;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_1401b1218;
      }
    }
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_1401b126a;
    *(undefined8 *)(puVar8 + -8) = 0x1401b122e;
    FUN_1401c5830(lpSrcStr,0,uVar6);
    *(int *)(puVar8 + 0x28) = iVar2;
    *(LPCWSTR *)(puVar8 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar8 + -8) = 0x1401b124a;
    iVar2 = FUN_1401aeaf0(param_6,1,param_3,param_4);
    if (iVar2 == 0) goto LAB_1401b126a;
    *(undefined8 *)(puVar8 + -8) = 0x1401b1264;
    GetStringTypeW(param_2,lpSrcStr,iVar2,param_5);
  }
  puVar9 = puVar8;
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x1401b1282;
    FUN_1401aea30();
  }
LAB_1401b1282:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar6 = local_30 ^ (ulonglong)local_58;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1401b12a1;
  FUN_140188a00(uVar6);
}

