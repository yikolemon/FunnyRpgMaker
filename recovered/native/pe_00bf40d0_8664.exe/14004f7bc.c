/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f7bc */

int FUN_14004f7bc(longlong param_1,undefined8 *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  pbVar1 = (byte *)*param_2;
  if (*pbVar1 == 0x1e) {
    iVar2 = FUN_14004f85b(pbVar1,*(byte **)(param_1 + 0x10),0,param_3);
    return iVar2;
  }
  uVar3 = FUN_14004fc21(pbVar1,*(byte **)(param_1 + 0x10));
  if ((int)uVar3 < 0x8000) {
    *param_3 = 0;
    return uVar3 << 0x10;
  }
  lVar5 = 5;
  do {
    if ((int)uVar3 < *(int *)(&DAT_1400f6c90 + lVar5 * 4)) goto LAB_14004f813;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 10);
  lVar5 = 10;
LAB_14004f813:
  iVar2 = (int)lVar5;
  uVar4 = *(uint *)(&DAT_1400f6c7c + (longlong)iVar2 * 4);
  if ((int)uVar3 / (int)uVar4 < 0x8000) {
    *param_3 = iVar2 + -5;
  }
  else {
    *param_3 = iVar2 + -4;
    uVar4 = *(uint *)(&DAT_1400f6c80 + (longlong)iVar2 * 4);
  }
  iVar2 = FUN_14001ecff(uVar3,uVar4);
  return iVar2;
}

