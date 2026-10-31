/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2cbf */

ulonglong FUN_1400d2cbf(longlong *param_1,byte param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = param_1[1];
    cVar6 = (char)param_1[2];
    uVar3 = (ulonglong)param_2;
    uVar2 = 0;
    do {
      uVar3 = uVar3 - 1;
      bVar1 = *(byte *)(*param_1 + lVar5);
      bVar4 = 7 - cVar6;
      cVar6 = cVar6 + '\x01';
      *(char *)(param_1 + 2) = cVar6;
      if (cVar6 == '\b') {
        lVar5 = lVar5 + 1;
        param_1[1] = lVar5;
        *(undefined1 *)(param_1 + 2) = 0;
        cVar6 = '\0';
      }
      uVar2 = uVar2 | (ulonglong)((bVar1 >> (bVar4 & 0x1f) & 1) != 0) << ((byte)uVar3 & 0x3f);
    } while (uVar3 != 0);
  }
  return uVar2;
}

