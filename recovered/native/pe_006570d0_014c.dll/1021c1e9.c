/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021c1e9 */

int __fastcall FUN_1021c1e9(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  iVar1 = FUN_1021c17a(param_3);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (uVar4 != 0) {
      param_2 = param_2 + 1;
      uVar3 = 0;
      do {
        *(uint *)(iVar2 + uVar3 * 4) =
             (uint)*(byte *)((int)param_2 + 2) |
             (uint)*(byte *)((int)param_2 + 1) << 8 | (uint)(byte)*param_2 << 0x10;
        param_2 = (uint *)((int)param_2 + 5);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    *(undefined4 *)(iVar2 + uVar4 * 4) = 0;
  }
  return iVar2;
}

