/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a04e */

undefined8 __fastcall FUN_0043a04e(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  ulonglong uVar5;
  
  iVar2 = *param_2;
  if ((iVar2 < 1) || (*(int *)(param_1 + 0x20) < iVar2)) {
    piVar4 = param_2;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
      return CONCAT44(param_2,iVar2);
    }
  }
  else {
    puVar3 = (uint *)(param_2 + -iVar2);
    uVar1 = *puVar3;
    uVar5 = FUN_004878c0(puVar3,puVar3 + 1,iVar2 * 4 - 4);
    piVar4 = (int *)(uVar5 >> 0x20);
    iVar2 = (int)uVar5;
    param_2[-1] = uVar1;
  }
  return CONCAT44(piVar4,iVar2);
}

