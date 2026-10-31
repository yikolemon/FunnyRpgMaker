/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eeaae */

undefined8 FUN_1800eeaae(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar4;
  
  cVar1 = FUN_1800ee9c4();
  lVar2 = _Xtime_get_ticks();
  lVar2 = (lVar2 - *(longlong *)(param_1 + 0x2010)) / 10000;
  if (cVar1 == '\x02') {
    fVar3 = (((float)lVar2 + DAT_1802dc2e0) - (float)*(int *)(param_1 + 0x2008)) / DAT_1802dc2e0 +
            DAT_1802ac570;
  }
  else {
    if (cVar1 != '\0') {
      uVar4 = 0;
      fVar3 = DAT_1802dbb30;
      goto LAB_1800eeb3b;
    }
    fVar3 = (float)lVar2 / DAT_1802dc2d4;
  }
  fVar3 = fVar3 * DAT_1802dbb30;
  uVar4 = extraout_XMM0_Db;
LAB_1800eeb3b:
  return CONCAT44(uVar4,fVar3);
}

