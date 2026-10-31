/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118e6a */

undefined8 * FUN_180118e6a(undefined8 *param_1,int param_2,float param_3)

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
  
  lVar4 = DAT_180419160;
  if (param_3 < 0.0) {
    param_3 = *(float *)(DAT_180419160 + 0xa4);
  }
  lVar7 = (longlong)param_2;
  if (*(char *)(DAT_180419160 + 0x120 + lVar7) == '\0') {
    fVar8 = 0.0;
    fVar9 = 0.0;
    if (*(char *)(DAT_180419160 + 0xb6e + lVar7) != '\x01') goto LAB_180118ef9;
  }
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (param_3 * param_3 <= *(float *)(DAT_180419160 + 0xbfc + lVar7 * 4)) {
    puVar1 = (undefined8 *)(DAT_180419160 + 0x118);
    cVar5 = FUN_1801088d4(puVar1);
    if (cVar5 != '\0') {
      puVar6 = (undefined8 *)(lVar4 + lVar7 * 8 + 0xafc);
      cVar5 = FUN_1801088d4(puVar6);
      if (cVar5 != '\0') {
        uVar2 = *puVar1;
        uVar3 = *puVar6;
        fVar8 = (float)uVar2 - (float)uVar3;
        fVar9 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
      }
    }
  }
LAB_180118ef9:
  *param_1 = CONCAT44(fVar9,fVar8);
  return param_1;
}

