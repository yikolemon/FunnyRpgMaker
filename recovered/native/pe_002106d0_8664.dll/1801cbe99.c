/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cbe99 */

int FUN_1801cbe99(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    iVar4 = 0x23;
    goto LAB_1801cbf6e;
  }
  if (param_2 == (longlong *)0x0) {
    iVar4 = 6;
    goto LAB_1801cbf6e;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    iVar4 = 0x22;
    goto LAB_1801cbf6e;
  }
  *param_2 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  plVar5 = (longlong *)FUN_1801c9a4b(uVar1,*(undefined4 *)(lVar2 + 0x3c),&local_44);
  if (local_44 == 0) {
    lVar6 = FUN_1801cc006(uVar1,0x18,&local_44);
    iVar4 = local_44;
    if (local_44 != 0) goto LAB_1801cbf3f;
    *plVar5 = param_1;
    lVar7 = FUN_1801c9a4b(uVar1,0x28,&local_44);
    iVar4 = local_44;
    if (local_44 == 0) {
      plVar5[7] = lVar7;
      pcVar3 = *(code **)(lVar2 + 0x58);
      if (pcVar3 != (code *)0x0) {
        iVar4 = (*pcVar3)(plVar5);
        if (iVar4 != 0) goto LAB_1801cbfb2;
      }
      *param_2 = (longlong)plVar5;
      *(longlong **)(lVar6 + 0x10) = plVar5;
      FUN_1801cc034(param_1 + 0xa8,lVar6);
      iVar4 = 0;
      goto LAB_1801cbf6e;
    }
LAB_1801cbfb2:
    FUN_1801c9b65(uVar1,lVar6);
LAB_1801cbf4f:
    FUN_1801c9b65(uVar1,plVar5[7]);
    plVar5[7] = 0;
  }
  else {
    lVar6 = 0;
    iVar4 = local_44;
LAB_1801cbf3f:
    FUN_1801c9b65(uVar1,lVar6);
    if (plVar5 != (longlong *)0x0) goto LAB_1801cbf4f;
  }
  FUN_1801c9b65(uVar1,plVar5);
LAB_1801cbf6e:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

