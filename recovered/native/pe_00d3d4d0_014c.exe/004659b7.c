/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004659b7 */

void __fastcall FUN_004659b7(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1[5] + 4);
    puVar4 = (undefined4 *)(param_1[2] + 0x24);
    do {
      puVar4[-5] = 0;
      puVar4[-2] = 0;
      if (param_2 == 0) {
        puVar4[-1] = *puVar2;
        puVar3 = puVar2 + 1;
      }
      else {
        puVar4[-1] = puVar2[1];
        puVar3 = puVar2;
      }
      *puVar4 = *puVar3;
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 0xb;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

