/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b70d8 */

void __fastcall FUN_101b70d8(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0x208c0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar4 = 0x20bc0;
  }
  uVar3 = FUN_1014b156(*(undefined4 *)(param_1 + 0x1c));
  FUN_1014ae21(param_1,param_1 >> 0x1f);
  FUN_101494d3(*(undefined4 *)(param_1 + 0x1c));
  cVar2 = FUN_10148b8c(param_1,uVar3 & 0xff | uVar4);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        FUN_101b70d8();
        iVar5 = iVar5 + 4;
      } while (iVar1 << 2 != iVar5);
    }
    FUN_10149387();
    return;
  }
  cVar2 = FUN_1010bf99();
  if (cVar2 != '\0') {
    FUN_101b76b6();
    return;
  }
  return;
}

