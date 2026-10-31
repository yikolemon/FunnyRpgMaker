/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140184741 */

int FUN_140184741(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x2074);
  if (param_2 < uVar3) {
    iVar1 = FUN_14018629b(param_1);
    if (iVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 0x2074);
      goto LAB_140184772;
    }
LAB_1401847dc:
    iVar1 = 0;
  }
  else {
LAB_140184772:
    if (param_2 < uVar3 || param_2 - uVar3 == 0) {
      if (param_4 == 0) goto LAB_1401847dc;
    }
    else {
      iVar1 = FUN_1401862fd(param_1,param_2 - uVar3);
      if (param_4 == 0) {
        return 0;
      }
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar1 = 0;
    do {
      uVar3 = *(int *)(param_1 + 0x2080) - (int)*(undefined8 *)(param_1 + 0x2078);
      if (param_4 < uVar3) {
        uVar3 = param_4;
      }
      uVar4 = (ulonglong)uVar3;
      FUN_1401c5180(param_3,*(undefined8 *)(param_1 + 0x2078),uVar4);
      iVar1 = iVar1 + uVar3;
      *(longlong *)(param_1 + 0x2078) = *(longlong *)(param_1 + 0x2078) + uVar4;
      *(int *)(param_1 + 0x2074) = *(int *)(param_1 + 0x2074) + uVar3;
      param_4 = param_4 - uVar3;
      if (param_4 == 0) {
        return iVar1;
      }
      param_3 = param_3 + uVar4;
      iVar2 = FUN_140186347(param_1);
    } while (iVar2 == 0);
  }
  return iVar1;
}

