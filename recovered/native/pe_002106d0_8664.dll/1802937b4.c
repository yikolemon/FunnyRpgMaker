/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802937b4 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1802937b4(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  local_30 = DAT_180402640 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar4 = __strncnt(param_4,(longlong)param_5);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_180290f00(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar3);
  puVar9 = (undefined4 *)0x0;
  if (iVar2 == 0) goto LAB_180293abf;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar5) & uVar5;
  puVar12 = auStack_88;
  if (uVar5 == 0) {
LAB_180293aa5:
    if (puVar9 == (undefined4 *)0x0) goto LAB_180293abf;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar9 = (undefined4 *)0x0;
      puVar12 = auStack_88 + lVar1;
      if (puVar6 == (undefined4 *)0x0) goto LAB_180293aa5;
      *puVar6 = 0xcccc;
LAB_1802938c0:
      puVar9 = puVar6 + 4;
      puVar11 = puVar10;
    }
    else {
      puVar6 = (undefined4 *)_malloc_base(uVar5);
      puVar9 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1802938c0;
      }
    }
    puVar12 = puVar11;
    if (puVar9 == (undefined4 *)0x0) goto LAB_180293aa5;
    *(int *)(puVar11 + 0x28) = iVar2;
    *(undefined4 **)(puVar11 + 0x20) = puVar9;
    *(undefined8 *)(puVar11 + -8) = 0x1802938ea;
    iVar3 = FUN_180290f00(param_8,1,param_4,iVar3);
    if (iVar3 == 0) goto LAB_180293aa5;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + -8) = 0x18029391d;
    iVar3 = FUN_180291d4c(param_2,param_3,puVar9,iVar2);
    puVar6 = (undefined4 *)0x0;
    if (iVar3 == 0) goto LAB_180293aa5;
    if ((param_3 & 0x400) == 0) {
      uVar5 = (longlong)iVar3 * 2 + 0x10;
      uVar5 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar5) & uVar5;
      if (uVar5 == 0) {
LAB_180293a88:
        if (puVar6 != (undefined4 *)0x0) {
LAB_180293a8d:
          if (puVar6[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x180293a9e;
            FUN_180290e40();
          }
        }
      }
      else {
        if (uVar5 < 0x401) {
          uVar8 = uVar5 + 0xf;
          if (uVar8 <= uVar5) {
            uVar8 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar11 + -8) = 0x1802939c0;
          lVar1 = -(uVar8 & 0xfffffffffffffff0);
          puVar12 = puVar11 + lVar1;
          puVar7 = (undefined4 *)(puVar11 + lVar1 + 0x50);
          if (puVar7 == (undefined4 *)0x0) goto LAB_180293aac;
          *puVar7 = 0xcccc;
          puVar11 = puVar11 + lVar1;
LAB_1802939ee:
          puVar6 = puVar7 + 4;
          puVar12 = puVar11;
        }
        else {
          *(undefined8 *)(puVar11 + -8) = 0x1802939de;
          puVar7 = (undefined4 *)_malloc_base();
          puVar6 = (undefined4 *)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xdddd;
            goto LAB_1802939ee;
          }
        }
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = 0;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          *(int *)(puVar12 + 0x28) = iVar3;
          *(undefined4 **)(puVar12 + 0x20) = puVar6;
          *(undefined8 *)(puVar12 + -8) = 0x180293a24;
          iVar2 = FUN_180291d4c(param_2,param_3,puVar9,iVar2);
          if (iVar2 == 0) goto LAB_180293a88;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar12 + 0x28) = 0;
            *(undefined8 *)(puVar12 + 0x20) = 0;
            *(undefined8 *)(puVar12 + -8) = 0x180293a52;
            iVar3 = FUN_180290f90(param_8,0,puVar6,iVar3);
            if (iVar3 == 0) goto LAB_180293a88;
          }
          else {
            *(int *)(puVar12 + 0x28) = param_7;
            *(undefined8 *)(puVar12 + 0x20) = param_6;
            *(undefined8 *)(puVar12 + -8) = 0x180293a6c;
            iVar3 = FUN_180290f90(param_8,0,puVar6,iVar3);
            if (iVar3 == 0) goto LAB_180293a8d;
          }
          if (puVar6[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x180293a83;
            FUN_180290e40();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(int *)(puVar11 + 0x28) = param_7;
        *(undefined8 *)(puVar11 + 0x20) = param_6;
        *(undefined8 *)(puVar11 + -8) = 0x180293975;
        iVar3 = FUN_180291d4c(param_2,param_3,puVar9,iVar2);
        if (iVar3 != 0) goto LAB_180293aac;
      }
      goto LAB_180293aa5;
    }
  }
LAB_180293aac:
  if (puVar9[-4] == 0xdddd) {
    *(undefined8 *)(puVar12 + -8) = 0x180293abd;
    FUN_180290e40();
  }
LAB_180293abf:
  uVar5 = local_30 ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -8) = &UNK_180293acb;
  FUN_1802396d0(uVar5);
}

