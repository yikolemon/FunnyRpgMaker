/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a45c6 */

void FUN_1800a45c6(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar6 = 0xffffffffffffffff;
  if (((param_5 & (uVar1 & 4) >> 2) != 0) ||
     ((byte)((byte)((uVar1 & 2) >> 1) & (byte)param_5 >> 1) != 0)) goto LAB_1800a4733;
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 & 2) == 0) && (uVar7 = **(ulonglong **)(param_1 + 0x40), uVar7 != 0)) {
    bVar5 = 1;
    if (*(ulonglong *)(param_1 + 0x68) < uVar7) {
      *(ulonglong *)(param_1 + 0x68) = uVar7;
    }
  }
  else {
    bVar5 = 0;
    uVar7 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar4 = **(longlong **)(param_1 + 0x18);
  uVar8 = lVar3 - lVar4 >> 1;
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else if (param_4 == 1) {
    if ((~param_5 & 3) == 0) goto LAB_1800a4733;
    if ((param_5 & 1) == 0) {
      if (((param_5 & 2) == 0) || (uVar7 == 0 && lVar4 != 0)) goto LAB_1800a4733;
    }
    else {
      uVar7 = uVar2;
      if (uVar2 == 0 && lVar4 != 0) goto LAB_1800a4733;
    }
    uVar7 = (longlong)(uVar7 - lVar4) >> 1;
  }
  else {
    uVar7 = uVar8;
    if (param_4 != 2) goto LAB_1800a4733;
  }
  uVar7 = uVar7 + param_3;
  if ((uVar7 <= uVar8) &&
     ((uVar7 == 0 || ((((byte)param_5 & uVar2 == 0) == 0 && ((bool)((param_5 & 2) == 0 | bVar5))))))
     ) {
    uVar8 = lVar4 + uVar7 * 2;
    if (uVar2 != 0 && (param_5 & 1) != 0) {
      **(ulonglong **)(param_1 + 0x38) = uVar8;
      **(undefined4 **)(param_1 + 0x50) = (int)(lVar3 - uVar8 >> 1);
    }
    uVar6 = uVar7;
    if (!(bool)(bVar5 ^ 1 | (param_5 & 2) == 0)) {
      uVar1 = **(uint **)(param_1 + 0x58);
      lVar3 = **(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x20) = lVar4;
      **(ulonglong **)(param_1 + 0x40) = uVar8;
      **(undefined4 **)(param_1 + 0x58) = (int)(((ulonglong)uVar1 * 2 + lVar3) - uVar8 >> 1);
    }
  }
LAB_1800a4733:
  *param_2 = uVar6;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

