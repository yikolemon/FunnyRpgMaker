/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ed32 */

void __fastcall FUN_1020ed32(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < *param_1) {
    iVar6 = param_2 * 0x1c + param_1[2];
    if ((*(uint *)(iVar6 + 0x10) & 4) == 0) {
      *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 4;
      uVar1 = param_1[1];
      uVar2 = param_1[4];
      *(undefined4 *)(iVar6 + 0x14) = 0;
      if (uVar1 != 0) {
        uVar5 = 0;
        do {
          uVar3 = *(undefined4 *)(uVar2 + uVar5 * 4);
          iVar4 = FUN_1020edab();
          if (iVar4 != 0) {
            *(undefined4 *)(iVar6 + 0x14) = uVar3;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
      uVar1 = param_1[1];
      if (uVar1 < *param_1) {
        param_1[1] = uVar1 + 1;
        *(int *)(param_1[4] + uVar1 * 4) = iVar6;
      }
    }
  }
  return;
}

