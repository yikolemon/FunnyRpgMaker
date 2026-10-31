/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013a239 */

uint FUN_18013a239(undefined4 param_1,double *param_2,double *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  
  switch(param_1) {
  case 0:
    return (int)(char)((*(char *)param_3 < *(char *)param_2) - (*(char *)param_2 < *(char *)param_3)
                      );
  case 1:
    bVar2 = *(byte *)param_2;
    bVar3 = *(byte *)param_3;
    return (int)(char)((bVar2 >= bVar3 && bVar2 != bVar3) - (bVar2 < bVar3));
  case 2:
    return (int)(char)((*(short *)param_3 < *(short *)param_2) -
                      (*(short *)param_2 < *(short *)param_3));
  case 3:
    uVar4 = *(ushort *)param_2;
    uVar5 = *(ushort *)param_3;
    return (int)(char)((uVar4 >= uVar5 && uVar4 != uVar5) - (uVar4 < uVar5));
  case 4:
    return (int)(char)(((int)*(float *)param_3 < (int)*(float *)param_2) -
                      ((int)*(float *)param_2 < (int)*(float *)param_3));
  case 5:
    fVar6 = *(float *)param_2;
    fVar1 = *(float *)param_3;
    return (int)(char)(((uint)fVar6 >= (uint)fVar1 && fVar6 != fVar1) - ((uint)fVar6 < (uint)fVar1))
    ;
  case 6:
    return (int)(char)(((longlong)*param_3 < (longlong)*param_2) -
                      ((longlong)*param_2 < (longlong)*param_3));
  case 7:
    dVar7 = *param_2;
    dVar8 = *param_3;
    return (int)(char)(((ulonglong)dVar7 >= (ulonglong)dVar8 && dVar7 != dVar8) -
                      ((ulonglong)dVar7 < (ulonglong)dVar8));
  case 8:
    uVar9 = 0xffffffff;
    if (*(float *)param_3 <= *(float *)param_2) {
      uVar9 = (uint)(*(float *)param_3 < *(float *)param_2);
    }
    break;
  case 9:
    uVar9 = 0xffffffff;
    if (*param_3 <= *param_2) {
      uVar9 = (uint)(*param_3 < *param_2);
    }
    return uVar9;
  default:
    return 0;
  }
  return uVar9;
}

