/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025448 */

undefined4 * FUN_10025448(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  uVar1 = (int)param_4 >> 0x1f;
  uVar4 = (param_3 ^ uVar1) - uVar1;
  uVar6 = ((param_4 ^ uVar1) - uVar1) - (uint)((param_3 ^ uVar1) < uVar1);
  if (uVar6 == 0) {
    uVar2 = 0x1f;
    if ((uVar4 | 1) != 0) {
      for (; (uVar4 | 1) >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar2 = uVar2 ^ 0x1f | 0x20;
  }
  else {
    uVar2 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar2 = uVar2 ^ 0x1f;
  }
  uVar2 = (uint)(byte)(&DAT_10290499)[uVar2 ^ 0x3f];
  iVar7 = uVar2 - (uVar6 < *(uint *)(&DAT_102904e4 + uVar2 * 8) ||
                  uVar6 - *(uint *)(&DAT_102904e4 + uVar2 * 8) <
                  (uint)(uVar4 < *(uint *)(&DAT_102904e0 + uVar2 * 8)));
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = (iVar7 - uVar1) + uVar5;
  if (uVar3 < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    uVar5 = param_2[1];
    uVar3 = param_2[2];
    uVar2 = (iVar7 - uVar1) + uVar5;
    uVar1 = uVar5;
    if (uVar3 < uVar2) goto LAB_10025501;
  }
  param_2[1] = uVar2;
  uVar1 = uVar2;
  if (*param_2 != 0) {
    puVar8 = (undefined1 *)(*param_2 + uVar5);
    if ((int)param_4 < 0) {
      *puVar8 = 0x2d;
      puVar8 = puVar8 + 1;
    }
    FUN_100255fd(puVar8,uVar4,uVar6,iVar7);
    *param_1 = param_2;
    return param_1;
  }
LAB_10025501:
  if ((int)param_4 < 0) {
    uVar2 = uVar1 + 1;
    if (uVar3 < uVar2) {
      (*(code *)param_2[3])(param_2,uVar2);
      uVar1 = param_2[1];
      uVar2 = uVar1 + 1;
    }
    param_2[1] = uVar2;
    *(undefined1 *)(*param_2 + uVar1) = 0x2d;
  }
  FUN_10025550(param_1,param_2,uVar4,uVar6,iVar7);
  return param_1;
}

