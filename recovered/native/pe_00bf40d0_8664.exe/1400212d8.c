/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400212d8 */

undefined2 FUN_1400212d8(longlong *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0x55;
  if (*(uint *)(param_1 + 1) <= uVar3 + 1) {
LAB_14002132b:
    uVar1 = 0;
    goto LAB_140021349;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (undefined2 *)(*param_1 + (ulonglong)uVar3);
      goto LAB_14002133a;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = &local_2a;
    iVar2 = (*(code *)param_1[4])(param_1,(ulonglong)uVar3,puVar4,2);
    if (iVar2 != 2) goto LAB_14002132b;
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
LAB_14002133a:
    uVar1 = *puVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar3 + 2;
  uVar5 = 0;
LAB_140021349:
  *param_2 = uVar5;
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

