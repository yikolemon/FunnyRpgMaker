/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d2fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_0040d2fe(uint *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar3 = param_3;
  if ((int)param_3 < 0) {
    if (param_1 == param_2) {
      uVar2 = 0x84;
      goto LAB_0040d3d2;
    }
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (uint *)((int)param_1 + 1);
    uVar3 = param_3 & (uint)DAT_004a88e0;
  }
  if ((~uVar3 & 0x7f800000) != 0) {
    uVar5 = FUN_0040d3d8(param_1,param_2,uVar3,0);
    return uVar5;
  }
  if ((uVar3 & 0x7fffff) == 0) {
    uVar3 = 3;
    pcVar1 = &DAT_00503b60;
  }
  else if ((int)param_3 < 0 && (uVar3 & 0x7fffff) == 0x400000) {
    uVar3 = 8;
    pcVar1 = "nan(ind)";
  }
  else {
    bVar4 = (uVar3 >> 0x16 & 1) == 0;
    pcVar1 = &DAT_0050366f;
    if (bVar4) {
      pcVar1 = "nan(snan)";
    }
    uVar3 = 3;
    if (bVar4) {
      uVar3 = 9;
    }
  }
  if ((int)param_2 - (int)param_1 < (int)uVar3) {
    return CONCAT44(0x84,param_2);
  }
  FUN_004878c0(param_1,(uint *)pcVar1,uVar3);
  param_1 = (uint *)((int)param_1 + uVar3);
  uVar2 = 0;
LAB_0040d3d2:
  return CONCAT44(uVar2,param_1);
}

