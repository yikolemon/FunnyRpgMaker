/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229d90 */

int FUN_10229d90(int param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char local_120 [256];
  
  if ((DAT_10389df8 & 4) == 0) {
    _memset(local_120,0,0x100);
    pbVar2 = param_3 + param_4;
    for (; param_3 != pbVar2; param_3 = param_3 + 1) {
      local_120[*param_3] = '\x01';
    }
    iVar3 = 0;
    if (param_2 != 0) {
      do {
        if (local_120[*(byte *)(param_1 + iVar3)] != '\0') {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_2);
    }
    return -1;
  }
  uVar5 = FUN_1022abb0(param_2,param_4,(byte)(DAT_10389df8 >> 5) & 1);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 2) {
    iVar3 = FUN_1022b560(param_1,uVar4,param_3,param_4);
    return iVar3;
  }
  if ((int)uVar5 == 1) {
    _memset(local_120,0,0x100);
    pbVar2 = param_3 + param_4;
    for (; param_3 != pbVar2; param_3 = param_3 + 1) {
      local_120[*param_3] = '\x01';
    }
    iVar3 = 0;
    if (param_2 != 0) {
      do {
        if (local_120[*(byte *)(param_1 + iVar3)] != '\0') {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_2);
    }
    return -1;
  }
  iVar1 = FUN_1022a800(param_1,uVar4,param_3,param_4);
  iVar3 = -1;
  if (iVar1 != param_2 + param_1) {
    iVar3 = iVar1 - param_1;
  }
  return iVar3;
}

