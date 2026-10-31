/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ceed5 */

undefined2 FUN_1801ceed5(longlong *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0x55;
  if (*(uint *)(param_1 + 1) <= uVar3 + 1) {
LAB_1801cef28:
    uVar1 = 0;
    goto LAB_1801cef46;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (undefined2 *)(*param_1 + (ulonglong)uVar3);
      goto LAB_1801cef37;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = &local_2a;
    iVar2 = (*(code *)param_1[4])(param_1,(ulonglong)uVar3,puVar4,2);
    if (iVar2 != 2) goto LAB_1801cef28;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
LAB_1801cef37:
    uVar1 = *puVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar3 + 2;
  uVar5 = 0;
LAB_1801cef46:
  *param_2 = uVar5;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

