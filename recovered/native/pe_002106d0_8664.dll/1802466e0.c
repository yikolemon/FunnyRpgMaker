/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802466e0 */

/* WARNING: Removing unreachable block (ram,0x0001802467e7) */
/* WARNING: Removing unreachable block (ram,0x0001802467d5) */
/* WARNING: Removing unreachable block (ram,0x0001802467c3) */
/* WARNING: Removing unreachable block (ram,0x00018024679c) */
/* WARNING: Removing unreachable block (ram,0x000180246717) */
/* WARNING: Removing unreachable block (ram,0x0001802466f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802466e0(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_1804039e0 = 0x8000;
    DAT_1804039e8 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1804191e4 = DAT_1804191e4 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1804191e4 = DAT_1804191e4 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    uVar11 = 0;
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_1804039d8 = 1;
  DAT_1804039dc = 2;
  uVar6 = DAT_1804039f0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1804039d8 = 2;
    DAT_1804039dc = 6;
    uVar6 = DAT_1804039f0 & 0xffffffffffffffee;
  }
  DAT_1804039f0 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar6 = xinuse(0);
    uVar9 = in_XCR0 & uVar6 & 0xffffffff;
    uVar6 = DAT_1804039f0;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      DAT_1804039d8 = 3;
      uVar5 = DAT_1804039dc | 8;
      if ((uVar12 & 0x20) != 0) {
        DAT_1804039d8 = 5;
        uVar5 = DAT_1804039dc | 0x28;
        uVar6 = DAT_1804039f0 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_1804039dc = DAT_1804039dc | 0x68;
          DAT_1804039d8 = 6;
          uVar5 = DAT_1804039dc;
          uVar6 = DAT_1804039f0 & 0xffffffffffffffd9;
        }
      }
      DAT_1804039f0 = uVar6;
      DAT_1804039dc = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_1804039f0 = DAT_1804039f0 & 0xfffffffffeffffff;
      }
      uVar6 = DAT_1804039f0;
      if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_1804191e8 = uVar8 & 0xff;
        uVar6 = DAT_1804039f0 & 0xfffffffffeffffd0;
        if (1 < _DAT_1804191e8) {
          uVar6 = DAT_1804039f0 & 0xfffffffffeffff90;
        }
      }
    }
    DAT_1804039f0 = uVar6;
    if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_1804039f0 = DAT_1804039f0 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

