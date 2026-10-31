/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c9d8 */

undefined4 FUN_1010c9d8(float *param_1,int param_2,float *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  undefined3 uVar9;
  
  iVar7 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  *(int *)(DAT_1039d74c + 0x1e80) = param_2;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  if (param_3 == (float *)0x0) {
    param_3 = param_1;
  }
  *(float *)(iVar7 + 0x1e8c) = *param_1;
  *(float *)(iVar7 + 0x1e90) = fVar3;
  *(float *)(iVar7 + 0x1e94) = fVar4;
  *(float *)(iVar7 + 0x1e98) = fVar5;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  *(float *)(iVar7 + 0x1e9c) = *param_3;
  *(float *)(iVar7 + 0x1ea0) = fVar3;
  *(float *)(iVar7 + 0x1ea4) = fVar4;
  *(float *)(iVar7 + 0x1ea8) = fVar5;
  *(uint *)(iVar7 + 0x1e84) = *(uint *)(iVar7 + 0x1e40) | param_4 | *(uint *)(iVar7 + 0x1e4c);
  *(undefined4 *)(iVar7 + 0x1e88) = 0;
  if (param_2 != 0) {
    FUN_10103c09(param_2);
    if ((((*(byte *)(iVar7 + 0x1e84) & 2) == 0) &&
        (((*(ushort *)(iVar1 + 0x1a2) =
                *(ushort *)(iVar1 + 0x1a2) | (ushort)(1 << (*(byte *)(iVar1 + 0x19c) & 0x1f)),
          *(int *)(iVar7 + 0x2044) == param_2 || (*(char *)(iVar7 + 0x2099) == '\x01')) &&
         (iVar2 = *(int *)(iVar7 + 0x2048), *(int *)(iVar2 + 0x3b8) == *(int *)(iVar1 + 0x3b8)))))
       && ((iVar1 == iVar2 || (((*(uint *)(iVar2 + 0x14) | *(uint *)(iVar1 + 0x14)) >> 8 & 1) != 0))
          )) {
      FUN_10114bb2();
    }
    if ((*(byte *)(iVar7 + 0x1e48) & 4) != 0) {
      FUN_10114f20();
    }
  }
  *(undefined4 *)(iVar7 + 0x1e48) = 0;
  *(undefined4 *)(iVar7 + 0x1e4c) = 0;
  if (((param_1[3] < *(float *)(iVar1 + 0x290) || param_1[3] == *(float *)(iVar1 + 0x290)) ||
      (*(float *)(iVar1 + 0x298) < param_1[1] || *(float *)(iVar1 + 0x298) == param_1[1])) ||
     (param_1[2] < *(float *)(iVar1 + 0x28c) || param_1[2] == *(float *)(iVar1 + 0x28c))) {
LAB_1010caf0:
    if ((param_2 == 0) ||
       ((((param_2 != *(int *)(iVar7 + 0x1528) && (param_2 != *(int *)(iVar7 + 0x1550))) &&
         (param_2 != *(int *)(iVar7 + 0x2044))) && (param_2 != *(int *)(iVar7 + 0x2058))))) {
      uVar9 = 0;
      bVar6 = false;
      if (*(char *)(iVar7 + 0x1526) != '\x01') {
        return 0;
      }
      goto LAB_1010cb23;
    }
    uVar9 = 0;
    bVar6 = false;
  }
  else {
    uVar9 = (undefined3)((uint)iVar1 >> 8);
    bVar6 = true;
    if (*(float *)(iVar1 + 0x294) < *param_1 || *(float *)(iVar1 + 0x294) == *param_1)
    goto LAB_1010caf0;
LAB_1010cb23:
    if (param_2 == 0) goto LAB_1010cb48;
  }
  if (param_2 == *(int *)(iVar7 + 0x1e44)) {
    FUN_101112a9();
  }
  if (*(int *)(iVar7 + 0x1554) == param_2) {
    *(undefined4 *)(iVar7 + 0x1558) = *(undefined4 *)(iVar7 + 4);
  }
LAB_1010cb48:
  if (bVar6) {
    *(byte *)(iVar7 + 0x1e89) = *(byte *)(iVar7 + 0x1e89) | 1;
  }
  cVar8 = FUN_10102f3a(param_1,param_1 + 2,1);
  if (cVar8 != '\0') {
    *(byte *)(iVar7 + 0x1e88) = *(byte *)(iVar7 + 0x1e88) | 1;
  }
  return CONCAT31(uVar9,1);
}

