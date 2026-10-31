/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ebb0 */

void __fastcall FUN_1025ebb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\x02') {
    *(uint *)(*param_1 + 0x350) = *(uint *)(*param_1 + 0x350) & 0xfffffffd;
  }
  if ((char)param_1[7] != '\0') {
    iVar1 = param_1[6];
    iVar2 = FUN_1025ebf0();
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  if ((char)param_1[9] != '\0') {
    iVar1 = param_1[8];
    iVar2 = FUN_1025ebf0();
    *(int *)(iVar2 + 0x14) = iVar1;
  }
  return;
}

