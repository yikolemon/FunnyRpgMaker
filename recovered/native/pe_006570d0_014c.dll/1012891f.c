/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012891f */

void __fastcall FUN_1012891f(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1039d74c;
  if ((*(byte *)(*(int *)(DAT_1039d74c + 0x221c) + 0xf) & 8) == 0) {
    FUN_101170b3();
    iVar2 = FUN_101288d4(param_1);
    if ((iVar2 != 0) || (iVar2 = FUN_101288d4(param_1), iVar2 != 0)) {
      *(int *)(iVar1 + 0x2220) = iVar2;
      *(int *)(iVar1 + 0x221c) = iVar2;
      *(undefined4 *)(iVar1 + 0x223c) = 0;
      *(undefined4 *)(iVar1 + 0x2240) = 0;
      *(undefined4 *)(iVar1 + 0x2244) = 0;
      *(undefined4 *)(iVar1 + 0x2248) = 0;
    }
    *(undefined1 *)(iVar1 + 0x2234) = 0;
  }
  return;
}

