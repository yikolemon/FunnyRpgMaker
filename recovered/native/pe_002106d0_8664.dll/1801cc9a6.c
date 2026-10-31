/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc9a6 */

int FUN_1801cc9a6(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  iVar5 = 6;
  if ((param_3 == (longlong *)0x0 || param_1 == (undefined4 *)0x0) || (lVar1 = *param_3, lVar1 == 0)
     ) goto LAB_1801cca9a;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  puVar6 = (undefined4 *)FUN_1801c9a4b(uVar2,*param_1,&local_4c);
  iVar5 = local_4c;
  if (local_4c == 0) {
    uVar3 = *(undefined4 *)((longlong)param_3 + 4);
    lVar7 = param_3[1];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    *puVar6 = (int)*param_3;
    puVar6[1] = uVar3;
    puVar6[2] = (int)lVar7;
    puVar6[3] = uVar4;
    *(undefined4 **)(puVar6 + 4) = param_1;
    if (*(code **)(param_1 + 2) == (code *)0x0) {
LAB_1801cca46:
      local_68 = *(undefined8 *)(lVar1 + 0x40);
      local_60 = &local_4c;
      lVar7 = FUN_1801cc8d6(uVar2,8,*(int *)(lVar1 + 0x38),*(int *)(lVar1 + 0x38) + 1);
      *(longlong *)(lVar1 + 0x40) = lVar7;
      iVar5 = local_4c;
      if (local_4c == 0) {
        iVar5 = *(int *)(lVar1 + 0x38);
        *(int *)(lVar1 + 0x38) = iVar5 + 1;
        *(undefined4 **)(lVar7 + (longlong)iVar5 * 8) = puVar6;
        iVar5 = 0;
        goto LAB_1801cca92;
      }
    }
    else {
      iVar5 = (**(code **)(param_1 + 2))(puVar6,param_2);
      if (iVar5 == 0) goto LAB_1801cca46;
    }
    FUN_1801cc970(puVar6);
    puVar6 = (undefined4 *)0x0;
  }
LAB_1801cca92:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar6;
  }
LAB_1801cca9a:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

