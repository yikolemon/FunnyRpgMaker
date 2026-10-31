/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f301 */

int FUN_14001f301(uint *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  iVar5 = 6;
  if ((param_3 == (longlong *)0x0 || param_1 == (uint *)0x0) || (lVar1 = *param_3, lVar1 == 0))
  goto LAB_14001f3f5;
  lVar7 = *(longlong *)(lVar1 + 0x98);
  pauVar6 = FUN_14001c423(lVar7,*param_1,&local_4c);
  iVar5 = local_4c;
  if (local_4c == 0) {
    uVar2 = *(undefined4 *)((longlong)param_3 + 4);
    lVar4 = param_3[1];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(int *)*pauVar6 = (int)*param_3;
    *(undefined4 *)(*pauVar6 + 4) = uVar2;
    *(int *)(*pauVar6 + 8) = (int)lVar4;
    *(undefined4 *)(*pauVar6 + 0xc) = uVar3;
    *(uint **)(*pauVar6 + 0x10) = param_1;
    if (*(code **)(param_1 + 2) == (code *)0x0) {
LAB_14001f3a1:
      lVar7 = FUN_14001f231(lVar7,8,*(uint *)(lVar1 + 0x38),*(uint *)(lVar1 + 0x38) + 1,
                            *(longlong *)(lVar1 + 0x40),&local_4c);
      *(longlong *)(lVar1 + 0x40) = lVar7;
      iVar5 = local_4c;
      if (local_4c == 0) {
        iVar5 = *(int *)(lVar1 + 0x38);
        *(int *)(lVar1 + 0x38) = iVar5 + 1;
        *(undefined1 (**) [32])(lVar7 + (longlong)iVar5 * 8) = pauVar6;
        iVar5 = 0;
        goto LAB_14001f3ed;
      }
    }
    else {
      iVar5 = (**(code **)(param_1 + 2))(pauVar6,param_2);
      if (iVar5 == 0) goto LAB_14001f3a1;
    }
    FUN_14001f2cb((longlong *)pauVar6);
    pauVar6 = (undefined1 (*) [32])0x0;
  }
LAB_14001f3ed:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = pauVar6;
  }
LAB_14001f3f5:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

