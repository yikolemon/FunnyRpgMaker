/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e7f4 */

int FUN_14001e7f4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined1 (*pauVar5) [32];
  longlong *plVar6;
  undefined1 (*pauVar7) [32];
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    iVar4 = 0x23;
    goto LAB_14001e8c9;
  }
  if (param_2 == (undefined8 *)0x0) {
    iVar4 = 6;
    goto LAB_14001e8c9;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    iVar4 = 0x22;
    goto LAB_14001e8c9;
  }
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  pauVar5 = FUN_14001c423(lVar1,*(uint *)(lVar2 + 0x3c),&local_44);
  if (local_44 == 0) {
    plVar6 = (longlong *)FUN_14001e961(lVar1,0x18,&local_44);
    iVar4 = local_44;
    if (local_44 != 0) goto LAB_14001e89a;
    *(longlong *)*pauVar5 = param_1;
    pauVar7 = FUN_14001c423(lVar1,0x28,&local_44);
    iVar4 = local_44;
    if (local_44 == 0) {
      *(undefined1 (**) [32])(pauVar5[1] + 0x18) = pauVar7;
      pcVar3 = *(code **)(lVar2 + 0x58);
      if (pcVar3 != (code *)0x0) {
        iVar4 = (*pcVar3)(pauVar5);
        if (iVar4 != 0) goto LAB_14001e90d;
      }
      *param_2 = pauVar5;
      plVar6[2] = (longlong)pauVar5;
      FUN_14001e98f((undefined8 *)(param_1 + 0xa8),plVar6);
      iVar4 = 0;
      goto LAB_14001e8c9;
    }
LAB_14001e90d:
    FUN_14001c53d(lVar1,(longlong)plVar6);
LAB_14001e8aa:
    FUN_14001c53d(lVar1,*(longlong *)(pauVar5[1] + 0x18));
    *(undefined8 *)(pauVar5[1] + 0x18) = 0;
  }
  else {
    plVar6 = (longlong *)0x0;
    iVar4 = local_44;
LAB_14001e89a:
    FUN_14001c53d(lVar1,(longlong)plVar6);
    if (pauVar5 != (undefined1 (*) [32])0x0) goto LAB_14001e8aa;
  }
  FUN_14001c53d(lVar1,(longlong)pauVar5);
LAB_14001e8c9:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_68)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_68);
}

