/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000e15d */

undefined8 * FUN_14000e15d(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = param_2[2];
  uVar7 = 3;
  iVar3 = FUN_14000d73c(param_2,0,3,&DAT_140171bb6);
  if (iVar3 == 0) {
    lVar8 = 2;
    iVar3 = FUN_14000d73c(param_2,lVar2 + -2,2,&DAT_140171d1d);
    if (iVar3 != 0) goto LAB_14000e1c5;
LAB_14000e220:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    if (0xf < (lVar2 - lVar8) - uVar7) {
      FUN_14000e9ea(param_1);
      param_1[2] = 0;
    }
    for (; uVar7 < (ulonglong)(lVar2 - lVar8); uVar7 = uVar7 + lVar9) {
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      if ((*(char *)((longlong)puVar5 + uVar7) == '\\') &&
         ((*(byte *)((longlong)puVar5 + uVar7 + 1) | 0x20) == 0x78)) {
        cVar1 = *(char *)((longlong)puVar5 + uVar7 + 2);
        iVar3 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar6 = iVar3 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar6 = iVar3 - 0x37;
        }
        else {
          uVar6 = iVar3 - 0x57;
          if (5 < (byte)(cVar1 + 0x9fU)) {
            uVar6 = 0xffffffff;
          }
        }
        cVar1 = *(char *)((longlong)puVar5 + uVar7 + 3);
        iVar3 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = iVar3 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = iVar3 - 0x37;
        }
        else {
          uVar4 = iVar3 - 0x57;
          if (5 < (byte)(cVar1 + 0x9fU)) {
            uVar4 = 0xffffffff;
          }
        }
        if (0xf < (uVar4 | uVar6)) goto LAB_14000e332;
        lVar9 = 4;
        FUN_14000cf50(param_1,uVar4 | uVar6 << 4);
      }
      else {
LAB_14000e332:
        lVar9 = 1;
        FUN_14000cf50(param_1);
      }
    }
  }
  else {
LAB_14000e1c5:
    uVar7 = 4;
    iVar3 = FUN_14000d73c(param_2,0,4,&DAT_140171bb5);
    if (iVar3 == 0) {
      lVar8 = 3;
      iVar3 = FUN_14000d73c(param_2,lVar2 + -3,3,&DAT_140171cdc);
      if (iVar3 == 0) goto LAB_14000e220;
    }
    FUN_140006874(param_1,param_2);
  }
  return param_1;
}

