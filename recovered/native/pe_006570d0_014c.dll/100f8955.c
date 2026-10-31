/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8955 */

undefined4 __fastcall FUN_100f8955(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*param_1 == 0x52727464) {
    iVar3 = 0x88;
    uVar2 = 1;
    do {
      piVar1 = *(int **)((int)param_1 + iVar3);
      if (piVar1 != (int *)0x0) {
        if (piVar1 < param_1) {
          return 0;
        }
        if (param_1 + 0x4000 <= piVar1) {
          return 0;
        }
      }
      iVar3 = iVar3 + 0x48;
    } while (iVar3 != 0x10030);
  }
  return uVar2;
}

