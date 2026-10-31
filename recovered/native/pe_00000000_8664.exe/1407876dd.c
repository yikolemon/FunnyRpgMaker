/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407876dd */

uint FUN_1407876dd(void)

{
  undefined8 unaff_RBX;
  uint unaff_retaddr;
  int unaff_retaddr_00;
  undefined4 local_res8;
  undefined4 local_resc;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)unaff_RBX;
  iVar2 = (int)((ulonglong)unaff_RBX >> 0x20);
  if ((SBORROW4(iVar2,local_resc) != SBORROW4(iVar2 - local_resc,(uint)(uVar1 < local_res8))) !=
      (int)((iVar2 - local_resc) - (uint)(uVar1 < local_res8)) < 0) {
    local_res8 = uVar1;
  }
  if ((SBORROW4(iVar2,unaff_retaddr_00) !=
      SBORROW4(iVar2 - unaff_retaddr_00,(uint)(uVar1 < unaff_retaddr))) !=
      (int)((iVar2 - unaff_retaddr_00) - (uint)(uVar1 < unaff_retaddr)) < 0) {
    local_res8 = unaff_retaddr;
  }
  return local_res8;
}

