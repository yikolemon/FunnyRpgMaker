/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b730 */

void __fastcall FUN_0043b730(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_2;
  if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x24), iVar2 / 2 < iVar6)) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    iVar6 = iVar2 / 2;
  }
  *(int *)(param_1 + 0x24) = iVar2 + iVar6 * -2;
  iVar2 = (**(code **)(param_1 + 0x1f0))(param_1);
  uVar5 = iVar2 - (uint)*(ushort *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x148) == 'r') {
    uVar5 = uVar5 - 0x20;
  }
  else if (*(char *)(param_1 + 0x148) == 'q') {
    uVar5 = uVar5 - 0x10;
  }
  if ((uVar5 < 0x10) && (iVar6 != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x12a);
    iVar2 = 0;
    do {
      uVar3 = param_2[iVar2 * 2 + -1] & 0xffff;
      if (uVar3 < *(ushort *)(param_1 + 0x28)) {
        if ((param_2[iVar2 * 2 + -2] & 0xf0U) == uVar5 * 0x10) {
          uVar4 = param_2[iVar2 * 2 + -2] & 0xf;
          if ((*(int *)(param_1 + 0x204) == 0) ||
             ((*(int *)(param_1 + 0x204) != 7 &&
              (((*(char *)(param_1 + 0x1cd) != '\0' && (*(short *)(param_1 + 0xfe) != 0)) ||
               ((*(byte *)(*(int *)(param_1 + 0x38) + uVar3) & 0x10) != 0)))))) {
            (**(code **)(param_1 + 0x1e8))
                      (param_1,param_1 + 0x28,uVar3,
                       (uVar4 - (uVar4 < 8)) + -7 << (6U - (char)uVar1 & 0x1f));
          }
        }
      }
      else if (*(char *)(param_1 + 0x1ce) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x86;
        return;
      }
      iVar2 = iVar2 + -1;
    } while (-iVar2 != iVar6);
  }
  return;
}

