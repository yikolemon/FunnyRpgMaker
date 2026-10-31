/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005fca0 */

int FUN_14005fca0(longlong param_1,char *param_2,byte *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar3 = *(longlong *)(param_1 + 0x80);
  local_3c = 0;
  plVar5 = (longlong *)thunk_FUN_14001ccd6(param_2,*(longlong *)(param_1 + 0x70));
  if (plVar5 != (longlong *)0x0) {
    lVar8 = *(longlong *)(param_1 + 0x58) + *plVar5 * 0x18;
    iVar2 = *(int *)(lVar8 + 8);
    if (iVar2 == 3) {
      uVar4 = FUN_14005f2d6(param_3);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 1) {
          FUN_14001c53d(lVar3,*(longlong *)(lVar8 + 0x10));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
            uVar6 = FUN_140021e43(lVar3,(char *)param_3,&local_3c);
            *(undefined8 *)(lVar8 + 0x10) = uVar6;
          }
        }
        goto LAB_14005feb9;
      }
      uVar4 = FUN_14005ff49((char *)param_3);
    }
    *(uint *)(lVar8 + 0x10) = uVar4;
    goto LAB_14005feb9;
  }
  puVar7 = (ulonglong *)thunk_FUN_14001ccd6(param_2,param_1 + 0x98);
  if (puVar7 == (ulonglong *)0x0) {
    uVar10 = FUN_14005ffd8(param_2,param_1);
    local_3c = (int)uVar10;
    if (local_3c != 0) goto LAB_14005feb9;
    puVar7 = (ulonglong *)thunk_FUN_14001ccd6(param_2,param_1 + 0x98);
  }
  uVar4 = *(uint *)(param_1 + 0x54);
  if (uVar4 == *(uint *)(param_1 + 0x50)) {
    lVar8 = FUN_14001f231(lVar3,0x18,uVar4,uVar4 + 1,*(longlong *)(param_1 + 0x58),&local_3c);
    *(longlong *)(param_1 + 0x58) = lVar8;
    if (local_3c != 0) goto LAB_14005feb9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  uVar10 = *puVar7;
  if (uVar10 < 0x52) {
    ppuVar9 = &PTR_s_ADD_STYLE_NAME_1400f9010 + uVar10 * 3;
  }
  else {
    ppuVar9 = (undefined **)(*(longlong *)(param_1 + 0x88) + uVar10 * 0x18 + -0x7b0);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x18);
  puVar11 = *ppuVar9;
  *puVar1 = puVar11;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(ppuVar9 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)ppuVar9 + 0xc);
  iVar2 = *(int *)(ppuVar9 + 1);
  if (iVar2 == 3) {
    uVar4 = FUN_14005f2d6(param_3);
LAB_14005fe98:
    *(uint *)(puVar1 + 2) = uVar4;
  }
  else {
    if (iVar2 == 2) {
      uVar4 = FUN_14005ff49((char *)param_3);
      goto LAB_14005fe98;
    }
    if (((iVar2 == 1) && (puVar1[2] = 0, param_3 != (byte *)0x0)) && (*param_3 != 0)) {
      uVar6 = FUN_140021e43(lVar3,(char *)param_3,&local_3c);
      puVar1[2] = uVar6;
      if (local_3c != 0) goto LAB_14005feb9;
      puVar11 = (undefined *)*puVar1;
    }
  }
  local_3c = FUN_14001cbca(puVar11,(ulonglong)*(uint *)(param_1 + 0x54),*(uint **)(param_1 + 0x70),
                           lVar3);
  if (local_3c == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
LAB_14005feb9:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

