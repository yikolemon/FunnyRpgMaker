/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012dce0 */

/* WARNING: Removing unreachable block (ram,0x00014012dd60) */
/* WARNING: Removing unreachable block (ram,0x00014012dd52) */
/* WARNING: Removing unreachable block (ram,0x00014012dcf7) */

undefined8 FUN_14012dce0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_14035565c = 0;
  DAT_140355660 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_14035565c = 1;
      DAT_140355660 = 1;
    }
    else {
      DAT_14035565c = 0;
    }
  }
  if ((DAT_14035565c != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_140355660 = 3;
      DAT_14035565c = 3;
      return 0;
    }
  }
  return 0;
}

