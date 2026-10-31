/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100934c6 */

undefined4 __thiscall FUN_100934c6(int *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    return 0;
  }
  sVar3 = FUN_1008fd3c(iVar2,iVar2 + 2,(uint)param_1[0x10] >> 8 & 1);
  if (sVar3 == 0) {
    return 0;
  }
  sVar1 = *(short *)((int)param_1 + 0x4e);
  if (sVar1 == 0x57) {
    uVar4 = 0x100;
  }
  else if (sVar1 == 0x53) {
    uVar4 = 0x200;
  }
  else {
    if (sVar1 != 0x44) {
      uVar4 = 0;
      if (param_2 != '\0') {
        FUN_10093760();
      }
      goto LAB_1009354a;
    }
    uVar4 = 0x400;
  }
  if (param_2 != '\0') {
    FUN_10093760();
    FUN_1001d9fe();
    uVar4 = 0;
  }
LAB_1009354a:
  FUN_10093806((int)sVar3,uVar4);
  FUN_1009301c();
  return 1;
}

