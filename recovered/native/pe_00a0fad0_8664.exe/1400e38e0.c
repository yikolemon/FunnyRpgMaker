/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e38e0 */

undefined1 * FUN_1400e38e0(undefined1 *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) goto LAB_1400e3942;
  if (**(longlong **)(lVar2 + 0x40) == 0) {
LAB_1400e3922:
    param_2 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar2,param_2);
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x58);
    if (iVar1 < 1) goto LAB_1400e3922;
    **(int **)(lVar2 + 0x58) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
    **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
    *psVar3 = param_2;
  }
  if (param_2 != -1) {
    return param_1;
  }
LAB_1400e3942:
  *param_1 = 1;
  return param_1;
}

