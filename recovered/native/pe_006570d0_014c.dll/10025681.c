/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025681 */

undefined4 * FUN_10025681(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 == 0) {
    uVar1 = 0x1f;
    if ((param_3 | 1) != 0) {
      for (; (param_3 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar1 = uVar1 ^ 0x1f | 0x20;
  }
  else {
    uVar1 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar1 = uVar1 ^ 0x1f;
  }
  uVar1 = (uint)(byte)(&DAT_10290499)[uVar1 ^ 0x3f];
  iVar3 = uVar1 - (param_4 < *(uint *)(&DAT_102904e4 + uVar1 * 8) ||
                  param_4 - *(uint *)(&DAT_102904e4 + uVar1 * 8) <
                  (uint)(param_3 < *(uint *)(&DAT_102904e0 + uVar1 * 8)));
  iVar2 = param_2[1];
  uVar1 = iVar3 + iVar2;
  if ((uint)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2,uVar1);
    iVar2 = param_2[1];
    uVar1 = iVar2 + iVar3;
    if ((uint)param_2[2] < uVar1) goto LAB_10025705;
  }
  param_2[1] = uVar1;
  if (*param_2 != 0) {
    FUN_100255fd(*param_2 + iVar2,param_3,param_4,iVar3);
    *param_1 = param_2;
    return param_1;
  }
LAB_10025705:
  FUN_10025550(param_1,param_2,param_3,param_4,iVar3);
  return param_1;
}

