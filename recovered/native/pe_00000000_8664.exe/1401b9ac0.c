/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b9ac0 */

/* WARNING: Removing unreachable block (ram,0x0001401b9b40) */
/* WARNING: Removing unreachable block (ram,0x0001401b9b32) */
/* WARNING: Removing unreachable block (ram,0x0001401b9ad7) */

undefined8 FUN_1401b9ac0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_140f33260 = 0;
  DAT_140f33264 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_140f33260 = 1;
      DAT_140f33264 = 1;
    }
    else {
      DAT_140f33260 = 0;
    }
  }
  if ((DAT_140f33260 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_140f33264 = 3;
      DAT_140f33260 = 3;
      return 0;
    }
  }
  return 0;
}

