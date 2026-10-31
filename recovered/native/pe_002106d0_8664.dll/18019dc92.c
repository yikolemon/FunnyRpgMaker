/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019dc92 */

longlong switchD_18019e2f8::caseD_0(int *param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = *param_2;
  uVar5 = uVar3 >> 8 & 0xf;
  uVar7 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar8 = *param_1;
        goto LAB_18019dce2;
      }
    }
    else {
      uVar7 = uVar7 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar8 = param_1[1];
LAB_18019dce2:
    if (iVar8 != 0) {
      uVar7 = uVar3 >> 4 & 0xf;
    }
  }
  uVar10 = uVar7;
  if (uVar5 == 0) {
LAB_18019dd76:
    uVar5 = uVar3 >> 0xc & 0xf;
    uVar6 = (ulonglong)uVar10;
    FUN_1802a82f0(param_3,param_4,uVar6);
    if (uVar5 == 0) goto LAB_18019ddd0;
    iVar8 = uVar7 - uVar5;
  }
  else {
    bVar1 = *(byte *)(param_4 + (ulonglong)uVar5);
    bVar2 = (&DAT_18044c130)[bVar1];
    uVar9 = (bVar2 & 0xf) + uVar7;
    uVar10 = uVar9;
    if ((bVar2 & 0x10) != 0) {
      uVar7 = uVar9;
      if ((*(byte *)(param_4 + 1 + (ulonglong)uVar5) & 7) == 5) {
        if ((bVar1 & 0xc0) == 0x40) {
          uVar7 = uVar9 + 1;
          uVar10 = uVar7;
        }
        else if ((bVar1 & 0xc0) == 0) {
          uVar7 = uVar9 + 4;
          uVar10 = uVar7;
        }
        else {
          uVar7 = uVar9 + 4;
          uVar10 = uVar9 + 4;
          if (-0x41 < (char)bVar1) {
            uVar7 = uVar9;
            uVar10 = uVar9;
          }
        }
      }
      goto LAB_18019dd76;
    }
    if ((bVar2 & 0x20) == 0) goto LAB_18019dd76;
    uVar5 = uVar5 + 1;
    uVar6 = (ulonglong)uVar9;
    FUN_1802a82f0(param_3,param_4,uVar6);
    iVar8 = 4;
  }
  uVar4 = FUN_18019de04(param_1,param_3,param_4,uVar10,uVar5,iVar8);
  **(undefined8 **)(param_1 + 8) = uVar4;
  if ((*param_2 & 0xf000) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_18019ddd0:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return param_4 + uVar6;
}

