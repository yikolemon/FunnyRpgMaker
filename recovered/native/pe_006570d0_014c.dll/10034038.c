/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10034038 */

void __fastcall FUN_10034038(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      FUN_10034090(*puVar4,puVar4);
    }
    else {
      FUN_1002335e((undefined4 *)(param_1 + 4),puVar4);
      iVar1 = *(int *)(param_1 + 4);
      *(int *)iVar1 = iVar1;
      *(int *)(iVar1 + 4) = iVar1;
      *(undefined4 *)(param_1 + 8) = 0;
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if (puVar4 != puVar2) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        do {
          *puVar4 = uVar3;
          puVar4 = puVar4 + 1;
        } while (puVar4 != puVar2);
      }
    }
  }
  return;
}

