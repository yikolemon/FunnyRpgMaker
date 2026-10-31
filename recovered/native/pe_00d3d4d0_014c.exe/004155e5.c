/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004155e5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl
FUN_004155e5(uint *param_1,uint *param_2,float param_3,int param_4,size_t param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined8 uVar6;
  
  fVar5 = param_3;
  if ((int)param_3 < 0) {
    if (param_1 == param_2) {
      uVar2 = 0x84;
      goto LAB_004156dd;
    }
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (uint *)((int)param_1 + 1);
    fVar5 = (float)((uint)param_3 & (uint)DAT_004a88e0);
  }
  if ((~(uint)fVar5 & 0x7f800000) != 0) {
    if (param_4 == 3) {
      uVar6 = FUN_004157f2(param_1,param_2,fVar5,param_5);
      return uVar6;
    }
    if (param_4 != 2) {
      if (param_4 == 1) {
        uVar6 = FUN_0041572e((byte *)param_1,(byte *)param_2,fVar5,param_5);
        return uVar6;
      }
      uVar6 = FUN_00415a0a((byte *)param_1,(undefined1 *)param_2,(uint)fVar5,param_5);
      return uVar6;
    }
    uVar6 = FUN_00415775((byte *)param_1,(byte *)param_2,fVar5,param_5);
    return uVar6;
  }
  if (((uint)fVar5 & 0x7fffff) == 0) {
    uVar3 = 3;
    pcVar1 = &DAT_00503b60;
  }
  else if ((int)param_3 < 0 && ((uint)fVar5 & 0x7fffff) == 0x400000) {
    uVar3 = 8;
    pcVar1 = "nan(ind)";
  }
  else {
    bVar4 = ((uint)fVar5 >> 0x16 & 1) == 0;
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
LAB_004156dd:
  return CONCAT44(uVar2,param_1);
}

