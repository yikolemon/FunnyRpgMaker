/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001ee7c */

undefined8 * FUN_14001ee7c(undefined8 *param_1,uint param_2,longlong *param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = param_3[1];
  uVar5 = lVar4 + 1;
  if ((int)param_2 < 0) {
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar4 = param_3[1];
      uVar5 = lVar4 + 1;
    }
    param_3[1] = uVar5;
    *(undefined1 *)(*param_3 + lVar4) = 0x2d;
    param_2 = -param_2;
  }
  else {
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar4 = param_3[1];
      uVar5 = lVar4 + 1;
    }
    param_3[1] = uVar5;
    *(undefined1 *)(*param_3 + lVar4) = 0x2b;
  }
  if (99 < param_2) {
    uVar3 = (param_2 / 100) * 2;
    if (999 < param_2) {
      uVar1 = (&DAT_1401c9cf0)[uVar3];
      lVar4 = param_3[1];
      uVar5 = lVar4 + 1;
      if ((ulonglong)param_3[2] < uVar5) {
        (*(code *)param_3[3])(param_3);
        lVar4 = param_3[1];
        uVar5 = lVar4 + 1;
      }
      param_3[1] = uVar5;
      *(undefined1 *)(*param_3 + lVar4) = uVar1;
    }
    cVar2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            [uVar3];
    lVar4 = param_3[1];
    uVar5 = lVar4 + 1;
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar4 = param_3[1];
      uVar5 = lVar4 + 1;
    }
    param_2 = param_2 % 100;
    param_3[1] = uVar5;
    *(char *)(*param_3 + lVar4) = cVar2;
  }
  uVar1 = (&DAT_1401c9cf0)[(ulonglong)param_2 * 2];
  lVar4 = param_3[1];
  uVar5 = lVar4 + 1;
  if ((ulonglong)param_3[2] < uVar5) {
    (*(code *)param_3[3])(param_3);
    lVar4 = param_3[1];
    uVar5 = lVar4 + 1;
  }
  param_3[1] = uVar5;
  *(undefined1 *)(*param_3 + lVar4) = uVar1;
  cVar2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [(ulonglong)param_2 * 2];
  lVar4 = param_3[1];
  uVar5 = lVar4 + 1;
  if ((ulonglong)param_3[2] < uVar5) {
    (*(code *)param_3[3])(param_3);
    lVar4 = param_3[1];
    uVar5 = lVar4 + 1;
  }
  param_3[1] = uVar5;
  *(char *)(*param_3 + lVar4) = cVar2;
  *param_1 = param_3;
  return param_1;
}

