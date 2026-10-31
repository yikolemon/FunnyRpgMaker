/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2a13 */

void FUN_1400b2a13(uint param_1,int param_2,double *param_3,double *param_4,double *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined7 uVar3;
  float fVar4;
  double dVar5;
  
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_1400b2a39::switchdataD_140211f70 +
           (longlong)(int)(&switchD_1400b2a39::switchdataD_140211f70)[param_1]) >> 8);
  switch(param_1) {
  case 0:
    if (param_2 == 0x2d) {
      uVar1 = FUN_1400b2cef(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,
                            &UINT_140211f80,0x7f);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar1 = FUN_1400b2cb7(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,
                            &UINT_140211f80,0x7f);
    }
    goto LAB_1400b2c6b;
  case 1:
    if (param_2 == 0x2d) {
      uVar1 = FUN_1400b2d46(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,0,0xff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar1 = FUN_1400b2d26(CONCAT71(uVar3,*(undefined1 *)param_4),*(undefined1 *)param_5,0,0xff);
    }
LAB_1400b2c6b:
    *(undefined1 *)param_3 = uVar1;
    break;
  case 2:
    if (param_2 == 0x2d) {
      uVar2 = FUN_1400b2d9f(*(undefined2 *)param_4,*(undefined2 *)param_5,&DAT_140218000,0x7fff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_1400b2d66(*(undefined2 *)param_4,*(undefined2 *)param_5,&DAT_140218000,0x7fff);
    }
    goto LAB_1400b2c2d;
  case 3:
    if (param_2 == 0x2d) {
      uVar2 = FUN_1400b2df8(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      uVar2 = FUN_1400b2dd7(*(undefined2 *)param_4,*(undefined2 *)param_5,0,0xffff);
    }
LAB_1400b2c2d:
    *(undefined2 *)param_3 = uVar2;
    break;
  case 4:
    if (param_2 == 0x2d) {
      fVar4 = (float)FUN_1400b2e4d(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar4 = (float)FUN_1400b2e19(*(float *)param_4,*(float *)param_5,0x80000000,0x7fffffff);
    }
    goto LAB_1400b2c82;
  case 5:
    if (param_2 == 0x2d) {
      fVar4 = (float)FUN_1400b2e97(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      fVar4 = (float)FUN_1400b2e80(*(float *)param_4,*(float *)param_5,0,0xffffffff);
    }
LAB_1400b2c82:
    *(float *)param_3 = fVar4;
    break;
  case 6:
    if (param_2 == 0x2d) {
      dVar5 = (double)FUN_1400b2ee5(*param_4,*param_5,0x8000000000000000);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar5 = (double)FUN_1400b2ead(*param_4,*param_5,0x8000000000000000);
    }
    goto LAB_1400b2c9f;
  case 7:
    if (param_2 == 0x2d) {
      dVar5 = (double)FUN_1400b2f34(*param_4,*param_5,0,0xffffffffffffffff);
    }
    else {
      if (param_2 != 0x2b) {
        return;
      }
      dVar5 = (double)FUN_1400b2f1b(*param_4,*param_5,0,0xffffffffffffffff);
    }
LAB_1400b2c9f:
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

