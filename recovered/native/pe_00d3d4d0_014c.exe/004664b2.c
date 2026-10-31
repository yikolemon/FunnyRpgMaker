/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004664b2 */

void __fastcall FUN_004664b2(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  undefined3 extraout_var;
  uint uVar5;
  int *piVar6;
  
  if (param_2 < *param_1) {
    piVar6 = (int *)(param_2 * 0x1c + param_1[2]);
    if ((piVar6[4] & 4U) == 0) {
      piVar6[4] = piVar6[4] | 4;
      uVar1 = param_1[1];
      uVar2 = param_1[4];
      piVar6[5] = 0;
      if (uVar1 != 0) {
        uVar5 = 0;
        do {
          piVar3 = *(int **)(uVar2 + uVar5 * 4);
          bVar4 = FUN_0046652b(piVar6,piVar3);
          if (CONCAT31(extraout_var,bVar4) != 0) {
            piVar6[5] = (int)piVar3;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
      uVar1 = param_1[1];
      if (uVar1 < *param_1) {
        param_1[1] = uVar1 + 1;
        *(int **)(param_1[4] + uVar1 * 4) = piVar6;
      }
    }
  }
  return;
}

