/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10175faf */

/* WARNING: Removing unreachable block (ram,0x10175fb5) */

undefined4 FUN_10175faf(void)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return *(undefined4 *)(iVar1 + 8);
}

