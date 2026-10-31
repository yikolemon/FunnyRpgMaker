/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea224 */

float10 __fastcall FUN_100ea224(int param_1)

{
  char cVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_100ea14a();
  uVar3 = FUN_1022c7e0();
  lVar4 = __alldiv((uint)uVar3 - *(uint *)(param_1 + 0x2010),
                   ((int)((ulonglong)uVar3 >> 0x20) - *(int *)(param_1 + 0x2014)) -
                   (uint)((uint)uVar3 < *(uint *)(param_1 + 0x2010)),10000,0);
  if (cVar1 == '\x02') {
    fVar2 = (((float)lVar4 + DAT_102b7118) - (float)*(int *)(param_1 + 0x2008)) / DAT_102b7118 +
            DAT_1028b430;
  }
  else {
    fVar2 = DAT_102b7114;
    if (cVar1 != '\0') goto LAB_100ea2e3;
    fVar2 = (float)lVar4 / DAT_102b7104;
  }
  fVar2 = fVar2 * DAT_102b7114;
LAB_100ea2e3:
  return (float10)fVar2;
}

