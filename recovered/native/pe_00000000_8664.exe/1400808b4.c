/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400808b4 */

undefined8 FUN_1400808b4(uint param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  float fVar8;
  
  lVar4 = DAT_140f2a910;
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((param_1 & 0xfffc005f) != 0) {
    FUN_14007a954("Invalid flags for IsItemHovered()!");
  }
  if (((*(char *)(lVar4 + 0x21f5) == '\x01') && ((param_1 >> 0xb & 1) == 0)) &&
     (*(char *)(lVar4 + 0x21f4) != '\0')) {
    cVar5 = FUN_140080ad1();
    if (cVar5 == '\0') {
      return 0;
    }
    if (((param_1 >> 10 & 1) == 0) && ((*(uint *)(lVar4 + 0x1fe4) & 0x40) != 0)) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_140080b07(param_1,*(undefined4 *)(lVar4 + 0x12e8));
    }
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0x1fe8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_140080b07(param_1,*(undefined4 *)(lVar4 + 0x12e4));
    }
    if ((*(longlong *)(lVar4 + 0x1610) != lVar3) && ((param_1 & 0x200) == 0 && (uVar1 & 0x80) == 0))
    {
      return 0;
    }
    iVar7 = *(int *)(lVar4 + 0x1fe0);
    if (((((-1 < (char)param_1) && (iVar2 = *(int *)(lVar4 + 0x167c), iVar2 != 0)) &&
         ((iVar2 != iVar7 &&
          ((*(char *)(lVar4 + 0x1689) == '\0' && (*(char *)(lVar4 + 0x168e) == '\0')))))) &&
        ((iVar2 != *(int *)(lVar3 + 0xc4) || ((iVar7 != 0 && (*(int *)(lVar4 + 0x1690) != iVar7)))))
        ) && (iVar2 != *(int *)(lVar3 + 200))) {
      return 0;
    }
    bVar6 = FUN_1400807fe(lVar3,param_1);
    uVar1 = *(uint *)(lVar4 + 0x1fe4);
    if (((byte)(uVar1 >> 0xd) & 1 | bVar6) != 1) {
      return 0;
    }
    if (((param_1 >> 10 & 1) == 0 & (byte)((uVar1 & 0x40) >> 6)) != 0) {
      return 0;
    }
    if ((iVar7 == *(int *)(lVar3 + 0xc4)) && (*(char *)(lVar3 + 0x10b) != '\0')) {
      return 0;
    }
    if (((((param_1 >> 8 & 1) == 0) && ((uVar1 & 0x4000) != 0)) && (iVar7 != 0)) &&
       (*(int *)(lVar4 + 0x1668) != iVar7)) {
      return 0;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    fVar8 = 0.0;
    if ((short)param_1 < 0) {
      fVar8 = *(float *)(DAT_140f2a910 + 0x12dc);
    }
  }
  else {
    fVar8 = *(float *)(DAT_140f2a910 + 0x12e0);
  }
  if (((param_1 >> 0xd & 1) != 0) || (0.0 < fVar8)) {
    iVar7 = *(int *)(lVar4 + 0x1fe0);
    if (iVar7 == 0) {
      iVar7 = FUN_140080b1a(lVar3,lVar4 + 0x1fec);
    }
    if (((param_1 >> 0x11 & 1) != 0) && (*(int *)(lVar4 + 0x2684) != iVar7)) {
      *(undefined4 *)(lVar4 + 0x2688) = 0;
    }
    *(int *)(lVar4 + 0x2680) = iVar7;
    if ((((param_1 >> 0xd & 1) != 0) && (*(int *)(lVar4 + 0x2690) != iVar7)) ||
       (*(float *)(lVar4 + 0x2688) <= fVar8 && fVar8 != *(float *)(lVar4 + 0x2688))) {
      return 0;
    }
  }
  return 1;
}

