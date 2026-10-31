/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a29a0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400a29a0(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,ulonglong param_4,
                  int param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  puVar9 = auStack_88;
  puVar11 = auStack_88;
  puVar10 = auStack_88;
  local_20 = DAT_14012ea80 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar1 = *(uint *)(local_38 + 0xc);
  uVar3 = FUN_1400a1e0c(param_2,param_3,(LPWSTR)0x0,0);
  if (uVar3 == 0) goto LAB_1400a2ae2;
  uVar7 = (longlong)(int)uVar3 * 2 + 0x10;
  uVar7 = -(ulonglong)((ulonglong)((longlong)(int)uVar3 * 2) < uVar7) & uVar7;
  if (uVar7 == 0) {
    pWVar8 = (LPWSTR)0x0;
LAB_1400a2aca:
    puVar11 = puVar10;
    if (pWVar8 == (LPWSTR)0x0) goto LAB_1400a2ae2;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar2;
      puVar9 = auStack_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_48 + lVar2);
      pWVar8 = (LPWSTR)0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_1400a2aca;
      *puVar6 = 0xcccc;
LAB_1400a2a71:
      pWVar8 = (LPWSTR)(puVar6 + 4);
      puVar10 = puVar9;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      pWVar8 = (LPWSTR)0x0;
      puVar10 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1400a2a71;
      }
    }
    if (pWVar8 == (LPWSTR)0x0) goto LAB_1400a2aca;
    *(undefined8 *)(puVar10 + -8) = 0x1400a2a8a;
    iVar4 = FUN_1400a1e0c(param_2,param_3,pWVar8,uVar3);
    if (iVar4 == 0) goto LAB_1400a2aca;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(int *)(puVar10 + 0x28) = param_5;
    *(ulonglong *)(puVar10 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar10 + -8) = 0x1400a2ac4;
    FUN_1400a13e0(uVar1,0,pWVar8,-1,*(LPSTR *)(puVar10 + 0x20),*(int *)(puVar10 + 0x28),
                  *(LPBOOL *)(puVar10 + 0x30),*(LPBOOL *)(puVar10 + 0x38));
  }
  puVar11 = puVar10;
  if (*(int *)(pWVar8 + -8) == 0xdddd) {
    *(undefined8 *)(puVar10 + -8) = 0x1400a2ae2;
    FUN_1400a1290(pWVar8 + -8);
  }
LAB_1400a2ae2:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  uVar7 = local_20 ^ (ulonglong)local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_1400a2b01;
  FUN_140086440(uVar7);
}

