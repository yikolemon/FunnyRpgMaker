/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467465 */

void __fastcall FUN_00467465(char param_1,uint param_2,short *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_1c;
  
  local_1c = *param_4;
  iVar11 = *param_5;
  if (1 < param_2) {
    cVar4 = '\x01';
    do {
      piVar7 = param_5;
      iVar5 = iVar11;
      psVar2 = param_3 + 1;
      psVar3 = param_3;
      if (cVar4 == '\0') {
        piVar7 = param_4;
        iVar5 = local_1c;
        psVar2 = param_3;
        psVar3 = param_3 + 1;
      }
      uVar10 = (uint)*psVar2;
      uVar12 = (int)*psVar3 - uVar10;
      puVar8 = (uint *)(piVar7 + 1);
      puVar9 = puVar8;
      if (iVar5 != 0) {
        uVar6 = iVar5 * 0x20;
        puVar9 = puVar8 + iVar5 * 8;
        do {
          uVar1 = *puVar8;
          if (uVar1 != uVar10 && (int)uVar10 <= (int)uVar1) {
            FUN_004878c0(puVar8 + 8,puVar8,uVar6);
            puVar9 = puVar8;
            break;
          }
          if (uVar1 == uVar10) {
            if ((int)uVar12 < 0) {
              if ((int)puVar8[1] <= (int)uVar12) goto LAB_00467529;
            }
            else if ((int)uVar12 <= (int)puVar8[1]) goto LAB_00467529;
            puVar8[1] = uVar12;
            goto LAB_00467529;
          }
          puVar8 = puVar8 + 8;
          uVar6 = uVar6 - 0x20;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *puVar9 = uVar10;
      puVar9[1] = uVar12;
      if (cVar4 == '\0') {
        local_1c = local_1c + 1;
      }
      else {
        iVar11 = iVar11 + 1;
      }
LAB_00467529:
      param_3 = param_3 + 2;
      param_2 = param_2 - 2;
      cVar4 = param_1;
    } while (1 < param_2);
  }
  *param_4 = local_1c;
  *param_5 = iVar11;
  return;
}

