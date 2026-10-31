/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139ae3 */

void FUN_180139ae3(uint param_1,int param_2,double *param_3,double *param_4,double *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined7 uVar3;
  float fVar4;
  double dVar5;
  
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_180139b09::switchdataD_1802df200 +
           (longlong)(int)(&switchD_180139b09::switchdataD_1802df200)[param_1]) >> 8);
  switch(param_1) {
  case 0:
    if (param_2 == 0x2d) {
      uVar1 = FUN_180139dbf(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,
                            &UINT_1802df280,0x7f);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar1 = FUN_180139d87(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,
                            &UINT_1802df280,0x7f);
    }
    goto LAB_180139d3b;
  case 1:
    if (param_2 == 0x2d) {
      uVar1 = FUN_180139e16(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,0,0xff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar1 = FUN_180139df6(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,0,0xff);
    }
LAB_180139d3b:
    *(undefined1 *)param_3 = uVar1;
    break;
  case 2:
    if (param_2 == 0x2d) {
      uVar2 = FUN_180139e6f(*(undefined2 *)param_4,*(undefined2 *)param_5,&DAT_1802d8000,0x7fff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_180139e36(*(undefined2 *)param_4,*(undefined2 *)param_5,&DAT_1802d8000,0x7fff);
    }
    goto LAB_180139cfd;
  case 3:
    if (param_2 == 0x2d) {
      uVar2 = FUN_180139ec8(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_180139ea7(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
LAB_180139cfd:
    *(undefined2 *)param_3 = uVar2;
    break;
  case 4:
    if (param_2 == 0x2d) {
      fVar4 = (float)FUN_180139f1d(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar4 = (float)FUN_180139ee9(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    goto LAB_180139d52;
  case 5:
    if (param_2 == 0x2d) {
      fVar4 = (float)FUN_180139f67(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar4 = (float)FUN_180139f50(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
LAB_180139d52:
    *(float *)param_3 = fVar4;
    break;
  case 6:
    if (param_2 == 0x2d) {
      dVar5 = (double)FUN_180139fb5(*param_4,*param_5,0x8000000000000000);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar5 = (double)FUN_180139f7d(*param_4,*param_5,0x8000000000000000);
    }
    goto LAB_180139d6f;
  case 7:
    if (param_2 == 0x2d) {
      dVar5 = (double)FUN_18013a004(*param_4,*param_5,0,0xffffffffffffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar5 = (double)FUN_180139feb(*param_4,*param_5,0,0xffffffffffffffff);
    }
LAB_180139d6f:
    *param_3 = dVar5;
    break;
  case 8:
    if (param_2 == 0x2d) {
      fVar4 = *(float *)param_4 - *(float *)param_5;
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar4 = *(float *)param_4 + *(float *)param_5;
    }
    *(float *)param_3 = fVar4;
    break;
  case 9:
    if (param_2 == 0x2d) {
      dVar5 = *param_4 - *param_5;
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar5 = *param_4 + *param_5;
    }
    *param_3 = dVar5;
  }
  return;
}

