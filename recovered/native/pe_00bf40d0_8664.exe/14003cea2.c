/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cea2 */

void FUN_14003cea2(longlong param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_2;
  if ((iVar6 < 0) || (iVar2 = *(int *)(param_1 + 0x3c), iVar2 / 2 < iVar6)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar6 = iVar2 / 2;
  }
  *(int *)(param_1 + 0x3c) = iVar2 + iVar6 * -2;
  iVar2 = (**(code **)(param_1 + 0x300))(param_1);
  uVar3 = iVar2 - (uint)*(ushort *)(param_1 + 0x1cc);
  if (*(char *)(param_1 + 0x1f0) == 'u') {
    uVar3 = uVar3 - 0x20;
  }
  else if (*(char *)(param_1 + 0x1f0) == 't') {
    uVar3 = uVar3 - 0x10;
  }
  if ((uVar3 < 0x10) && (iVar6 != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x1ce);
    puVar4 = (uint *)(param_2 + -1);
    do {
      if (*puVar4 < *(uint *)(param_1 + 0x1f8)) {
        if ((puVar4[-1] & 0xf0) == uVar3 << 4) {
          uVar5 = puVar4[-1] & 0xf;
          (**(code **)(param_1 + 0x318))
                    (param_1,*puVar4,(uVar5 - (uVar5 < 8)) + -7 << (6U - (char)uVar1 & 0x1f));
        }
      }
      else if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
        return;
      }
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + -2;
    } while (iVar6 != 0);
  }
  return;
}

