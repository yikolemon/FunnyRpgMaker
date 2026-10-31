/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092182 */

undefined8 * FUN_140092182(undefined8 *param_1,int param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = DAT_140f2a910;
  if (param_3 < 0.0) {
    param_3 = *(float *)(DAT_140f2a910 + 0xa4);
  }
  lVar7 = (longlong)param_2;
  if (*(char *)(DAT_140f2a910 + 0x120 + lVar7) == '\0') {
    fVar8 = 0.0;
    fVar9 = 0.0;
    if (*(char *)(DAT_140f2a910 + 0xb6e + lVar7) != '\x01') goto LAB_140092211;
  }
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (param_3 * param_3 <= *(float *)(DAT_140f2a910 + 0xbfc + lVar7 * 4)) {
    puVar1 = (undefined8 *)(DAT_140f2a910 + 0x118);
    cVar5 = FUN_140081bec(puVar1);
    if (cVar5 != '\0') {
      puVar6 = (undefined8 *)(lVar4 + lVar7 * 8 + 0xafc);
      cVar5 = FUN_140081bec(puVar6);
      if (cVar5 != '\0') {
        uVar2 = *puVar1;
        uVar3 = *puVar6;
        fVar8 = (float)uVar2 - (float)uVar3;
        fVar9 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
      }
    }
  }
LAB_140092211:
  *param_1 = CONCAT44(fVar9,fVar8);
  return param_1;
}

