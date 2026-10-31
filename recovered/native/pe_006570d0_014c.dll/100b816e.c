/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b816e */

void __fastcall FUN_100b816e(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = param_1[1];
    if (iVar2 != iVar1) {
      do {
        FUN_100b80da();
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != iVar1);
      iVar2 = *param_1;
    }
    (*DAT_1039c964)(iVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

