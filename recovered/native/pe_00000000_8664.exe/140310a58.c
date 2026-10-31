/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140310a58 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140310a58(undefined8 param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined7 uVar5;
  float fVar6;
  
  fVar1 = DAT_1404bda40;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    fVar6 = (float)FUN_140496a10(param_1,DAT_1404bda40);
    fVar6 = fVar6 / _DAT_1404efadc;
    uVar3 = (uint)fVar6;
    if (uVar3 < 5) {
      pcVar4 = (char *)((longlong)&switchD_140310b26::caseD_1 +
                       (longlong)(int)(&switchD_140310b26::caseD_1)[uVar3]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar3) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
        cVar2 = (char)pcVar4;
        (&UNK_1404f0098)[(int)(&switchD_140310b26::caseD_1)[uVar3]] =
             (&UNK_1404f0098)[(int)(&switchD_140310b26::caseD_1)[uVar3]] + cVar2;
        *pcVar4 = *pcVar4 + cVar2;
        *pcVar4 = *pcVar4 + cVar2;
        uVar5 = (undefined7)((ulonglong)pcVar4 >> 8);
        cVar2 = cVar2 >> 1;
        pcVar4 = (char *)CONCAT71(uVar5,cVar2);
        *pcVar4 = *pcVar4 + cVar2;
        *pcVar4 = *pcVar4 + cVar2;
        cVar2 = cVar2 + -9;
        pcVar4 = (char *)CONCAT71(uVar5,cVar2);
        *pcVar4 = *pcVar4 + cVar2;
        *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *param_4 = param_3;
    *param_5 = (fVar1 - param_2) * param_3;
    *param_6 = (fVar1 - param_2 * (fVar6 - (float)(int)fVar6)) * param_3;
  }
  else {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
  }
  return;
}

