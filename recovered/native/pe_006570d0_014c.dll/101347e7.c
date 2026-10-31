/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101347e7 */

uint FUN_101347e7(undefined4 param_1,double *param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  switch(param_1) {
  case 0:
    return (int)(char)((*(char *)param_3 < *(char *)param_2) - (*(char *)param_2 < *(char *)param_3)
                      );
  case 1:
    bVar1 = *(byte *)param_2;
    bVar2 = *(byte *)param_3;
    return (int)(char)((bVar1 >= bVar2 && bVar1 != bVar2) - (bVar1 < bVar2));
  case 2:
    return (int)(char)((*(short *)param_3 < *(short *)param_2) -
                      (*(short *)param_2 < *(short *)param_3));
  case 3:
    uVar3 = *(ushort *)param_2;
    uVar4 = *(ushort *)param_3;
    return (int)(char)((uVar3 >= uVar4 && uVar3 != uVar4) - (uVar3 < uVar4));
  case 4:
    return (int)(char)(((int)*(float *)param_3 < (int)*(float *)param_2) -
                      ((int)*(float *)param_2 < (int)*(float *)param_3));
  case 5:
    fVar6 = *(float *)param_2;
    fVar5 = *(float *)param_3;
    return (int)(char)(((uint)fVar6 >= (uint)fVar5 && fVar6 != fVar5) - ((uint)fVar6 < (uint)fVar5))
    ;
  case 6:
    fVar5 = *(float *)((int)param_2 + 4);
    fVar6 = *(float *)((int)param_3 + 4);
    uVar8 = (uint)((uint)*(float *)param_2 < (uint)*(float *)param_3);
    uVar7 = (uint)((uint)*(float *)param_3 < (uint)*(float *)param_2);
    return (int)(char)(((SBORROW4((int)fVar6,(int)fVar5) != SBORROW4((int)fVar6 - (int)fVar5,uVar7))
                       != (int)(((int)fVar6 - (int)fVar5) - uVar7) < 0) -
                      ((SBORROW4((int)fVar5,(int)fVar6) != SBORROW4((int)fVar5 - (int)fVar6,uVar8))
                      != (int)(((int)fVar5 - (int)fVar6) - uVar8) < 0));
  case 7:
    fVar5 = *(float *)((int)param_2 + 4);
    fVar6 = *(float *)((int)param_3 + 4);
    return (int)(char)(((uint)fVar6 < (uint)fVar5 ||
                       (uint)((int)fVar6 - (int)fVar5) <
                       (uint)((uint)*(float *)param_3 < (uint)*(float *)param_2)) -
                      ((uint)fVar5 < (uint)fVar6 ||
                      (uint)((int)fVar5 - (int)fVar6) <
                      (uint)((uint)*(float *)param_2 < (uint)*(float *)param_3)));
  case 8:
    uVar8 = (uint)(*(float *)param_3 < *(float *)param_2);
    if (*(float *)param_2 < *(float *)param_3) {
      uVar8 = 0xffffffff;
    }
    break;
  case 9:
    uVar8 = (uint)(*param_3 < *param_2);
    if (*param_2 < *param_3) {
      uVar8 = 0xffffffff;
    }
    return uVar8;
  default:
    return 0;
  }
  return uVar8;
}

