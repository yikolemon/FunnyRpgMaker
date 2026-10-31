/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013ecb7 */

void FUN_14013ecb7(longlong param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *param_2;
  if ((iVar7 < 0) || (iVar2 = *(int *)(param_1 + 0x3c), iVar2 / 2 < iVar7)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar7 = iVar2 / 2;
  }
  *(int *)(param_1 + 0x3c) = iVar2 + iVar7 * -2;
  iVar2 = (**(code **)(param_1 + 0x300))(param_1);
  uVar4 = iVar2 - (uint)*(ushort *)(param_1 + 0x1cc);
  if (*(char *)(param_1 + 0x1f0) == 'r') {
    uVar4 = uVar4 - 0x20;
  }
  else if (*(char *)(param_1 + 0x1f0) == 'q') {
    uVar4 = uVar4 - 0x10;
  }
  if ((uVar4 < 0x10) && (iVar7 != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x1ce);
    puVar5 = (uint *)(param_2 + -1);
    do {
      uVar3 = (ulonglong)*puVar5 & 0xffff;
      if ((uint)uVar3 < (uint)*(ushort *)(param_1 + 0x40)) {
        if ((puVar5[-1] & 0xf0) == uVar4 << 4) {
          uVar6 = puVar5[-1] & 0xf;
          if ((*(int *)(param_1 + 0x324) == 0) ||
             ((*(int *)(param_1 + 0x324) != 7 &&
              (((*(char *)(param_1 + 0x2c5) != '\0' && (*(short *)(param_1 + 0x1a2) != 0)) ||
               ((*(byte *)(*(longlong *)(param_1 + 0x60) + uVar3) & 0x10) != 0)))))) {
            (**(code **)(param_1 + 0x2f0))
                      (param_1,(ushort *)(param_1 + 0x40),(ulonglong)*puVar5,
                       (uVar6 - (uVar6 < 8)) + -7 << (6U - (char)uVar1 & 0x1f));
          }
        }
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        return;
      }
      iVar7 = iVar7 + -1;
      puVar5 = puVar5 + -2;
    } while (iVar7 != 0);
  }
  return;
}

