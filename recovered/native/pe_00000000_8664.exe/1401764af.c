/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401764af */

undefined8 FUN_1401764af(longlong param_1,short param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar5;
  ulonglong uVar6;
  undefined7 uVar4;
  
  lVar2 = 0xffffffff;
  *param_3 = -1;
  *param_4 = -1;
  if (*(short *)(param_1 + 0x1d0) != 0) {
    lVar2 = 0;
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1e8);
      if ((*(short *)(lVar1 + 6 + lVar2) == param_2) && (*(short *)(lVar1 + 8 + lVar2) != 0)) {
        sVar5 = *(short *)(lVar1 + lVar2);
        if (sVar5 == 3) {
          if ((1 < *(ushort *)(lVar1 + 2 + lVar2)) ||
             ((*(short *)(lVar1 + 4 + lVar2) != 0x409 && (*param_3 != -1)))) goto LAB_14017652f;
          *param_3 = (int)uVar6;
          sVar5 = *(short *)(lVar1 + lVar2);
        }
        if (((sVar5 == 1) && (*(short *)(lVar1 + 2 + lVar2) == 0)) &&
           ((*(short *)(lVar1 + 4 + lVar2) == 0 || (*param_4 == -1)))) {
          *param_4 = (int)uVar6;
        }
      }
LAB_14017652f:
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar6 < *(ushort *)(param_1 + 0x1d0));
  }
  uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*param_3 < 0) {
    uVar3 = CONCAT71(uVar4,-1 < *param_4);
  }
  return uVar3;
}

