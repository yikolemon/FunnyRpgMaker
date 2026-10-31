/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028c00 */

undefined4 * FUN_10028c00(undefined4 *param_1,uint param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_3[1];
  uVar4 = iVar3 + 1;
  if ((int)param_2 < 0) {
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(undefined1 *)(*param_3 + iVar3) = 0x2d;
    param_2 = -param_2;
  }
  else {
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_3[1] = uVar4;
    *(undefined1 *)(*param_3 + iVar3) = 0x2b;
  }
  if (99 < param_2) {
    if (999 < param_2) {
      uVar1 = (&DAT_102903d0)[(param_2 / 100) * 2];
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
      if ((uint)param_3[2] < uVar4) {
        (*(code *)param_3[3])(param_3,uVar4);
        iVar3 = param_3[1];
        uVar4 = iVar3 + 1;
      }
      param_3[1] = uVar4;
      *(undefined1 *)(*param_3 + iVar3) = uVar1;
    }
    cVar2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            [(param_2 / 100) * 2];
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar3 = param_3[1];
      uVar4 = iVar3 + 1;
    }
    param_2 = param_2 % 100;
    param_3[1] = uVar4;
    *(char *)(*param_3 + iVar3) = cVar2;
  }
  uVar1 = (&DAT_102903d0)[param_2 * 2];
  iVar3 = param_3[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_3[2] < uVar4) {
    (*(code *)param_3[3])(param_3,uVar4);
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
  }
  param_3[1] = uVar4;
  *(undefined1 *)(*param_3 + iVar3) = uVar1;
  cVar2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [param_2 * 2];
  iVar3 = param_3[1];
  uVar4 = iVar3 + 1;
  if ((uint)param_3[2] < uVar4) {
    (*(code *)param_3[3])(param_3,uVar4);
    iVar3 = param_3[1];
    uVar4 = iVar3 + 1;
  }
  param_3[1] = uVar4;
  *(char *)(*param_3 + iVar3) = cVar2;
  *param_1 = param_3;
  return param_1;
}

