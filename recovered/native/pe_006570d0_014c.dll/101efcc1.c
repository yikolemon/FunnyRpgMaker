/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101efcc1 */

undefined4 FUN_101efcc1(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x214);
  uVar2 = 6;
  if (puVar1 != (uint *)0x0) {
    if (param_2 == 0 && param_3 == 0) {
      if (*puVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
        do {
          *(undefined4 *)(puVar1[0x22] + uVar3 * 4) = *(undefined4 *)(puVar1[0x23] + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *puVar1);
      }
    }
    else if (param_3 != 0) {
      uVar3 = *puVar1;
      if (uVar3 <= param_2) {
        param_2 = uVar3;
      }
      if (param_2 != 0) {
        uVar3 = 0;
        do {
          *(undefined4 *)(puVar1[0x22] + uVar3 * 4) = *(undefined4 *)(param_3 + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (param_2 != uVar3);
        uVar3 = *puVar1;
      }
      uVar2 = 0;
      if (param_2 < uVar3) {
        do {
          *(undefined4 *)(puVar1[0x22] + param_2 * 4) = 0;
          param_2 = param_2 + 1;
        } while (param_2 < *puVar1);
      }
    }
  }
  return uVar2;
}

