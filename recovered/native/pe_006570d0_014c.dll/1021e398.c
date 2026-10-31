/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021e398 */

undefined4 __fastcall FUN_1021e398(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18) + -4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  if (*(short *)(param_1 + 0x54) != 0) {
    uVar3 = 0;
    do {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      cVar2 = FUN_1021e6f9(*(undefined2 *)(*(int *)(param_1 + 0x60) + uVar3 * 2),param_2);
      if (cVar2 != '\0') {
        return 1;
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        uVar1 = *(uint *)(param_1 + 0x30);
        if (((((*(int *)(param_1 + 4) - 1U & uVar1) == 0) &&
             (*(int *)(param_1 + 0x34) <= (int)uVar1)) && ((int)uVar1 <= *(int *)(param_1 + 0x38)))
           && (((*(ushort *)(*(int *)(param_1 + 0x44) + 0x14) ^
                *(ushort *)(*(int *)(param_1 + 0x4c) + 0x14)) & 8) == 0)) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
        }
        cVar2 = FUN_1021ea91();
        if (cVar2 != '\0') {
          return 1;
        }
        if (*(int *)(param_1 + 0x48) == 0) {
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x54));
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1021eb63();
    }
  }
  return 0;
}

