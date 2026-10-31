/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481d10 */

HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00481d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

