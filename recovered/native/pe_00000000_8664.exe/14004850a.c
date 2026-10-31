/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004850a */

undefined8 FUN_14004850a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar4;
  
  cVar1 = FUN_140048420();
  lVar2 = _Xtime_get_ticks();
  lVar2 = (lVar2 - *(longlong *)(param_1 + 0x2010)) / 10000;
  if (cVar1 == '\x02') {
    fVar3 = (((float)lVar2 + DAT_1401c86e0) - (float)*(int *)(param_1 + 0x2008)) / DAT_1401c86e0 +
            DAT_1401c86c8;
  }
  else {
    if (cVar1 != '\0') {
      uVar4 = 0;
      fVar3 = DAT_1401c86dc;
      goto LAB_140048597;
    }
    fVar3 = (float)lVar2 / DAT_1401c86c4;
  }
  fVar3 = fVar3 * DAT_1401c86dc;
  uVar4 = extraout_XMM0_Db;
LAB_140048597:
  return CONCAT44(uVar4,fVar3);
}

