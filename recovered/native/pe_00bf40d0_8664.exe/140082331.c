/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140082331 */

int FUN_140082331(longlong *param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x2074);
  if (param_2 < uVar4) {
    uVar1 = FUN_140083e8b(param_1);
    if ((int)uVar1 == 0) {
      uVar4 = *(uint *)((longlong)param_1 + 0x2074);
      goto LAB_140082362;
    }
LAB_1400823cc:
    iVar3 = 0;
  }
  else {
LAB_140082362:
    if (param_2 < uVar4 || param_2 - uVar4 == 0) {
      if (param_4 == 0) goto LAB_1400823cc;
    }
    else {
      uVar2 = FUN_140083eed(param_1,param_2 - uVar4);
      if (param_4 == 0) {
        return 0;
      }
      if ((int)uVar2 != 0) {
        return 0;
      }
    }
    iVar3 = 0;
    do {
      uVar4 = (int)param_1[0x410] - (int)(undefined8 *)param_1[0x40f];
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
      uVar1 = (ulonglong)uVar4;
      FUN_1400b3550(param_3,(undefined8 *)param_1[0x40f],uVar1);
      iVar3 = iVar3 + uVar4;
      param_1[0x40f] = param_1[0x40f] + uVar1;
      *(int *)((longlong)param_1 + 0x2074) = *(int *)((longlong)param_1 + 0x2074) + uVar4;
      param_4 = param_4 - uVar4;
      if (param_4 == 0) {
        return iVar3;
      }
      param_3 = (undefined8 *)((longlong)param_3 + uVar1);
      uVar2 = FUN_140083f37(param_1);
    } while ((int)uVar2 == 0);
  }
  return iVar3;
}

