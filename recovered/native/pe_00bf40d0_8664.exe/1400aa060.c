/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aa060 */

/* WARNING: Removing unreachable block (ram,0x0001400aa0e0) */
/* WARNING: Removing unreachable block (ram,0x0001400aa0d2) */
/* WARNING: Removing unreachable block (ram,0x0001400aa077) */

undefined8 FUN_1400aa060(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_140143820 = 0;
  DAT_140143824 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_140143820 = 1;
      DAT_140143824 = 1;
    }
    else {
      DAT_140143820 = 0;
    }
  }
  if ((DAT_140143820 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_140143824 = 3;
      DAT_140143820 = 3;
      return 0;
    }
  }
  return 0;
}

