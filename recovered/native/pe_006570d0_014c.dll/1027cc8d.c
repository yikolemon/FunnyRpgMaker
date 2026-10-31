/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027cc8d */

uint FUN_1027cc8d(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < param_2) {
    do {
      in_EAX = (iVar3 + param_2) / 2;
      iVar2 = FUN_1026b1a0(*param_3,*(undefined4 *)(in_EAX * 0xc + param_1));
      if (iVar2 == 0) {
        iVar3 = param_1 + 4 + in_EAX * 0xc;
        *param_3 = iVar3;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
      iVar1 = in_EAX - 1;
      if (-1 < iVar2) {
        iVar3 = in_EAX + 1;
        iVar1 = param_2;
      }
      param_2 = iVar1;
    } while (iVar3 <= param_2);
  }
  return in_EAX & 0xffffff00;
}

