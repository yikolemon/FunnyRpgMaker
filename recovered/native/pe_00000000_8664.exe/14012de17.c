/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012de17 */

undefined1 FUN_14012de17(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_21 = 0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = 0x55;
  if (uVar2 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      local_21 = *(undefined1 *)(*param_1 + (ulonglong)uVar2);
    }
    else {
      iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,&local_21,1);
      if (iVar1 != 1) goto LAB_14012de79;
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + 1;
    uVar3 = 0;
  }
LAB_14012de79:
  *param_2 = uVar3;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return local_21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

