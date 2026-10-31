/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10132656 */

void FUN_10132656(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar1 + 0x14cc) + 0xfe) == '\0') {
    uVar2 = FUN_100fd57d(param_1,0);
    FUN_101321e9(0,param_1,uVar2,0);
  }
  return;
}

