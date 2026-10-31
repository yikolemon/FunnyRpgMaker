/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c0d6 */

void __thiscall FUN_1002c0d6(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  
  *param_1 = param_3 << 0xf | *param_1 & 0xfffc7fff;
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 1) = *param_2;
      *(undefined2 *)((int)param_1 + 5) = 0;
    }
    else {
      uVar1 = 0;
      do {
        *(undefined1 *)((int)param_1 + (uVar1 & 3) + 4) = param_2[uVar1];
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
  }
  return;
}

