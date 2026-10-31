/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234920 */

/* WARNING: Removing unreachable block (ram,0x10234a86) */
/* WARNING: Removing unreachable block (ram,0x10234a57) */
/* WARNING: Removing unreachable block (ram,0x10234a12) */
/* WARNING: Removing unreachable block (ram,0x10234991) */
/* WARNING: Removing unreachable block (ram,0x10234952) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10234920(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_XCR0;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  
  DAT_10389df8 = DAT_10389df8 | 1;
  DAT_1039d7b4 = 0;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar7 = DAT_10389df8;
  uVar8 = DAT_10389e00;
  if (BVar6 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      DAT_1039d7b8 = DAT_1039d7b8 | 1;
    }
    uVar9 = 0;
    local_1c = 0;
    local_10 = 0;
    local_20 = 0;
    uVar10 = 0;
    if (6 < *piVar1) {
      piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar9 = piVar3[1];
      local_1c = piVar3[2];
      if ((uVar9 & 0x200) != 0) {
        DAT_1039d7b8 = DAT_1039d7b8 | 2;
      }
      if (0 < *piVar3) {
        iVar4 = cpuid_Extended_Feature_Enumeration_info(7);
        local_10 = *(uint *)(iVar4 + 8);
      }
      uVar10 = local_10;
      if (0x23 < *piVar1) {
        iVar4 = cpuid(0x24);
        local_20 = *(uint *)(iVar4 + 4);
      }
    }
    DAT_1039d7b4 = 1;
    uVar7 = DAT_10389df8 | 2;
    uVar8 = DAT_10389e00 & 0xfffffffe;
    if ((puVar2[3] & 0x100000) != 0) {
      DAT_1039d7b4 = 2;
      uVar8 = DAT_10389e00 & 0xffffffee;
      uVar7 = DAT_10389df8 | 6;
      if ((puVar2[3] & 0x18000000) == 0x18000000) {
        uVar5 = xinuse(0);
        local_18 = in_XCR0 & (uint)uVar5;
        if ((local_18 & 6) == 6) {
          DAT_1039d7b4 = 3;
          uVar7 = DAT_10389df8 | 0xe;
          if ((uVar9 & 0x20) != 0) {
            DAT_1039d7b4 = 5;
            uVar7 = DAT_10389df8 | 0x2e;
            uVar8 = DAT_10389e00 & 0xffffffec;
            if (((uVar9 & 0xd0030000) == 0xd0030000) && ((local_18 & 0xe0) == 0xe0)) {
              DAT_10389df8 = DAT_10389df8 | 0x6e;
              DAT_1039d7b4 = 6;
              uVar7 = DAT_10389df8;
              uVar8 = DAT_10389e00 & 0xffffffc8;
            }
          }
          DAT_10389e00 = uVar8;
          DAT_10389df8 = uVar7;
          if ((local_1c & 0x800000) != 0) {
            DAT_10389e00 = DAT_10389e00 & 0xfeffffff;
          }
          uVar7 = DAT_10389df8;
          uVar8 = DAT_10389e00;
          if (((uVar10 & 0x80000) != 0) && ((local_18 & 0xe0) == 0xe0)) {
            _DAT_1039d7bc = local_20 & 0xff;
            uVar8 = DAT_10389e00 & 0xfeffffd0;
            if (1 < _DAT_1039d7bc) {
              uVar8 = DAT_10389e00 & 0xfeffff90;
            }
          }
        }
      }
    }
  }
  DAT_10389e00 = uVar8;
  DAT_10389df8 = uVar7;
  return 0;
}

