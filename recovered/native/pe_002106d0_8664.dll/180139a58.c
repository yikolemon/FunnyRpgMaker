/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139a58 */

undefined8
FUN_180139a58(undefined8 param_1,int param_2,uint param_3,double *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  if ((param_3 & 0xfffffffe) == 6) {
    uVar1 = FUN_1800fead5(param_1,(longlong)param_2,param_5,*param_4);
    return uVar1;
  }
  if ((param_3 & 0xfffffffe) == 4) {
    fVar2 = *(float *)param_4;
    goto LAB_180139a7a;
  }
  switch(param_3) {
  case 0:
    fVar2 = (float)(int)*(char *)param_4;
    break;
  case 1:
    fVar2 = (float)(uint)*(byte *)param_4;
    break;
  case 2:
    fVar2 = (float)(int)*(short *)param_4;
    break;
  case 3:
    fVar2 = (float)(uint)*(ushort *)param_4;
    break;
  default:
    return 0;
  case 8:
    dVar3 = (double)*(float *)param_4;
    goto LAB_180139ad0;
  case 9:
    dVar3 = *param_4;
LAB_180139ad0:
    uVar1 = FUN_1800fead5(param_1,(longlong)param_2,param_5,dVar3);
    return uVar1;
  }
LAB_180139a7a:
  uVar1 = FUN_1800fead5(param_1,(longlong)param_2,param_5,fVar2);
  return uVar1;
}

