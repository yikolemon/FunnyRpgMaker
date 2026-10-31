/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b0a7 */

void FUN_1010b0a7(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1039d74c;
  if (param_2 == 0) {
    uVar2 = DAT_1028b430;
    if (*(int *)(DAT_1039d74c + 0x1fec) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(DAT_1039d74c + 4);
    if (*(int *)(iVar1 + 0x1fec) == param_2) {
      return;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x30);
  }
  *(undefined4 *)(iVar1 + 0x1238) = uVar2;
  *(int *)(iVar1 + 0x1fec) = param_2;
  if (*(char *)(iVar1 + 0x76) == '\x01') {
    *(undefined4 *)(iVar1 + 0xcc8) = uVar2;
  }
  if ((param_2 != 0) && (*(code **)(iVar1 + 0xc7c) != (code *)0x0)) {
    (**(code **)(iVar1 + 0xc7c))(param_2);
  }
  return;
}

