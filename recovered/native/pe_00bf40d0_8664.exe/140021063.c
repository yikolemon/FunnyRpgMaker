/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021063 */

int FUN_140021063(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 1);
  if (param_1[4] == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    iVar3 = 0x55;
    if (param_2 <= uVar2 - uVar1 && uVar1 < uVar2) {
      param_1[7] = (ulonglong)uVar1 + *param_1;
      param_1[8] = (ulonglong)param_2 + (ulonglong)uVar1 + *param_1;
      *(uint *)((longlong)param_1 + 0xc) = param_2 + uVar1;
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x55;
    if (param_2 <= uVar2) {
      lVar5 = param_1[6];
      lVar4 = FUN_14001e961(lVar5,param_2,&local_2c);
      *param_1 = lVar4;
      iVar3 = local_2c;
      if (local_2c == 0) {
        uVar2 = (*(code *)param_1[4])
                          (param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar4,param_2);
        iVar3 = 0;
        lVar4 = *param_1;
        if (uVar2 < param_2) {
          FUN_14001c53d(lVar5,lVar4);
          *param_1 = 0;
          iVar3 = 0x55;
          lVar4 = 0;
        }
        param_1[7] = lVar4;
        lVar5 = (ulonglong)param_2 + lVar4;
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        param_1[8] = lVar5;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar2;
      }
    }
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

