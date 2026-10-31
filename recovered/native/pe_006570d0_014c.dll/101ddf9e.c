/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ddf9e */

void __fastcall FUN_101ddf9e(int param_1,char param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xac4);
  iVar5 = *(int *)(iVar1 + 0x30c);
  if (iVar5 != 0) {
    uVar3 = 0xfffffffc;
    if (param_2 == '\0') {
      uVar3 = 0xffffffee;
    }
    iVar4 = iVar1 + 0x310;
    iVar2 = iVar5;
    do {
      if ((*(uint *)(iVar4 + 0x20) | uVar3) == 0xffffffff) {
        *param_3 = iVar4;
        iVar5 = *(int *)(iVar1 + 0x30c);
        if (iVar5 == 0) {
          return;
        }
        break;
      }
      iVar4 = iVar4 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = iVar1 + 0x310;
    do {
      if ((*(uint *)(iVar1 + 0x20) | (uint)(param_2 != '\0') * 0x20 - 0x42) == 0xffffffff) {
        *param_4 = iVar1;
        return;
      }
      iVar1 = iVar1 + 0x24;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

