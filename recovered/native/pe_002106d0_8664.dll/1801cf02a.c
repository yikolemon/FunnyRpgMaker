/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf02a */

undefined4 FUN_1801cf02a(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 3) goto LAB_1801cf09b;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar5 = (undefined4 *)(*param_1 + (ulonglong)uVar2);
      goto LAB_1801cf08c;
    }
    uVar3 = 0;
  }
  else {
    puVar5 = &local_34;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,puVar5,4);
    uVar3 = 0;
    if (iVar1 != 4) goto LAB_1801cf09b;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_1801cf08c:
    uVar3 = *puVar5;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 4;
  uVar4 = 0;
LAB_1801cf09b:
  *param_2 = uVar4;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

