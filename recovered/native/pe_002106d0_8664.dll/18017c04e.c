/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017c04e */

/* WARNING: Removing unreachable block (ram,0x00018017c058) */

undefined4 FUN_18017c04e(void)

{
  longlong lVar1;
  
  lVar1 = cpuid_Version_info(1);
  return *(undefined4 *)(lVar1 + 8);
}

