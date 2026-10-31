/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094ac2 */

undefined8 FUN_180094ac2(longlong *param_1,char param_2)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  if ((lVar2 == param_1[1]) ||
     (uVar3 = FUN_1800910a4(param_1[0xb],lVar2,lVar2 + 2,*(uint *)(param_1 + 0xd) >> 8 & 1),
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
        FUN_180094d9a(param_1 + 7);
      }
      goto LAB_180094b4d;
    }
    uVar4 = 0x400;
  }
  if (param_2 != '\0') {
    FUN_180094d9a(param_1 + 7);
    FUN_18001d792(param_1 + 7);
    uVar4 = 0;
  }
LAB_180094b4d:
  FUN_180094e30(param_1 + 7,uVar3,uVar4);
  FUN_180094520(param_1);
  return 1;
}

