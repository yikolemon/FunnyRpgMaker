/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c6c0 */

/* WARNING: Removing unreachable block (ram,0x00018029c740) */
/* WARNING: Removing unreachable block (ram,0x00018029c732) */
/* WARNING: Removing unreachable block (ram,0x00018029c6d7) */

undefined8 FUN_18029c6c0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_1804218b4 = 0;
  DAT_1804218b8 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_1804218b4 = 1;
      DAT_1804218b8 = 1;
    }
    else {
      DAT_1804218b4 = 0;
    }
  }
  if ((DAT_1804218b4 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1804218b8 = 3;
      DAT_1804218b4 = 3;
      return 0;
    }
  }
  return 0;
}

