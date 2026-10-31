/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b76b6 */

uint __fastcall FUN_101b76b6(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_1014b156(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = uVar3 & 0xff;
  if (param_2 != 0) {
    cVar2 = FUN_10148c72(*(undefined4 *)(param_1 + 0x1c));
    if (cVar2 == '\0') goto LAB_101b772a;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar6 = param_2 + 1;
    iVar5 = 0;
    do {
      iVar4 = FUN_101b76b6(param_2,param_1,iVar6);
      uVar3 = uVar3 + iVar4;
      iVar5 = iVar5 + 4;
    } while (iVar1 << 2 != iVar5);
  }
  FUN_10148c94(*(undefined4 *)(param_1 + 0x1c),0);
LAB_101b772a:
  FUN_1014b226(*(undefined4 *)(param_1 + 0x1c),0 < (int)uVar3 && param_2 == 0);
  return uVar3;
}

