/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cef73 */

uint FUN_1801cef73(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 auStack_58 [37];
  byte local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 2) goto LAB_1801ceff9;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      pbVar5 = (byte *)(*param_1 + (ulonglong)uVar2);
      goto LAB_1801cefd5;
    }
    uVar3 = 0;
  }
  else {
    pbVar5 = local_33;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,pbVar5,3);
    uVar3 = 0;
    if (iVar1 != 3) goto LAB_1801ceff9;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_1801cefd5:
    uVar3 = (uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 3;
  uVar4 = 0;
LAB_1801ceff9:
  *param_2 = uVar4;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

