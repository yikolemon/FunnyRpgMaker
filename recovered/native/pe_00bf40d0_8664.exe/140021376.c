/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021376 */

uint FUN_140021376(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 auStack_58 [37];
  byte local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 2) goto LAB_1400213fc;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      pbVar5 = (byte *)(*param_1 + (ulonglong)uVar2);
      goto LAB_1400213d8;
    }
    uVar3 = 0;
  }
  else {
    pbVar5 = local_33;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,pbVar5,3);
    uVar3 = 0;
    if (iVar1 != 3) goto LAB_1400213fc;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_1400213d8:
    uVar3 = (uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 3;
  uVar4 = 0;
LAB_1400213fc:
  *param_2 = uVar4;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

