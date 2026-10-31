/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114052 */

undefined8 * FUN_10114052(undefined8 *param_1,int param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar3 = DAT_1039d74c;
  if (param_3 < 0.0) {
    param_3 = *(float *)(DAT_1039d74c + 0x90);
  }
  if (((*(char *)(DAT_1039d74c + 0xec + param_2) != '\0') ||
      (uVar6 = 0, *(char *)(DAT_1039d74c + 0xb36 + param_2) == '\x01')) &&
     (uVar6 = 0, param_3 * param_3 <= *(float *)(DAT_1039d74c + 0xbc4 + param_2 * 4))) {
    puVar1 = (undefined8 *)(DAT_1039d74c + 0xe4);
    cVar4 = FUN_10103c30(puVar1);
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)(iVar3 + param_2 * 8 + 0xac8);
      cVar4 = FUN_10103c30(puVar5);
      uVar6 = 0;
      if (cVar4 != '\0') {
        uVar6 = *puVar1;
        uVar2 = *puVar5;
        uVar6 = CONCAT44((float)((ulonglong)uVar6 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                         (float)uVar6 - (float)uVar2);
      }
    }
  }
  *param_1 = uVar6;
  return param_1;
}

