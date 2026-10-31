/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eff53 */

void FUN_1801eff53(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  if (0xfffffffc < uVar1 - 4) {
    uVar2 = *param_2;
    uVar3 = 1 << ((char)uVar1 - 1U & 0x1f);
    if ((uVar2 == 0) || (uVar2 == uVar3)) {
      if ((int)param_1[0x3b] == 2) {
        *(byte *)((longlong)param_1 + 0x1d1) =
             (byte)uVar2 | ~(byte)uVar3 & *(byte *)((longlong)param_1 + 0x1d1);
        return;
      }
      if (uVar1 == 3 && (int)param_1[0x3b] == 3) {
        if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) != 0x28) {
          return;
        }
        *(uint *)((longlong)param_1 + 0x324) = ~uVar2 & 4;
        return;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 4) = 0x86;
  }
  return;
}

