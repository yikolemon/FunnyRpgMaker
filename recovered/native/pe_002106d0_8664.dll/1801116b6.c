/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801116b6 */

ulonglong FUN_1801116b6(float *param_1,int param_2,float *param_3,uint param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  
  lVar7 = DAT_180419160;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  *(int *)(DAT_180419160 + 0x1fe0) = param_2;
  uVar6 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(lVar7 + 0x1fec) = *(undefined8 *)param_1;
  *(undefined8 *)(lVar7 + 0x1ff4) = uVar6;
  if (param_3 == (float *)0x0) {
    param_3 = param_1;
  }
  fVar1 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *(float *)(lVar7 + 0x1ffc) = *param_3;
  *(float *)(lVar7 + 0x2000) = fVar1;
  *(float *)(lVar7 + 0x2004) = fVar4;
  *(float *)(lVar7 + 0x2008) = fVar5;
  *(uint *)(lVar7 + 0x1fe4) = param_4 | *(uint *)(lVar7 + 0x1fa0) | *(uint *)(lVar7 + 0x1fac);
  *(undefined4 *)(lVar7 + 0x1fe8) = 0;
  if (param_2 != 0) {
    FUN_1801088af(param_2);
    if (((*(byte *)(lVar7 + 0x1fe4) & 2) == 0) &&
       ((*(ushort *)(lVar2 + 0x1b6) =
              *(ushort *)(lVar2 + 0x1b6) | (ushort)(1 << (*(byte *)(lVar2 + 0x1b0) & 0x1f)),
        *(int *)(lVar7 + 0x21f8) == param_2 || (*(char *)(lVar7 + 0x2261) == '\x01')))) {
      lVar3 = *(longlong *)(lVar7 + 0x2200);
      if ((*(longlong *)(lVar3 + 0x438) == *(longlong *)(lVar2 + 0x438)) &&
         ((lVar2 == lVar3 || (((*(uint *)(lVar3 + 0x1c) | *(uint *)(lVar2 + 0x1c)) >> 8 & 1) != 0)))
         ) {
        FUN_180119a49();
      }
    }
    if ((*(byte *)(lVar7 + 0x1fa8) & 4) != 0) {
      FUN_180119d7b(param_2);
    }
  }
  *(undefined8 *)(lVar7 + 0x1fa8) = 0;
  if (((param_1[3] < *(float *)(lVar2 + 700) || param_1[3] == *(float *)(lVar2 + 700)) ||
      (*(float *)(lVar2 + 0x2c4) < param_1[1] || *(float *)(lVar2 + 0x2c4) == param_1[1])) ||
     (fVar1 = param_1[2], fVar1 < *(float *)(lVar2 + 0x2b8) || fVar1 == *(float *)(lVar2 + 0x2b8)))
  {
LAB_1801117e3:
    if ((param_2 == 0) ||
       (((param_2 != *(int *)(lVar7 + 0x167c) && (param_2 != *(int *)(lVar7 + 0x16a8))) &&
        ((param_2 != *(int *)(lVar7 + 0x21f8) && (param_2 != *(int *)(lVar7 + 0x2214))))))) {
      uVar9 = 0;
      if (*(char *)(lVar7 + 0x167a) != '\x01') goto LAB_18011186b;
      goto LAB_18011181b;
    }
    uVar9 = 0;
LAB_18011181f:
    if (param_2 == *(int *)(lVar7 + 0x1fa4)) {
      FUN_180115ea1();
    }
    if (*(int *)(lVar7 + 0x16ac) == param_2) {
      *(undefined4 *)(lVar7 + 0x16b0) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (*(float *)(lVar2 + 0x2c0) < *param_1 || *(float *)(lVar2 + 0x2c0) == *param_1)
    goto LAB_1801117e3;
LAB_18011181b:
    if (param_2 != 0) goto LAB_18011181f;
  }
  if ((char)uVar9 != '\0') {
    *(byte *)(lVar7 + 0x1fe9) = *(byte *)(lVar7 + 0x1fe9) | 1;
  }
  uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  cVar8 = FUN_180107af4(param_1,param_1 + 2,1);
  if (cVar8 != '\0') {
    *(byte *)(lVar7 + 0x1fe8) = *(byte *)(lVar7 + 0x1fe8) | 1;
  }
LAB_18011186b:
  return uVar9 & 0xffffffff;
}

