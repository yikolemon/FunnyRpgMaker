/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b28c */

byte * __thiscall FUN_1001b28c(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = (uint)*param_3;
  if ((*(byte *)(param_1 + 0x75) & 1) != 0) {
    uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x68) + 4) + 0x10))((int)(char)*param_3);
  }
  cVar2 = (char)uVar3;
  if ((*(int *)(param_2 + 0x14) == 0) ||
     (pbVar4 = (byte *)FUN_1001b70c((int)cVar2,param_3,*(undefined4 *)(param_1 + 0x70),
                                    *(int *)(param_2 + 0x14),*(undefined4 *)(param_1 + 0x68),
                                    *(undefined4 *)(param_1 + 0x74)), pbVar4 == param_3)) {
    pbVar4 = param_3 + 1;
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0x75) & 8) == 0) {
        cVar2 = FUN_1001ba16((int)cVar2,iVar1);
      }
      else {
        cVar2 = FUN_1001b862((int)cVar2,iVar1,*(undefined4 *)(param_1 + 0x68));
      }
      if (cVar2 != '\0') goto LAB_1001b319;
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((*(byte *)(*(int *)(param_2 + 0x18) + ((uVar3 & 0xff) >> 3)) >> (uVar3 & 7) & 1
                     ) != 0);
    }
  }
  else {
LAB_1001b319:
    uVar3 = 1;
  }
  if (uVar3 == (*(uint *)(param_2 + 8) & 1)) {
    pbVar4 = param_3;
  }
  return pbVar4;
}

