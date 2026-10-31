/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ea6f */

void __fastcall FUN_1020ea6f(uint *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*param_1 != 0) {
    iVar2 = *(int *)(param_1[5] + 4);
    iVar3 = *(int *)(param_1[5] + 8);
    puVar5 = (undefined4 *)(param_1[2] + 0x28);
    uVar4 = 0;
    do {
      if (param_2 == 0) {
        *(undefined4 *)(iVar2 + uVar4 * 8) = *puVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 4 + uVar4 * 8) = *puVar5;
      }
      if ((*(byte *)(puVar5 + -6) & 0x10) != 0) {
        pbVar1 = (byte *)(iVar3 + uVar4);
        *pbVar1 = *pbVar1 | (param_2 != 0) * ' ' + 0x20U;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xb;
    } while (uVar4 < *param_1);
  }
  return;
}

