/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10133ed7 */

undefined4
FUN_10133ed7(undefined4 param_1,undefined4 param_2,uint param_3,double *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  double dVar2;
  
  if ((param_3 & 0xfffffffe) == 6) {
    dVar2 = *param_4;
    goto LAB_10133f59;
  }
  if ((param_3 & 0xfffffffe) == 4) goto LAB_10133f34;
  switch(param_3) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    return 0;
  case 8:
    dVar2 = (double)*(float *)param_4;
    goto LAB_10133f59;
  case 9:
    dVar2 = *param_4;
LAB_10133f59:
    uVar1 = FUN_100fa4b1(param_1,param_2,param_5,dVar2);
    return uVar1;
  }
LAB_10133f34:
  uVar1 = FUN_100fa4b1(param_1,param_2,param_5);
  return uVar1;
}

