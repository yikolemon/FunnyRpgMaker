/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140014d11 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140014d11(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],float param_4,
             int param_5,uint param_6)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_140014def;
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [32])(*param_2 + 1);
    fVar4 = (float)((uint)param_4 & (uint)DAT_1400b6b20);
  }
  if ((~(uint)fVar4 & 0x7f800000) != 0) {
    if (param_5 == 3) {
      FUN_140014f1a(param_1,(undefined8 *)param_2,(undefined8 *)param_3,fVar4,param_6);
      return param_1;
    }
    if (param_5 != 2) {
      if (param_5 == 1) {
        FUN_140014e51(param_1,param_2,param_3,fVar4,param_6);
        return param_1;
      }
      FUN_140015162(param_1,(byte *)param_2,(byte *)param_3,(uint)fVar4,param_6);
      return param_1;
    }
    FUN_140014e92(param_1,param_2,param_3,fVar4,param_6);
    return param_1;
  }
  if (((uint)fVar4 & 0x7fffff) == 0) {
    uVar2 = 3;
    pcVar1 = "inf";
  }
  else if ((int)param_4 < 0 && ((uint)fVar4 & 0x7fffff) == 0x400000) {
    uVar2 = 8;
    pcVar1 = "nan(ind)";
  }
  else {
    bVar3 = ((uint)fVar4 >> 0x16 & 1) == 0;
    pcVar1 = "nan";
    if (bVar3) {
      pcVar1 = "nan(snan)";
    }
    uVar2 = 3;
    if (bVar3) {
      uVar2 = 9;
    }
  }
  if ((longlong)uVar2 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1400b3550((undefined8 *)param_2,(undefined8 *)pcVar1,uVar2);
    *param_1 = (longlong)(*param_2 + uVar2);
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_140014def:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

