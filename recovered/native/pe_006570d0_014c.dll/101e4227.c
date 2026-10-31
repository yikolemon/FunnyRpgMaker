/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4227 */

void __fastcall FUN_101e4227(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if ((iVar5 < 0) || (iVar2 = *(int *)(param_1 + 0x24), iVar2 / 2 < iVar5)) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    iVar5 = iVar2 / 2;
  }
  *(int *)(param_1 + 0x24) = iVar2 + iVar5 * -2;
  iVar2 = (**(code **)(param_1 + 0x1f0))(param_1);
  uVar4 = iVar2 - (uint)*(ushort *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x148) == 'u') {
    uVar4 = uVar4 - 0x20;
  }
  else if (*(char *)(param_1 + 0x148) == 't') {
    uVar4 = uVar4 - 0x10;
  }
  if ((uVar4 < 0x10) && (iVar5 != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x12a);
    iVar2 = 0;
    do {
      if ((uint)param_2[iVar2 * 2 + -1] < *(uint *)(param_1 + 0x150)) {
        if ((param_2[iVar2 * 2 + -2] & 0xf0U) == uVar4 * 0x10) {
          uVar3 = param_2[iVar2 * 2 + -2] & 0xf;
          (**(code **)(param_1 + 0x1fc))
                    (param_1,param_2[iVar2 * 2 + -1],
                     (uVar3 - (uVar3 < 8)) + -7 << (6U - (char)uVar1 & 0x1f));
        }
      }
      else if (*(char *)(param_1 + 0x1ce) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x86;
        return;
      }
      iVar2 = iVar2 + -1;
    } while (-iVar2 != iVar5);
  }
  return;
}

