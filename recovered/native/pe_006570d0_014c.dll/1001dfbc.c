/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001dfbc */

undefined4 __thiscall FUN_1001dfbc(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    return 0;
  }
  sVar3 = FUN_10019fe0(iVar2,iVar2 + 1,(uint)param_1[0x10] >> 8 & 1);
  if (sVar3 == 0) {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0x4d);
  if (cVar1 == 'W') {
    uVar4 = 0x100;
  }
  else if (cVar1 == 'S') {
    uVar4 = 0x200;
  }
  else {
    if (cVar1 != 'D') {
      uVar4 = 0;
      if (param_2 != '\0') {
        FUN_1001e22e();
      }
      goto LAB_1001e040;
    }
    uVar4 = 0x400;
  }
  if (param_2 != '\0') {
    FUN_1001e22e();
    FUN_1001d9fe();
    uVar4 = 0;
  }
LAB_1001e040:
  FUN_1001e2d4((int)sVar3,uVar4);
  FUN_1001d8ea();
  return 1;
}

