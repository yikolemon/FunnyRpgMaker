/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140161d50 */

int FUN_140161d50(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  local_3c = 0;
  plVar6 = (longlong *)thunk_FUN_1401292d2(param_2,*(undefined8 *)(param_1 + 0x70));
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x58) + *plVar6 * 0x18;
    iVar3 = *(int *)(lVar1 + 8);
    if (iVar3 == 3) {
      uVar5 = FUN_140161386(param_3);
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 == 1) {
          FUN_140128b39(uVar7,*(undefined8 *)(lVar1 + 0x10));
          *(undefined8 *)(lVar1 + 0x10) = 0;
          if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
            uVar7 = FUN_14012ea14(uVar7,param_3,&local_3c);
            *(undefined8 *)(lVar1 + 0x10) = uVar7;
          }
        }
        goto LAB_140161f69;
      }
      uVar5 = FUN_140161ff9(param_3);
    }
    *(undefined4 *)(lVar1 + 0x10) = uVar5;
    goto LAB_140161f69;
  }
  puVar8 = (ulonglong *)thunk_FUN_1401292d2(param_2,param_1 + 0x98);
  if (puVar8 == (ulonglong *)0x0) {
    local_3c = FUN_140162088(param_2,param_1);
    if (local_3c != 0) goto LAB_140161f69;
    puVar8 = (ulonglong *)thunk_FUN_1401292d2(param_2,param_1 + 0x98);
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 == *(int *)(param_1 + 0x50)) {
    local_58 = *(undefined8 *)(param_1 + 0x58);
    local_50 = &local_3c;
    uVar9 = FUN_14012b8aa(uVar7,0x18,iVar3,iVar3 + 1);
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    if (local_3c != 0) goto LAB_140161f69;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  uVar4 = *puVar8;
  if (uVar4 < 0x52) {
    ppuVar10 = &PTR_s_ADD_STYLE_NAME_140ea0250 + uVar4 * 3;
  }
  else {
    ppuVar10 = (undefined **)(*(longlong *)(param_1 + 0x88) + uVar4 * 0x18 + -0x7b0);
  }
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x18);
  puVar11 = *ppuVar10;
  *puVar2 = puVar11;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(ppuVar10 + 1);
  *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)ppuVar10 + 0xc);
  iVar3 = *(int *)(ppuVar10 + 1);
  if (iVar3 == 3) {
    uVar5 = FUN_140161386(param_3);
LAB_140161f48:
    *(undefined4 *)(puVar2 + 2) = uVar5;
  }
  else {
    if (iVar3 == 2) {
      uVar5 = FUN_140161ff9(param_3);
      goto LAB_140161f48;
    }
    if (((iVar3 == 1) && (puVar2[2] = 0, param_3 != (char *)0x0)) && (*param_3 != '\0')) {
      uVar9 = FUN_14012ea14(uVar7,param_3,&local_3c);
      puVar2[2] = uVar9;
      if (local_3c != 0) goto LAB_140161f69;
      puVar11 = (undefined *)*puVar2;
    }
  }
  local_3c = FUN_1401291c6(puVar11,*(undefined4 *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x70),
                           uVar7);
  if (local_3c == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
LAB_140161f69:
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_78)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
}

