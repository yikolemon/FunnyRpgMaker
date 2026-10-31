/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4877 */

void __fastcall FUN_101e4877(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  if (0xfffffffc < uVar1 - 4) {
    uVar2 = *param_2;
    uVar3 = 1 << ((char)uVar1 - 1U & 0x1f);
    if ((uVar2 == 0) || (uVar2 == uVar3)) {
      if (param_1[0x4d] == 2) {
        *(byte *)((int)param_1 + 0x12d) =
             (byte)uVar2 | ~(byte)uVar3 & *(byte *)((int)param_1 + 0x12d);
        return;
      }
      if (uVar1 == 3 && param_1[0x4d] == 3) {
        if (*(int *)(*(int *)(*param_1 + 0x60) + 0x38) != 0x28) {
          return;
        }
        param_1[0x81] = ~uVar2 & 4;
        return;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x1ce) != '\0') {
    param_1[4] = 0x86;
  }
  return;
}

