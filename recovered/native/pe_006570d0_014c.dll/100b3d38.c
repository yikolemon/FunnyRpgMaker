/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b3d38 */

void __fastcall FUN_100b3d38(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 != iVar1) {
    do {
      FUN_10061bef(iVar2);
      iVar2 = iVar2 + 0x30;
    } while (iVar2 != iVar1);
    param_1[1] = *param_1;
  }
  iVar2 = param_1[3];
  iVar1 = param_1[4];
  if (iVar2 != iVar1) {
    do {
      FUN_10061f68(iVar2);
      iVar2 = iVar2 + 0x1c;
    } while (iVar2 != iVar1);
    param_1[4] = param_1[3];
  }
  FUN_10060b96();
  return;
}

