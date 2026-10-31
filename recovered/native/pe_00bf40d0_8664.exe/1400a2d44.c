/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2d44 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400a2d44(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  LPCWSTR pWVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar11 = auStackY_88;
  puVar12 = auStackY_88;
  puVar13 = auStackY_88;
  local_30 = DAT_14012ea80 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar4 = (int)sVar5;
    iVar3 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar3 = iVar4;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  uVar2 = FUN_1400a1350(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar3,(LPWSTR)0x0,0);
  pWVar9 = (LPCWSTR)0x0;
  if (uVar2 == 0) goto LAB_1400a304f;
  uVar6 = (longlong)(int)uVar2 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)(int)uVar2 * 2) < uVar6) & uVar6;
  puVar13 = auStackY_88;
  if (uVar6 == 0) {
LAB_1400a3035:
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_1400a304f;
  }
  else {
    if (uVar6 < 0x401) {
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar11 = auStackY_88 + lVar1;
      puVar7 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar9 = (LPCWSTR)0x0;
      puVar13 = auStackY_88 + lVar1;
      if (puVar7 == (undefined4 *)0x0) goto LAB_1400a3035;
      *puVar7 = 0xcccc;
LAB_1400a2e50:
      pWVar9 = (LPCWSTR)(puVar7 + 4);
      puVar12 = puVar11;
    }
    else {
      puVar7 = _malloc_base(uVar6);
      pWVar9 = (LPCWSTR)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_1400a2e50;
      }
    }
    puVar13 = puVar12;
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_1400a3035;
    *(uint *)(puVar12 + 0x28) = uVar2;
    *(LPCWSTR *)(puVar12 + 0x20) = pWVar9;
    *(undefined8 *)(puVar12 + -8) = 0x1400a2e7a;
    iVar3 = FUN_1400a1350(param_8,1,param_4,iVar3,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28));
    if (iVar3 == 0) goto LAB_1400a3035;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + -8) = 0x1400a2ead;
    iVar3 = FUN_1400a1f80(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar12 + 0x20),
                          *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                          *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
    pWVar10 = (LPCWSTR)0x0;
    if (iVar3 == 0) goto LAB_1400a3035;
    if ((param_3 & 0x400) == 0) {
      uVar6 = (longlong)iVar3 * 2 + 0x10;
      uVar6 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar6) & uVar6;
      if (uVar6 == 0) {
LAB_1400a3018:
        if (pWVar10 != (LPCWSTR)0x0) {
LAB_1400a301d:
          if (*(int *)(pWVar10 + -8) == 0xdddd) {
            *(undefined8 *)(puVar13 + -8) = 0x1400a302e;
            FUN_1400a1290(pWVar10 + -8);
          }
        }
      }
      else {
        if (uVar6 < 0x401) {
          uVar8 = uVar6 + 0xf;
          if (uVar8 <= uVar6) {
            uVar8 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar12 + -8) = 0x1400a2f50;
          lVar1 = -(uVar8 & 0xfffffffffffffff0);
          puVar13 = puVar12 + lVar1;
          puVar7 = (undefined4 *)(puVar12 + lVar1 + 0x50);
          if (puVar7 == (undefined4 *)0x0) goto LAB_1400a303c;
          *puVar7 = 0xcccc;
          puVar12 = puVar12 + lVar1;
LAB_1400a2f7e:
          pWVar10 = (LPCWSTR)(puVar7 + 4);
          puVar13 = puVar12;
        }
        else {
          *(undefined8 *)(puVar12 + -8) = 0x1400a2f6e;
          puVar7 = _malloc_base(uVar6);
          pWVar10 = (LPCWSTR)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xdddd;
            goto LAB_1400a2f7e;
          }
        }
        if (pWVar10 != (LPCWSTR)0x0) {
          *(undefined8 *)(puVar13 + 0x40) = 0;
          *(undefined8 *)(puVar13 + 0x38) = 0;
          *(undefined8 *)(puVar13 + 0x30) = 0;
          *(int *)(puVar13 + 0x28) = iVar3;
          *(LPCWSTR *)(puVar13 + 0x20) = pWVar10;
          *(undefined8 *)(puVar13 + -8) = 0x1400a2fb4;
          iVar4 = FUN_1400a1f80(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar13 + 0x20),
                                *(int *)(puVar13 + 0x28),*(undefined8 *)(puVar13 + 0x30),
                                *(undefined8 *)(puVar13 + 0x38),*(undefined8 *)(puVar13 + 0x40));
          if (iVar4 == 0) goto LAB_1400a3018;
          *(undefined8 *)(puVar13 + 0x38) = 0;
          *(undefined8 *)(puVar13 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar13 + 0x28) = 0;
            *(undefined8 *)(puVar13 + 0x20) = 0;
            *(undefined8 *)(puVar13 + -8) = 0x1400a2fe2;
            iVar3 = FUN_1400a13e0(param_8,0,pWVar10,iVar3,*(LPSTR *)(puVar13 + 0x20),
                                  *(int *)(puVar13 + 0x28),*(LPBOOL *)(puVar13 + 0x30),
                                  *(LPBOOL *)(puVar13 + 0x38));
            if (iVar3 == 0) goto LAB_1400a3018;
          }
          else {
            *(int *)(puVar13 + 0x28) = param_7;
            *(undefined8 *)(puVar13 + 0x20) = param_6;
            *(undefined8 *)(puVar13 + -8) = 0x1400a2ffc;
            iVar3 = FUN_1400a13e0(param_8,0,pWVar10,iVar3,*(LPSTR *)(puVar13 + 0x20),
                                  *(int *)(puVar13 + 0x28),*(LPBOOL *)(puVar13 + 0x30),
                                  *(LPBOOL *)(puVar13 + 0x38));
            if (iVar3 == 0) goto LAB_1400a301d;
          }
          if (*(int *)(pWVar10 + -8) == 0xdddd) {
            *(undefined8 *)(puVar13 + -8) = 0x1400a3013;
            FUN_1400a1290(pWVar10 + -8);
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = param_7;
        *(undefined8 *)(puVar12 + 0x20) = param_6;
        *(undefined8 *)(puVar12 + -8) = 0x1400a2f05;
        iVar3 = FUN_1400a1f80(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                              *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
        if (iVar3 != 0) goto LAB_1400a303c;
      }
      goto LAB_1400a3035;
    }
  }
LAB_1400a303c:
  if (*(int *)(pWVar9 + -8) == 0xdddd) {
    *(undefined8 *)(puVar13 + -8) = 0x1400a304d;
    FUN_1400a1290(pWVar9 + -8);
  }
LAB_1400a304f:
  uVar6 = local_30 ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_1400a305b;
  FUN_140086440(uVar6);
}

