/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f4fa */

int * __thiscall FUN_1002f4fa(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  param_1[0x25] = param_1[0x25] + (iVar3 >> 5);
  if ((param_2 % 0x20 != 0) && (iVar3 = param_1[1], iVar3 != 0)) {
    bVar2 = (byte)(param_2 % 0x20);
    iVar5 = 0;
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(*param_1 + iVar5 * 4);
      uVar6 = uVar1 >> (0x20 - bVar2 & 0x1f);
      *(uint *)(*param_1 + iVar5 * 4) = (uVar1 << (bVar2 & 0x1f)) + uVar4;
      iVar5 = iVar5 + 1;
      uVar4 = uVar6;
    } while (iVar3 != iVar5);
    if (uVar6 != 0) {
      iVar3 = param_1[1];
      uVar4 = iVar3 + 1;
      if ((uint)param_1[2] < uVar4) {
        (*(code *)param_1[3])(param_1,uVar4);
        iVar3 = param_1[1];
        uVar4 = iVar3 + 1;
      }
      param_1[1] = uVar4;
      *(uint *)(*param_1 + iVar3 * 4) = uVar6;
    }
  }
  return param_1;
}

