/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140883770 */

/* WARNING: Instruction at (ram,0x0001408837cf) overlaps instruction at (ram,0x0001408837ce)
    */

ulonglong FUN_140883770(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  uint local_res8;
  
  uVar3 = (uint)((ulonglong)unaff_RBX >> 0x20);
  if (local_res8 == 0) {
    uVar1 = ((ulonglong)unaff_retaddr % (ulonglong)unaff_retaddr_00 << 0x20 | (ulonglong)uVar3) /
            (ulonglong)unaff_retaddr_00;
  }
  else {
    do {
      unaff_retaddr_00 = (uint)(CONCAT14((local_res8 & 1) != 0,unaff_retaddr_00) >> 1);
      uVar2 = unaff_retaddr & 1;
      unaff_retaddr = unaff_retaddr >> 1;
      uVar3 = (uint)(CONCAT14(uVar2 != 0,uVar3) >> 1);
      local_res8 = local_res8 >> 1;
    } while (local_res8 != 0);
    uVar1 = CONCAT44(unaff_retaddr,uVar3) / (ulonglong)unaff_retaddr_00;
  }
  return uVar1 & 0xffffffff;
}

