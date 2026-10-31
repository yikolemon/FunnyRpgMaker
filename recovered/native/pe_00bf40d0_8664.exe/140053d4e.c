/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053d4e */

int FUN_140053d4e(longlong param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [36];
  uint local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x1e8);
  iVar7 = *(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1a4);
  uVar6 = FUN_140020a41((longlong)plVar2,
                        param_2 * iVar7 + *(int *)(param_1 + 0x1c0) + *(int *)(param_1 + 0x1a0));
  iVar3 = (int)uVar6;
  if ((iVar3 == 0) && (iVar3 = FUN_140021063(plVar2,iVar7 * 2), iVar3 == 0)) {
    local_50 = plVar2[7];
    uVar5 = *(uint *)(param_1 + 0x1a4);
    uVar4 = FUN_140053e87(&local_50,uVar5);
    uVar1 = *(uint *)(param_1 + 0x1a8);
    local_54 = FUN_140053e87(&local_50,uVar1);
    local_50 = local_50 + (ulonglong)uVar5;
    uVar5 = FUN_140053e87(&local_50,uVar1);
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar4;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_54;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar5;
    }
    iVar3 = 9;
    if ((uVar4 < *(uint *)(param_1 + 0x1b0)) && (uVar5 <= *(uint *)(plVar2 + 1))) {
      iVar3 = (uint)(uVar5 < local_54) * 9;
    }
    FUN_140021187(plVar2);
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar3;
}

