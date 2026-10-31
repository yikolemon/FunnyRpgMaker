/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd2cc */

void __thiscall FUN_100cd2cc(int *param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  param_1 = (int *)*param_1;
  piVar4 = param_1 + 1;
  piVar5 = (int *)param_1[1];
  piVar6 = param_1;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    uVar1 = *param_3;
    do {
      uVar2 = *(ushort *)(piVar5 + 4);
      bVar3 = uVar2 < uVar1;
      if (uVar2 == uVar1) {
        bVar3 = *(byte *)((int)piVar5 + 0x12) < (byte)param_3[1];
      }
      if (bVar3) {
        piVar5 = piVar5 + 2;
      }
      else {
        piVar6 = piVar5;
        if (*(char *)((int)param_1 + 0xd) != '\0') {
          bVar3 = uVar1 < uVar2;
          if (uVar2 == uVar1) {
            bVar3 = (byte)param_3[1] < *(byte *)((int)piVar5 + 0x12);
          }
          if (bVar3) {
            param_1 = piVar5;
          }
        }
      }
      piVar5 = (int *)*piVar5;
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    piVar4 = param_1;
  }
  piVar4 = (int *)*piVar4;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      bVar3 = *param_3 < *(ushort *)(piVar4 + 4);
      if (*param_3 == *(ushort *)(piVar4 + 4)) {
        bVar3 = (byte)param_3[1] < *(byte *)((int)piVar4 + 0x12);
      }
      if (bVar3 != false) {
        param_1 = piVar4;
      }
      piVar4 = (int *)piVar4[(uint)(bVar3 ^ 1) * 2];
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
  }
  *param_2 = (int)piVar6;
  param_2[1] = (int)param_1;
  return;
}

