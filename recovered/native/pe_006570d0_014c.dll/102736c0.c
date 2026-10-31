/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102736c0 */

undefined4 FUN_102736c0(PBYTE param_1,int param_2,int param_3)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  uint uVar4;
  
  p_Var2 = (PIMAGE_SECTION_HEADER)0x0;
  uVar3 = 0xffffffff;
  if (param_3 != -1) {
    do {
      uVar4 = *(int *)(param_2 + 8 + param_3 * 0xc) - (int)param_1 & 0xfffff000;
      if (((uVar4 != uVar3) &&
          ((((uVar3 = uVar4, p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
             (uVar4 < p_Var2->VirtualAddress)) ||
            ((p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress <= uVar4)) &&
           ((p_Var2 = __FindPESection(param_1,uVar4), p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
            ((p_Var2->Characteristics & 0x20000000) == 0)))))) ||
         (((iVar1 = *(int *)(param_2 + 4 + param_3 * 0xc), iVar1 != 0 &&
           (uVar4 = iVar1 - (int)param_1 & 0xfffff000, uVar4 != uVar3)) &&
          ((((uVar3 = uVar4, p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
             (uVar4 < p_Var2->VirtualAddress)) ||
            ((p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress <= uVar4)) &&
           ((p_Var2 = __FindPESection(param_1,uVar4), p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
            ((p_Var2->Characteristics & 0x20000000) == 0)))))))) {
        return 0;
      }
      param_3 = *(int *)(param_2 + param_3 * 0xc);
    } while (param_3 != -1);
  }
  return 1;
}

