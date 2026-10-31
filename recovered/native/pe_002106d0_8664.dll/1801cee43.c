/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cee43 */

undefined1 FUN_1801cee43(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_21 = 0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = 0x55;
  if (uVar2 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      local_21 = *(undefined1 *)(*param_1 + (ulonglong)uVar2);
    }
    else {
      iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,&local_21,1);
      if (iVar1 != 1) goto LAB_1801ceea5;
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + 1;
    uVar3 = 0;
  }
LAB_1801ceea5:
  *param_2 = uVar3;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return local_21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

