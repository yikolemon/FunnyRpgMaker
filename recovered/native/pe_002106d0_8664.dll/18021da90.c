/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021da90 */

void FUN_18021da90(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 8);
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 2) + 0x34);
    do {
      puVar3[-6] = 0;
      *(undefined8 *)(puVar3 + -3) = 0;
      if (param_2 == 0) {
        puVar3[-1] = *puVar2;
        puVar4 = puVar2 + 1;
      }
      else {
        puVar3[-1] = puVar2[1];
        puVar4 = puVar2;
      }
      *puVar3 = *puVar4;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

