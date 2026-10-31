/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10133f65 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133f65(undefined4 param_1,int param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  switch(param_1) {
  case 0:
    if (param_2 == 0x2d) {
      uVar2 = FUN_10134293((int)*(char *)param_4,(int)*(char *)param_5,0xffffff80,0x7f);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_10134257((int)*(char *)param_4,(int)*(char *)param_5,0xffffff80,0x7f);
    }
    goto LAB_101341ff;
  case 1:
    if (param_2 == 0x2d) {
      uVar2 = FUN_101342f9(*(undefined1 *)param_4,*(undefined1 *)param_5,0,0xff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_101342cf(*(undefined1 *)param_4,*(undefined1 *)param_5,0,0xff);
    }
LAB_101341ff:
    *(undefined1 *)param_3 = uVar2;
    break;
  case 2:
    if (param_2 == 0x2d) {
      uVar3 = FUN_10134363((int)*(short *)param_4,(int)*(short *)param_5,0xffff8000,0x7fff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar3 = FUN_10134323((int)*(short *)param_4,(int)*(short *)param_5,0xffff8000,0x7fff);
    }
    goto LAB_1013419c;
  case 3:
    if (param_2 == 0x2d) {
      uVar3 = FUN_101343d1(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar3 = FUN_101343a3(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
LAB_1013419c:
    *(undefined2 *)param_3 = uVar3;
    break;
  case 4:
    if (param_2 == 0x2d) {
      uVar4 = FUN_10134439(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar4 = FUN_101343ff(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    goto LAB_10134244;
  case 5:
    if (param_2 == 0x2d) {
      uVar4 = FUN_10134494(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar4 = FUN_10134472(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
    goto LAB_10134244;
  case 6:
    if (param_2 == 0x2d) {
      uVar6 = FUN_10134521(*(float *)param_4,*(float *)((int)param_4 + 4),*(float *)param_5,
                           *(float *)((int)param_5 + 4),0,0x80000000,0xffffffff,0x7fffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar6 = FUN_101344b6(*(float *)param_4,*(float *)((int)param_4 + 4),*(float *)param_5,
                           *(float *)((int)param_5 + 4),0,0x80000000,0xffffffff,0x7fffffff);
    }
    goto LAB_1013423e;
  case 7:
    if (param_2 == 0x2d) {
      uVar6 = FUN_101345d3(*(float *)param_4,*(float *)((int)param_4 + 4),*(float *)param_5,
                           *(float *)((int)param_5 + 4),_DAT_102b8ae0,_UNK_102b8ae4,_UNK_102b8ae8,
                           _UNK_102b8aec);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar6 = FUN_10134590(*(float *)param_4,*(float *)((int)param_4 + 4),*(float *)param_5,
                           *(float *)((int)param_5 + 4),_DAT_102b8ae0,_UNK_102b8ae4,_UNK_102b8ae8,
                           _UNK_102b8aec);
    }
LAB_1013423e:
    uVar4 = (undefined4)uVar6;
    *(int *)((int)param_3 + 4) = (int)((ulonglong)uVar6 >> 0x20);
LAB_10134244:
    *(undefined4 *)param_3 = uVar4;
    break;
  case 8:
    if (param_2 == 0x2d) {
      fVar5 = *(float *)param_4 - *(float *)param_5;
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar5 = *(float *)param_4 + *(float *)param_5;
    }
    *(float *)param_3 = fVar5;
    break;
  case 9:
    if (param_2 == 0x2d) {
      dVar1 = *param_4 - *param_5;
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar1 = *param_4 + *param_5;
    }
    *param_3 = dVar1;
  }
  return;
}

