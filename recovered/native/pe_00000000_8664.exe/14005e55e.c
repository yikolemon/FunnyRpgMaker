/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e55e */

undefined8 FUN_14005e55e(longlong *param_1,char param_2)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if ((lVar2 == param_1[1]) ||
     (uVar3 = FUN_14005e836(param_1[0xb],lVar2,lVar2 + 2,*(uint *)(param_1 + 0xd) >> 8 & 1),
     (short)uVar3 == 0)) {
    return 0;
  }
  sVar1 = *(short *)((longlong)param_1 + 0x76);
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
        FUN_14005e8c6(param_1 + 7);
      }
      goto LAB_14005e5e9;
    }
    uVar4 = 0x400;
  }
  if (param_2 != '\0') {
    FUN_14005e8c6(param_1 + 7);
    FUN_14005dece(param_1 + 7);
    uVar4 = 0;
  }
LAB_14005e5e9:
  FUN_14005e95c(param_1 + 7,uVar3,uVar4);
  FUN_14005ddac(param_1);
  return 1;
}

