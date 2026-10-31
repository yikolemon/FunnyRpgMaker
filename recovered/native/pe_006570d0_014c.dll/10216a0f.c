/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10216a0f */

bool FUN_10216a0f(int param_1,short param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  if (*(short *)(param_1 + 0x154) != 0) {
    iVar4 = 0;
    uVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x164);
      if ((*(short *)(iVar1 + 6 + iVar4) == param_2) && (*(short *)(iVar1 + 8 + iVar4) != 0)) {
        sVar2 = *(short *)(iVar1 + iVar4);
        if (sVar2 == 3) {
          if ((1 < *(ushort *)(iVar1 + 2 + iVar4)) ||
             ((*(short *)(iVar1 + 4 + iVar4) != 0x409 && (*param_3 != 0xffffffff))))
          goto LAB_10216a9b;
          *param_3 = uVar3;
          sVar2 = *(short *)(iVar1 + iVar4);
        }
        if (((sVar2 == 1) && (*(short *)(iVar1 + 2 + iVar4) == 0)) &&
           ((*(short *)(iVar1 + 4 + iVar4) == 0 || (*param_4 == 0xffffffff)))) {
          *param_4 = uVar3;
        }
      }
LAB_10216a9b:
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < *(ushort *)(param_1 + 0x154));
  }
  bVar5 = true;
  if ((int)*param_3 < 0) {
    bVar5 = -1 < (int)*param_4;
  }
  return bVar5;
}

