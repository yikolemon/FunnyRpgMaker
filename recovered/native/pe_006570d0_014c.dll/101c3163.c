/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c3163 */

undefined4 FUN_101c3163(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x21;
  }
  else {
    uVar3 = 0x22;
    if ((param_2 != 0) && (iVar2 = *(int *)(param_1 + 0x10), iVar2 != 0)) {
      piVar5 = (int *)(param_1 + 0x14);
      iVar1 = param_1 + iVar2 * 4;
      do {
        if (*piVar5 == param_2) {
          *(int *)(param_1 + 0x10) = iVar2 + -1;
          piVar4 = (int *)(iVar1 + 0x10);
          for (; piVar5 < piVar4; piVar5 = piVar5 + 1) {
            *piVar5 = piVar5[1];
          }
          *piVar4 = 0;
          FUN_101c334a();
          return 0;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 < (int *)(iVar1 + 0x14));
    }
  }
  return uVar3;
}

