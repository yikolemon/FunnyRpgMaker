/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020b47 */

int FUN_140020b47(longlong *param_1,longlong *param_2,uint param_3,int param_4,uint param_5,
                 char param_6,longlong *param_7,uint *param_8)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar1 = *param_1;
  uVar6 = FUN_140020a41((longlong)param_2,param_3);
  iVar4 = (int)uVar6;
  if ((iVar4 == 0) && (uVar2 = FUN_140020aa5(param_2,&local_4c), iVar4 = local_4c, local_4c == 0)) {
    iVar4 = 8;
    if ((short)uVar2 < 0xfef) {
      if (-1 < (short)uVar2) {
        iVar9 = (short)uVar2 + 1;
        do {
          uVar5 = FUN_140020e0f(param_2,&local_4c);
          iVar4 = local_4c;
          if (((local_4c != 0) ||
              (uVar2 = FUN_140020aa5(param_2,&local_4c), iVar4 = local_4c, local_4c != 0)) ||
             (uVar3 = FUN_140020aa5(param_2,&local_4c), iVar4 = local_4c, local_4c != 0))
          goto LAB_140020c20;
          if (uVar5 == param_5) {
            *param_8 = (int)(short)uVar2 + 1;
            iVar4 = 8;
            if (0xaa6 < uVar2) goto LAB_140020c20;
            uVar6 = FUN_140020a41((longlong)param_2,param_3 + (int)(short)uVar3);
            iVar4 = (int)uVar6;
            if ((iVar4 != 0) ||
               (puVar7 = (undefined1 *)FUN_14001f231(lVar1,8,0,*param_8,0,&local_4c),
               iVar4 = local_4c, local_4c != 0)) goto LAB_140020c20;
            uVar5 = *param_8;
            if ((int)uVar5 < 1) goto LAB_140020d67;
            lVar10 = 0;
            goto LAB_140020cdd;
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar4 = 1;
    }
  }
  goto LAB_140020c20;
  while( true ) {
    uVar6 = FUN_140020a93((longlong)param_2,2);
    iVar4 = (int)uVar6;
    if ((iVar4 != 0) || (uVar5 = FUN_140020e0f(param_2,&local_4c), iVar4 = local_4c, local_4c != 0))
    goto LAB_140020def;
    uVar6 = FUN_140020a93((longlong)param_2,4);
    iVar4 = (int)uVar6;
    local_4c = iVar4;
    if (iVar4 != 0) goto LAB_140020def;
    *(uint *)(puVar7 + lVar10 * 8 + 4) = uVar5 & 0xffffff;
    lVar10 = lVar10 + 1;
    uVar5 = *param_8;
    if ((int)uVar5 <= lVar10) break;
LAB_140020cdd:
    uVar2 = FUN_140020aa5(param_2,&local_4c);
    *(ushort *)(puVar7 + lVar10 * 8) = uVar2;
    iVar4 = local_4c;
    if (local_4c != 0) goto LAB_140020def;
  }
LAB_140020d67:
  if (param_6 != '\0') {
    FUN_14009aaf0(puVar7,(longlong)(int)uVar5,8,&LAB_140020eb3);
    uVar5 = *param_8;
  }
  lVar10 = FUN_14001f231(lVar1,4,0,uVar5,0,&local_4c);
  iVar4 = local_4c;
  if (local_4c == 0) {
    if (0 < (int)*param_8) {
      lVar8 = 0;
      do {
        *(int *)(lVar10 + lVar8 * 4) = *(int *)(puVar7 + lVar8 * 8 + 4) + param_4;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)*param_8);
    }
    *param_7 = lVar10;
    iVar4 = 0;
  }
LAB_140020def:
  FUN_14001c53d(lVar1,(longlong)puVar7);
LAB_140020c20:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar4;
}

