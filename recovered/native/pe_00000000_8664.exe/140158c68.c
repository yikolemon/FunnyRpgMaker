/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140158c68 */

int FUN_140158c68(ulonglong *param_1,byte *param_2,uint *param_3,undefined8 param_4)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar6 = (byte *)*param_1;
  pbVar10 = pbVar6 + 1;
  iVar8 = 8;
  iVar3 = iVar8;
  if (pbVar10 <= param_2) {
    uVar7 = (uint)*pbVar6;
    pbVar9 = pbVar10;
    if (*pbVar6 != 0) {
      do {
        pbVar1 = pbVar9 + 2;
        pbVar6 = pbVar9;
        iVar3 = iVar8;
        if ((param_2 < pbVar1) || (pbVar10 = pbVar1 + *pbVar9, pbVar6 = pbVar1, param_2 < pbVar10))
        goto LAB_140158d01;
        if ((param_3 != (uint *)0x0) && (pcVar4 = *(code **)(param_3 + 2), pcVar4 != (code *)0x0)) {
          if (*param_3 != (uint)pbVar9[1]) {
            puVar5 = param_3 + 6;
            do {
              pcVar4 = *(code **)puVar5;
              if (pcVar4 == (code *)0x0) goto LAB_140158cef;
              puVar2 = puVar5 + -2;
              puVar5 = puVar5 + 4;
            } while (*puVar2 != (uint)pbVar9[1]);
          }
          iVar3 = (*pcVar4)(pbVar1,pbVar10,param_4);
          if (iVar3 != 0) goto LAB_140158d01;
        }
LAB_140158cef:
        uVar7 = uVar7 - 1;
        pbVar9 = pbVar10;
      } while (uVar7 != 0);
    }
    pbVar6 = pbVar10;
    iVar3 = 0;
  }
LAB_140158d01:
  *param_1 = (ulonglong)pbVar6;
  return iVar3;
}

