/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb0e8 */

void FUN_1407eb0e8(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  int unaff_retaddr;
  undefined4 local_res8;
  undefined4 local_resc;
  
  bVar1 = (char)(local_resc - unaff_retaddr) * '\x02';
  uVar2 = (ulonglong)((uint)(local_resc - unaff_retaddr) >> 4);
  *(uint *)((unaff_RDI >> 0x20) + uVar2 * 4) =
       local_res8 << (bVar1 & 0x1f) |
       ~(3 << (bVar1 & 0x1f)) & *(uint *)((unaff_RDI >> 0x20) + uVar2 * 4);
  return;
}

