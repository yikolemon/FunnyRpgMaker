/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006cd45 */

void FUN_14006cd45(char param_1,uint param_2,short *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar9 = *param_4;
  uVar8 = *param_5;
  if (1 < param_2) {
    cVar4 = '\x01';
    do {
      puVar10 = param_5;
      uVar1 = uVar8;
      psVar2 = param_3 + 1;
      psVar3 = param_3;
      if (cVar4 == '\0') {
        puVar10 = param_4;
        uVar1 = uVar9;
        psVar2 = param_3;
        psVar3 = param_3 + 1;
      }
      uVar5 = (uint)*psVar2;
      uVar6 = (int)*psVar3 - uVar5;
      puVar7 = puVar10 + 1;
      if (uVar1 != 0) {
        uVar11 = (ulonglong)uVar1;
        uVar12 = 0;
LAB_14006cd9e:
        if ((int)uVar5 < (int)*puVar7) {
          puVar10 = puVar10 + uVar11 * 8 + 1;
          do {
            *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar10 + -4);
            *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(puVar10 + -2);
            *(undefined8 *)puVar10 = *(undefined8 *)(puVar10 + -8);
            *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar10 + -6);
            puVar10 = puVar10 + -8;
            uVar11 = uVar11 - 1;
          } while (uVar12 != uVar11);
          goto LAB_14006cde3;
        }
        if (*puVar7 != uVar5) goto code_r0x00014006cda4;
        if ((int)uVar6 < 0) {
          if ((int)puVar7[1] <= (int)uVar6) goto LAB_14006ce04;
        }
        else if ((int)uVar6 <= (int)puVar7[1]) goto LAB_14006ce04;
        puVar7[1] = uVar6;
        goto LAB_14006ce04;
      }
LAB_14006cde3:
      *puVar7 = uVar5;
      puVar7[1] = uVar6;
      if (cVar4 == '\0') {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
LAB_14006ce04:
      param_3 = param_3 + 2;
      param_2 = param_2 - 2;
      cVar4 = param_1;
    } while (1 < param_2);
  }
  *param_4 = uVar9;
  *param_5 = uVar8;
  return;
code_r0x00014006cda4:
  puVar7 = puVar7 + 8;
  uVar12 = uVar12 + 1;
  if (uVar1 == (uint)uVar12) goto LAB_14006cde3;
  goto LAB_14006cd9e;
}

