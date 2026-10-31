/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112c4f */

void FUN_10112c4f(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(int *)(DAT_1039d74c + 0x1220) = param_1;
  *(undefined4 *)(iVar2 + 0x122c) = param_2;
  FUN_10111f43(param_3);
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(iVar2 + 0x1248) = iVar1;
    *(int *)(iVar2 + 0x124c) = param_1;
    FUN_1019151f(iVar1);
    if (*(int *)(iVar2 + 0x14cc) != 0) {
      FUN_101884b4(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),
                   *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  return;
}

