/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ae6d */

int FUN_14012ae6d(longlong param_1,longlong *param_2)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    iVar4 = 0x23;
    goto LAB_14012af42;
  }
  if (param_2 == (longlong *)0x0) {
    iVar4 = 6;
    goto LAB_14012af42;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    iVar4 = 0x22;
    goto LAB_14012af42;
  }
  *param_2 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  plVar5 = (longlong *)FUN_140128a1f(uVar1,*(undefined4 *)(lVar2 + 0x3c),&local_44);
  if (local_44 == 0) {
    lVar6 = FUN_14012afda(uVar1,0x18,&local_44);
    iVar4 = local_44;
    if (local_44 != 0) goto LAB_14012af13;
    *plVar5 = param_1;
    lVar7 = FUN_140128a1f(uVar1,0x28,&local_44);
    iVar4 = local_44;
    if (local_44 == 0) {
      plVar5[7] = lVar7;
      pcVar3 = *(code **)(lVar2 + 0x58);
      if (pcVar3 != (code *)0x0) {
        iVar4 = (*pcVar3)(plVar5);
        if (iVar4 != 0) goto LAB_14012af86;
      }
      *param_2 = (longlong)plVar5;
      *(longlong **)(lVar6 + 0x10) = plVar5;
      FUN_14012b008(param_1 + 0xa8,lVar6);
      iVar4 = 0;
      goto LAB_14012af42;
    }
LAB_14012af86:
    FUN_140128b39(uVar1,lVar6);
LAB_14012af23:
    FUN_140128b39(uVar1,plVar5[7]);
    plVar5[7] = 0;
  }
  else {
    lVar6 = 0;
    iVar4 = local_44;
LAB_14012af13:
    FUN_140128b39(uVar1,lVar6);
    if (plVar5 != (longlong *)0x0) goto LAB_14012af23;
  }
  FUN_140128b39(uVar1,plVar5);
LAB_14012af42:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

