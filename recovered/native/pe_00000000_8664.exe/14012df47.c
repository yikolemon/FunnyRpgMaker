/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012df47 */

uint FUN_14012df47(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 auStack_58 [37];
  byte local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 2) goto LAB_14012dfcd;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      pbVar5 = (byte *)(*param_1 + (ulonglong)uVar2);
      goto LAB_14012dfa9;
    }
    uVar3 = 0;
  }
  else {
    pbVar5 = local_33;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,pbVar5,3);
    uVar3 = 0;
    if (iVar1 != 3) goto LAB_14012dfcd;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_14012dfa9:
    uVar3 = (uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 3;
  uVar4 = 0;
LAB_14012dfcd:
  *param_2 = uVar4;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

