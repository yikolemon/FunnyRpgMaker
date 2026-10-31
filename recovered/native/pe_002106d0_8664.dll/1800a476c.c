/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a476c */

void FUN_1800a476c(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar9 = 0xffffffffffffffff;
  if (((param_4 & (uVar2 & 4) >> 2) == 0) &&
     ((byte)((byte)((uVar2 & 2) >> 1) & (byte)param_4 >> 1) == 0)) {
    uVar8 = param_3[1] + *param_3;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if (((uVar2 & 2) == 0) && (uVar4 = **(ulonglong **)(param_1 + 0x40), uVar4 != 0)) {
      bVar7 = true;
      if (*(ulonglong *)(param_1 + 0x68) < uVar4) {
        *(ulonglong *)(param_1 + 0x68) = uVar4;
      }
    }
    else {
      bVar7 = false;
    }
    lVar5 = *(longlong *)(param_1 + 0x68);
    lVar6 = **(longlong **)(param_1 + 0x18);
    if ((uVar8 <= (ulonglong)(lVar5 - lVar6 >> 1)) &&
       ((uVar8 == 0 || ((((byte)param_4 & lVar3 == 0) == 0 && ((param_4 & 2) == 0 || bVar7)))))) {
      lVar1 = lVar6 + uVar8 * 2;
      if (lVar3 != 0 && (param_4 & 1) != 0) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(undefined4 **)(param_1 + 0x50) = (int)((ulonglong)(lVar5 - lVar1) >> 1);
      }
      uVar9 = uVar8;
      if (bVar7 && (param_4 & 2) != 0) {
        uVar2 = **(uint **)(param_1 + 0x58);
        lVar3 = **(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar6;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(undefined4 **)(param_1 + 0x58) = (int)(((ulonglong)uVar2 * 2 + lVar3) - lVar1 >> 1);
      }
    }
  }
  *param_2 = uVar9;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

