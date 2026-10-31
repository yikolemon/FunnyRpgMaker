/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140051af0 */

int FUN_140051af0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  int iVar3;
  longlong *plVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_a8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  local_4c = 0;
  lVar1 = *(longlong *)(*param_1 + 0x30);
  *param_2 = 0;
  if ((param_1[4] == 0) && (iVar3 = FUN_140052d4b(param_1), local_4c = iVar3, iVar3 != 0))
  goto LAB_140051cce;
  iVar3 = (int)param_1[2];
  if (iVar3 == 0) {
    iVar3 = 0;
    goto LAB_140051cce;
  }
  uVar8 = *(int *)((longlong)param_1 + 0x1c) + iVar3;
  plVar4 = (longlong *)FUN_14001f231(lVar1,8,0,iVar3 + 1,0,&local_4c);
  if (local_4c == 0) {
    if (param_3 == (undefined8 *)0x0) {
      pauVar5 = (undefined1 (*) [32])0x0;
LAB_140051bd2:
      pauVar2 = (undefined1 (*) [32])param_1[5];
      pauVar6 = pauVar5;
      if (param_3 == (undefined8 *)0x0) {
        pauVar6 = pauVar2;
      }
      *plVar4 = (longlong)pauVar6;
      if ((int)param_1[2] != 0) {
        uVar10 = 1;
        uVar9 = 0;
        uVar12 = 0;
        do {
          uVar11 = (ulonglong)uVar10;
          uVar7 = *(int *)(param_1[4] + uVar11 * 4) - 1;
          uVar13 = uVar12;
          if ((uVar12 <= uVar7) &&
             (uVar13 = *(uint *)((longlong)param_1 + 0x1c),
             uVar7 < *(uint *)((longlong)param_1 + 0x1c))) {
            uVar13 = uVar7;
          }
          if (param_3 == (undefined8 *)0x0) {
            plVar4[uVar11] = (longlong)(*pauVar2 + uVar13);
          }
          else {
            plVar4[uVar11] = (longlong)(*pauVar5 + (ulonglong)uVar9 + (ulonglong)uVar13);
            if (uVar13 != uVar12) {
              FUN_1400b3550((undefined8 *)plVar4[uVar10 - 1],(undefined8 *)(*pauVar2 + uVar12),
                            (longlong)(*pauVar5 + (ulonglong)uVar9 + (ulonglong)uVar13) -
                            plVar4[uVar10 - 1]);
              *(undefined1 *)plVar4[uVar11] = 0;
              plVar4[uVar11] = plVar4[uVar11] + 1;
              uVar9 = uVar9 + 1;
            }
          }
          uVar10 = uVar10 + 1;
          uVar12 = uVar13;
        } while (uVar10 <= *(uint *)(param_1 + 2));
      }
      *param_2 = plVar4;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = pauVar5;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar8;
      }
    }
    else {
      pauVar5 = FUN_14001c423(lVar1,uVar8,&local_4c);
      if (local_4c == 0) goto LAB_140051bd2;
    }
    if ((local_4c != 0) && (pauVar5 != (undefined1 (*) [32])0x0)) {
      FUN_14001c53d(lVar1,(longlong)pauVar5);
    }
  }
  iVar3 = local_4c;
  if (plVar4 != (longlong *)0x0 && local_4c != 0) {
    FUN_14001c53d(lVar1,(longlong)plVar4);
    iVar3 = local_4c;
  }
LAB_140051cce:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return iVar3;
}

