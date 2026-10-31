/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fbf44 */

int __fastcall FUN_101fbf44(uint *param_1,byte *param_2,uint *param_3,undefined4 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  
  pbVar10 = (byte *)*param_1;
  pbVar7 = pbVar10 + 1;
  iVar6 = 8;
  if (pbVar7 <= param_2) {
    uVar9 = (uint)*pbVar10;
    if (uVar9 == 0) {
      iVar6 = 0;
      pbVar10 = pbVar7;
    }
    else {
      do {
        pbVar1 = pbVar7 + 2;
        pbVar10 = pbVar7;
        if ((param_2 < pbVar1) || (pbVar8 = pbVar1 + *pbVar7, pbVar10 = pbVar1, param_2 < pbVar8)) {
          iVar6 = 8;
          goto LAB_101fbfe1;
        }
        if ((param_3 != (uint *)0x0) && (pcVar4 = (code *)param_3[1], pcVar4 != (code *)0x0)) {
          uVar5 = *param_3;
          puVar3 = param_3 + 3;
          while (uVar5 != pbVar7[1]) {
            pcVar4 = (code *)*puVar3;
            if (pcVar4 == (code *)0x0) goto LAB_101fbfc5;
            puVar2 = puVar3 + -1;
            puVar3 = puVar3 + 2;
            uVar5 = *puVar2;
          }
          iVar6 = (*pcVar4)(pbVar1,pbVar8,param_4);
          if (iVar6 != 0) goto LAB_101fbfe1;
        }
LAB_101fbfc5:
        uVar9 = uVar9 - 1;
        pbVar7 = pbVar8;
      } while (uVar9 != 0);
      iVar6 = 0;
      pbVar10 = pbVar8;
    }
  }
LAB_101fbfe1:
  *param_1 = (uint)pbVar10;
  return iVar6;
}

