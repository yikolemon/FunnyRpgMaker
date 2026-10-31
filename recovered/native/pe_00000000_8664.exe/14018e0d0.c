/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018e0d0 */

/* WARNING: Removing unreachable block (ram,0x00014018e1d7) */
/* WARNING: Removing unreachable block (ram,0x00014018e1c5) */
/* WARNING: Removing unreachable block (ram,0x00014018e1b3) */
/* WARNING: Removing unreachable block (ram,0x00014018e18c) */
/* WARNING: Removing unreachable block (ram,0x00014018e107) */
/* WARNING: Removing unreachable block (ram,0x00014018e0e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14018e0d0(void)

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
    DAT_140f1c698 = 0x8000;
    DAT_140f1c6a0 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140f324c0 = DAT_140f324c0 | 1;
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
      DAT_140f324c0 = DAT_140f324c0 | 2;
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
  DAT_140f1c690 = 1;
  DAT_140f1c694 = 2;
  uVar6 = DAT_140f1c6a8 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_140f1c690 = 2;
    DAT_140f1c694 = 6;
    uVar6 = DAT_140f1c6a8 & 0xffffffffffffffee;
  }
  DAT_140f1c6a8 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar6 = xinuse(0);
    uVar9 = in_XCR0 & uVar6 & 0xffffffff;
    uVar6 = DAT_140f1c6a8;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      DAT_140f1c690 = 3;
      uVar5 = DAT_140f1c694 | 8;
      if ((uVar12 & 0x20) != 0) {
        DAT_140f1c690 = 5;
        uVar5 = DAT_140f1c694 | 0x28;
        uVar6 = DAT_140f1c6a8 & 0xfffffffffffffffd;
        if (((uVar12 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_140f1c694 = DAT_140f1c694 | 0x68;
          DAT_140f1c690 = 6;
          uVar5 = DAT_140f1c694;
          uVar6 = DAT_140f1c6a8 & 0xffffffffffffffd9;
        }
      }
      DAT_140f1c6a8 = uVar6;
      DAT_140f1c694 = uVar5;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_140f1c6a8 = DAT_140f1c6a8 & 0xfffffffffeffffff;
      }
      uVar6 = DAT_140f1c6a8;
      if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_140f324c4 = uVar8 & 0xff;
        uVar6 = DAT_140f1c6a8 & 0xfffffffffeffffd0;
        if (1 < _DAT_140f324c4) {
          uVar6 = DAT_140f1c6a8 & 0xfffffffffeffff90;
        }
      }
    }
    DAT_140f1c6a8 = uVar6;
    if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_140f1c6a8 = DAT_140f1c6a8 & 0xffffffffffffff7f;
    }
  }
  return 0;
}

